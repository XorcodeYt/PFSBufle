#include "cheat.h"
#include "utils.h"
#include <windows.h>

namespace helper {
    inline float Vec3Size(const SDK::FVector& vec) {
        return sqrtf(vec.X * vec.X + vec.Y * vec.Y + vec.Z * vec.Z);
    }

    inline SDK::FVector Vec3Normalize(const SDK::FVector& vec) {
        float mag = Vec3Size(vec);
        if (mag == 0.f) return SDK::FVector(0, 0, 0);
        return SDK::FVector(vec.X / mag, vec.Y / mag, vec.Z / mag);
    }

    inline float Vec2Distance(const SDK::FVector2D& a, const SDK::FVector2D& b) {
        float dx = a.X - b.X;
        float dy = a.Y - b.Y;
        return sqrtf(dx * dx + dy * dy);
    }

    inline float Vec3Distance(const SDK::FVector& a, const SDK::FVector& b) {
        float dx = a.X - b.X;
        float dy = a.Y - b.Y;
        float dz = a.Z - b.Z;
        return sqrtf(dx * dx + dy * dy + dz * dz);
    }
    inline SDK::FRotator VecToRotator(const SDK::FVector& vec)
    {
        SDK::FRotator rot;
        rot.Pitch = -atan2f(vec.Z, sqrtf(vec.X * vec.X + vec.Y * vec.Y)) * (180.0f / 3.14159265f);
        rot.Yaw = atan2f(vec.Y, vec.X) * (180.0f / 3.14159265f);
        rot.Roll = 0.0f;
        return rot;
    }
}

SDK::ACharacter* GetBestTargetCharacter(SDK::APlayerController* pc, SDK::APawn* localPawn, SDK::FVector2D screenCenter, SDK::FVector2D& outScreenPos)
{
    SDK::ACharacter* bestTarget = nullptr;
    float bestMetric = FLT_MAX;

    SDK::FVector localPos = localPawn->K2_GetActorLocation();

    for (int i = 0; i < SDK::UObject::GObjects->Num(); ++i)
    {
        SDK::UObject* obj = SDK::UObject::GObjects->GetByIndex(i);
        if (!obj || !obj->IsA(SDK::ACharacter::StaticClass())) continue;

        auto* character = static_cast<SDK::ACharacter*>(obj);
        if (!character || character == localPawn) continue;

        std::string name = character->GetName();
        if (name.find("TrainGusPlayer") == std::string::npos) continue;

        auto* mesh = character->Mesh;
        if (!mesh || mesh->GetNumBones() <= 2) continue;

        SDK::FVector boneWorld = mesh->GetSocketLocation(mesh->GetBoneName(2));

        SDK::FVector2D screenPos;
        if (!pc->ProjectWorldLocationToScreen(boneWorld, &screenPos, false)) continue;

        float distToCrosshair = helper::Vec2Distance(screenPos, screenCenter);

        if (features::aimbot_fov_enabled && features::aimbot_fov > 0.f && distToCrosshair > features::aimbot_fov)
            continue;

        if (features::aimbot_type == 0) // crosshair
        {
            if (distToCrosshair < bestMetric)
            {
                bestMetric = distToCrosshair;
                bestTarget = character;
                outScreenPos = screenPos;
            }
        }
        else if (features::aimbot_type == 1) // 3D distance
        {
            float distToPlayer = helper::Vec3Size(boneWorld - localPos);
            if (distToPlayer < bestMetric)
            {
                bestMetric = distToPlayer;
                bestTarget = character;
                outScreenPos = screenPos;
            }
        }
    }

    return bestTarget;
}


bool cheat::Cheat::InitCheat()
{
    HANDLE PFSModuleBase = GetModuleHandleA("PirateFS-Win64-Shipping.exe");
    if (!PFSModuleBase)
    {
        utils::Console::logError("PirateFS-Win64-Shipping.exe cannot be found");
        return false;
    }

    utils::Console::log("PirateFS-Win64-Shipping.exe found");
    utils::Console::log("[DLL IDENTIFIER] Build tag: V2025.07.12_20h18");
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
        if (charName.find("TrainGusPlayer_C") == std::string::npos) continue;
		utils::Console::log("Found character: " + charName);

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
	// Bunny Hop
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
    //Crosshair
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
	//Godode
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
	// Aimbot
    if (features::aimbot_enabled && (GetAsyncKeyState(VK_RBUTTON) & 0x8000))
    {
        ImVec2 screenCenter = ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f);

        SDK::FVector2D screenCenterVec = { screenCenter.x, screenCenter.y };
        SDK::FVector2D targetScreen;
        SDK::ACharacter* bestTarget = GetBestTargetCharacter(playerController, localPawn, screenCenterVec, targetScreen);

        if (bestTarget)
        {
            drawList->AddCircleFilled(ImVec2(targetScreen.X, targetScreen.Y), 5.0f, IM_COL32(255, 0, 0, 255));
            SDK::USkeletalMeshComponent* mesh = bestTarget->Mesh;
            if (mesh && mesh->GetNumBones() > 2)
            {
                SDK::FVector targetHead = mesh->GetSocketLocation(mesh->GetBoneName(2));
                SDK::FVector from = playerController->PlayerCameraManager->GetCameraLocation();
                SDK::FVector aimDir = helper::Vec3Normalize(targetHead - from);
                SDK::FRotator aimRot = helper::VecToRotator(aimDir);
                aimRot.Pitch *= -1.f;

                playerController->SetControlRotation(aimRot);

                SDK::APlayerCameraManager* cam = playerController->PlayerCameraManager;
                if (cam)
                    cam->K2_SetActorRotation(aimRot, false);

                utils::Console::log("[AIMBOT] Aim applied: Pitch=" + std::to_string(aimRot.Pitch) + ", Yaw=" + std::to_string(aimRot.Yaw));
            }
        }
    }

    if (features::aimbot_fov_enabled && features::aimbot_fov_enabled && features::aimbot_fov > 0.f)
    {
        ImVec2 screenCenter = ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f);
        drawList->AddCircle(screenCenter, features::aimbot_fov, IM_COL32(255, 255, 0, 180), 64, 1.5f);
    }
    static std::string lastSpoofedName = "";
	// Name spoofing
    if (features::spoof_name_enabled) {
        std::string current = std::string(features::spoofed_name);
        if (current != lastSpoofedName && current.length() > 0) {
            SDK::APlayerController* pc = world->OwningGameInstance->LocalPlayers[0]->PlayerController;
            if (pc) {
                std::wstring wideName(current.begin(), current.end());
                SDK::FString fName(wideName.c_str());
                pc->ServerChangeName(fName);
                utils::Console::log("[NAME SPOOF] Sent name change to: " + current);
                lastSpoofedName = current;
            }
        }
    }
    // Fly mode
    if (features::enable_fly) {
        SDK::ACharacter* character = static_cast<SDK::ACharacter*>(localPawn);
        if (character) {
            SDK::UPrimitiveComponent* root = reinterpret_cast<SDK::UPrimitiveComponent*>(character->RootComponent);
            if (root) {
                float flySpeed = 3000.0f;
                SDK::FVector impulse(0.f, 0.f, flySpeed);
                SDK::USkeletalMeshComponent* mesh = character->Mesh;
                if (!mesh) return;
                SDK::FName rootBone = mesh->GetBoneName(0);
                root->AddImpulse(impulse, rootBone, true);
            }
        }
    }

    if (localPawn->IsA(SDK::ATrainGusPlayer_C::StaticClass())) {
        auto* gusPlayer = static_cast<SDK::ATrainGusPlayer_C*>(localPawn);
        if (features::infinite_ammo) {
            gusPlayer->Flintlock_ammo = 5;
            gusPlayer->Eye_of_reach_ammo = 5;
            gusPlayer->Blunderbuss_Ammo = 5;
        }
    }
    return;
}