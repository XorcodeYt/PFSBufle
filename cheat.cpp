#include "cheat.h"
#include "utils.h"
#include <windows.h>

cheat::Cheat::ReceiveBeginPlayFn cheat::Cheat::original_Server = nullptr;
cheat::Cheat::ReceiveBeginPlayFn cheat::Cheat::original_Client = nullptr;

void __fastcall cheat::Cheat::Hooked_Server_ReceiveBeginPlay(SDK::AActor* This)
{
    utils::Console::log("EyeOfReach Projectile Server Spawned !");
    if (original_Server) original_Server(This);
}

void __fastcall cheat::Cheat::Hooked_Client_ReceiveBeginPlay(SDK::AActor* This)
{
    utils::Console::log("EyeOfReach Projectile Client Spawned !");
    if (original_Client) original_Client(This);
}

void cheat::Cheat::Hook_EyeOfReach_Projectile()
{
    constexpr int ReceiveBeginPlayIndex = 145;

    // Hook Server
    {
        auto cls = SDK::AEyeOfReach_Projectile_Server_C::StaticClass();
        void* defaultObject = cls->GetDefaultObj();
        if (!defaultObject) {
            utils::Console::logError("[Hook] DefaultObject for EyeOfReach Server/Client is null!");
            return;
        }
        void** vtable = *(void***)defaultObject;
        original_Server = reinterpret_cast<ReceiveBeginPlayFn>(vtable[ReceiveBeginPlayIndex]);

        DWORD oldProtect;
        VirtualProtect(&vtable[ReceiveBeginPlayIndex], sizeof(void*), PAGE_EXECUTE_READWRITE, &oldProtect);
        vtable[ReceiveBeginPlayIndex] = reinterpret_cast<void*>(&Hooked_Server_ReceiveBeginPlay);
        VirtualProtect(&vtable[ReceiveBeginPlayIndex], sizeof(void*), oldProtect, &oldProtect);
    }

    // Hook Client
    {
        auto cls = SDK::AEyeOfReach_Projectile_Client_C::StaticClass();
        void* defaultObject = cls->GetDefaultObj();
        if (!defaultObject) {
            utils::Console::logError("[Hook] DefaultObject for EyeOfReach Server/Client is null!");
            return;
        }
        void** vtable = *(void***)defaultObject;
        original_Client = reinterpret_cast<ReceiveBeginPlayFn>(vtable[ReceiveBeginPlayIndex]);

        DWORD oldProtect;
        VirtualProtect(&vtable[ReceiveBeginPlayIndex], sizeof(void*), PAGE_EXECUTE_READWRITE, &oldProtect);
        vtable[ReceiveBeginPlayIndex] = reinterpret_cast<void*>(&Hooked_Client_ReceiveBeginPlay);
        VirtualProtect(&vtable[ReceiveBeginPlayIndex], sizeof(void*), oldProtect, &oldProtect);
    }

    utils::Console::log("Hook EyeOfReach projectile (Server + Client) OK.");
}

bool cheat::Cheat::InitCheat()
{
    HANDLE PFSModuleBase = GetModuleHandleA("PirateFS-Win64-Shipping.exe");
    if (!PFSModuleBase)
    {
        utils::Console::logError("PirateFS-Win64-Shipping.exe cannot be found");
        return;
    }

    utils::Console::log("PirateFS-Win64-Shipping.exe found");
    utils::Console::log("[DLL IDENTIFIER] Build tag: V2025.07.12_01h58");

    Cheat::Hook_EyeOfReach_Projectile();
    return true;
}

void cheat::Cheat::RefreshCheat()
{
    SDK::UWorld* world = SDK::UWorld::GetWorld();
    if (!world) return;

    SDK::APlayerController* playerController = world->OwningGameInstance->LocalPlayers[0]->PlayerController;
    if (!playerController) return;

    SDK::APawn* localPawn = playerController->AcknowledgedPawn;
    if (!localPawn) return;

    ImDrawList* drawList = ImGui::GetBackgroundDrawList();

    // FOV 
    if (features::fov_enabled) {

        SDK::UWorld* world = SDK::UWorld::GetWorld();
        if (!world) return;

        SDK::ULevel* level = world->PersistentLevel;
        if (!level) {
            utils::Console::logError("Failed to get PL");
            return;
        }

        SDK::APlayerController* playerController = world->OwningGameInstance->LocalPlayers[0]->PlayerController;
        if (!playerController) return;

        playerController->FOV(features::fov);
    }

    // Draw ESP for characters

    int boneLinks[][2] = {
        {6,5},{5,4},{4,3},{3,2},{2,1},{1,0},
        {11,10},{10,9},{9,8},{8,3},
        {14,13},{13,8},{14,15},{17,18},
        {18,19},{19,20},{17,22},{22,23},{23,24},{24,25}
    };
    int linkCount = sizeof(boneLinks) / sizeof(boneLinks[0]);

    for (int i = 0; i < SDK::UObject::GObjects->Num(); ++i) {
        SDK::UObject* obj = SDK::UObject::GObjects->GetByIndex(i);
        if (!obj || !obj->IsA(SDK::ACharacter::StaticClass())) continue;

        SDK::ACharacter* character = reinterpret_cast<SDK::ACharacter*>(obj);
        if (!character || character == localPawn) continue;

        std::string charName = character->GetName();
        if (charName.find("TrainGusPlayer") == std::string::npos) continue;

        SDK::USkeletalMeshComponent* mesh = character->Mesh;
        if (!mesh) continue;

        int boneCount = mesh->GetNumBones();
        // show bones
        if (features::bone_esp) {
            for (int k = 0; k < linkCount; ++k) {
                int idx1 = boneLinks[k][0];
                int idx2 = boneLinks[k][1];
                if (idx1 >= boneCount || idx2 >= boneCount) continue;

                SDK::FVector p1 = mesh->GetSocketLocation(mesh->GetBoneName(idx1));
                SDK::FVector p2 = mesh->GetSocketLocation(mesh->GetBoneName(idx2));
                SDK::FVector2D s1, s2;

                if (playerController->ProjectWorldLocationToScreen(p1, &s1, false) &&
                    playerController->ProjectWorldLocationToScreen(p2, &s2, false)) {
                    drawList->AddLine(ImVec2(s1.X, s1.Y), ImVec2(s2.X, s2.Y), IM_COL32(255, 255, 255, 255), 1.5f);
                }
            }
        }
        // show 2D box
        if (features::box2d_esp) {
            float minX = FLT_MAX, minY = FLT_MAX;
            float maxX = -FLT_MAX, maxY = -FLT_MAX;

            for (int j = 0; j < boneCount; ++j) {
                SDK::FName boneName = mesh->GetBoneName(j);
                std::string boneStr = boneName.ToString();
                if (boneStr == "Bone_006_end" || boneStr == "Bone_009_end")
                    continue;

                SDK::FVector pos = mesh->GetSocketLocation(boneName);
                SDK::FVector2D screen;
                if (playerController->ProjectWorldLocationToScreen(pos, &screen, false)) {
                    if (screen.X < minX) minX = screen.X;
                    if (screen.Y < minY) minY = screen.Y;
                    if (screen.X > maxX) maxX = screen.X;
                    if (screen.Y > maxY) maxY = screen.Y;
                }
            }

            if (minX < maxX && minY < maxY) {
                float width = maxX - minX;
                float height = maxY - minY;

                minX -= width * 0.20f;
                maxX += width * 0.20f;
                minY -= height * 0.25f;
                maxY += height * 0.15f;

                drawList->AddRect(ImVec2(minX, minY), ImVec2(maxX, maxY),
                    IM_COL32(255, 255, 0, 255), 0.0f, 0, 1.5f);
            }
        }
        // show 3D box
        if (features::box3d_esp) {
            float minZ = FLT_MAX;
            float maxZ = -FLT_MAX;
            for (int j = 0; j < boneCount; ++j) {
                SDK::FVector bonePos = mesh->GetSocketLocation(mesh->GetBoneName(j));
                if (bonePos.Z < minZ) minZ = bonePos.Z;
                if (bonePos.Z > maxZ) maxZ = bonePos.Z;
            }

            float height = (maxZ - minZ) * 1.2f;
            float boxWidth = 75.0f;
            float boxDepth = 75.0f;

            SDK::FVector base = character->K2_GetActorLocation();
            SDK::FRotator rotation = character->K2_GetActorRotation();
            float yawRad = rotation.Yaw * 0.0174532925f; // degrees to radians

            float cosYaw = cosf(yawRad);
            float sinYaw = sinf(yawRad);

            SDK::FVector corners[8];
            for (int b = 0; b < 8; ++b) {
                float dx = (b & 1 ? 1.f : -1.f) * boxWidth * 0.5f;
                float dy = (b & 2 ? 1.f : -1.f) * boxDepth * 0.5f;
                float dz = (b & 4 ? 1.f : 0.f) * height;

                float rotatedX = dx * cosYaw - dy * sinYaw;
                float rotatedY = dx * sinYaw + dy * cosYaw;

                corners[b] = SDK::FVector(base.X + rotatedX, base.Y + rotatedY, minZ + dz);
            }

            SDK::FVector2D screen[8];
            bool allVisible = true;
            for (int b = 0; b < 8; ++b) {
                if (!playerController->ProjectWorldLocationToScreen(corners[b], &screen[b], false)) {
                    allVisible = false;
                    break;
                }
            }

            if (!allVisible) continue;

            const int edges[12][2] = {
                {0,1},{1,3},{3,2},{2,0},
                {4,5},{5,7},{7,6},{6,4},
                {0,4},{1,5},{2,6},{3,7}
            };

            for (int e = 0; e < 12; ++e) {
                ImVec2 p1(screen[edges[e][0]].X, screen[edges[e][0]].Y);
                ImVec2 p2(screen[edges[e][1]].X, screen[edges[e][1]].Y);
                drawList->AddLine(p1, p2, IM_COL32(0, 255, 255, 255), 1.5f);
            }
        }
    }


    if (features::bhop && (GetAsyncKeyState(VK_SPACE) & 0x8000)) {
        SDK::UWorld* world = SDK::UWorld::GetWorld();
        if (world) {
            SDK::APlayerController* playerController = world->OwningGameInstance->LocalPlayers[0]->PlayerController;
            if (playerController) {
                SDK::APawn* localPawn = playerController->AcknowledgedPawn;
                if (localPawn && localPawn->IsA(SDK::ACharacter::StaticClass())) {
                    SDK::ACharacter* character = static_cast<SDK::ACharacter*>(localPawn);
                    character->Jump();
                }
            }
        }
    }

    if (features::crosshair_enabled) {
        ImVec2 screenCenter = ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f);
        ImU32 color = ImGui::ColorConvertFloat4ToU32(features::crosshair_color);

        if (features::crosshair_type == 0) {
            drawList->AddCircleFilled(screenCenter, features::crosshair_size, color);
        }
        else if (features::crosshair_type == 1) {
            float s = features::crosshair_size;
            float t = features::crosshair_thickness;
            drawList->AddLine(ImVec2(screenCenter.x - s, screenCenter.y), ImVec2(screenCenter.x + s, screenCenter.y), color, t);
            drawList->AddLine(ImVec2(screenCenter.x, screenCenter.y - s), ImVec2(screenCenter.x, screenCenter.y + s), color, t);
        }
    }

    if (features::godmode) {
        SDK::UWorld* world = SDK::UWorld::GetWorld();
        if (!world) return;

        SDK::ULevel* level = world->PersistentLevel;
        if (!level) return;

        for (int i = 0; i < level->Actors.Num(); ++i) {
            SDK::AActor* actor = level->Actors[i];
            if (!actor) continue;

            std::string actorName = actor->GetName();
            utils::Console::log("[Actor] " + actorName);

            for (int j = 0; j < actor->Children.Num(); ++j) {
                SDK::UObject* child = actor->Children[j];
                if (!child) continue;

                std::string childName = child->GetName();
                utils::Console::log("    [+] Child: " + childName);

                if (child->IsA(SDK::UActorComponent::StaticClass())) {
                    auto component = static_cast<SDK::UActorComponent*>(child);
                    std::string compName = component->GetName();
                    utils::Console::log("        ↳ UActorComponent: " + compName);

                    if (compName.find("Banana") != std::string::npos) {
                        utils::Console::log("        [!!] Candidate BananaComponent: " + compName);
                    }
                }
            }
        }
    }
    return;
}