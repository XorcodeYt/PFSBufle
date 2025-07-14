#include "cheat.h"
#include "utils.h"
#include <windows.h>
#include "stdafx.h"

// Forward declaration
void __fastcall hkProcessEvent(SDK::UObject* obj, SDK::UFunction* function, void* params);

typedef void(__fastcall* tProcessEvent)(SDK::UObject*, SDK::UFunction*, void*);
tProcessEvent oProcessEvent = nullptr;

SDK::ACharacter* GetBestTargetCharacter(SDK::APlayerController* pc, SDK::APawn* localPawn, SDK::FVector2D screenCenter, SDK::FVector2D& outScreenPos, int type, bool fov_enabled, float fov)
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
        if (name.find("Default") != std::string::npos) continue;

        auto* trainPlayer = reinterpret_cast<SDK::ATrainGusPlayer_C*>(character);
        if (!trainPlayer) continue;

        if (trainPlayer->IsDead_) continue;

        auto* mesh = character->Mesh;
        if (!mesh || mesh->GetNumBones() <= 2) continue;

        SDK::FVector boneWorld = mesh->GetSocketLocation(mesh->GetBoneName(2));
        SDK::FVector2D screenPos;

        if (fov_enabled)
        {
            if (!pc->ProjectWorldLocationToScreen(boneWorld, &screenPos, false)) continue;

            float distToCrosshair = helper::Vec2Distance(screenPos, screenCenter);
            if (distToCrosshair > fov) continue;
        }

        if (type == 0) // closest to crosshair
        {
            // fallback screen projection for output even if FOV is off
            if (!pc->ProjectWorldLocationToScreen(boneWorld, &screenPos, false)) continue;

            float distToCrosshair = helper::Vec2Distance(screenPos, screenCenter);
            if (distToCrosshair < bestMetric)
            {
                bestMetric = distToCrosshair;
                bestTarget = character;
                outScreenPos = screenPos;
            }
        }
        else if (type == 1) // closest by 3D distance
        {
            float distToPlayer = helper::Vec3Size(boneWorld - localPos);
            if (distToPlayer < bestMetric)
            {
                bestMetric = distToPlayer;
                bestTarget = character;

                // try to set outScreenPos for visual targeting if possible
                pc->ProjectWorldLocationToScreen(boneWorld, &outScreenPos, false);
            }
        }
    }

    return bestTarget;
}

void HookProcessEvent()
{
    void** vtable = *(void***)(SDK::UObject::GObjects->GetByIndex(0));
    if (!vtable) {
        utils::Console::logError("[HOOK] Failed to get UObject vtable");
        return;
    }

    void* target = vtable[75]; // ProcessEvent idx de offsets
    utils::Console::log("[HOOK] VTable[75] = " + std::to_string((uintptr_t)target));

    if (MH_CreateHook(target, &hkProcessEvent, reinterpret_cast<void**>(&oProcessEvent)) == MH_OK) {
        MH_EnableHook(target);
        utils::Console::log("[HOOK] ProcessEvent hooked successfully");
    }
    else {
        utils::Console::logError("[HOOK] Failed to hook ProcessEvent");
    }
}

void __fastcall hkProcessEvent(SDK::UObject* obj, SDK::UFunction* function, void* params)
{
    if (!function || !oProcessEvent) return;

    const std::string fname = function->GetFullName();

    if (
        fname.find("ReceiveBeginPlay") != std::string::npos &&
        (
            fname.find("FlintlockProjectile") != std::string::npos ||
            fname.find("BlunderProjectile") != std::string::npos ||
            fname.find("EyeOfReach_Projectile") != std::string::npos
            )
        )
    {
        // Cast en AActor
        SDK::AActor* proj = static_cast<SDK::AActor*>(obj);
        if (!proj) return;

        SDK::UWorld* world = SDK::UWorld::GetWorld();
        if (!world) return;

        SDK::APlayerController* pc = world->OwningGameInstance->LocalPlayers[0]->PlayerController;
        if (!pc) return;

        SDK::APawn* localPawn = pc->AcknowledgedPawn;
        if (!localPawn) return;

        if (features::enable_magicbullet) {

            ImDrawList* drawList = ImGui::GetBackgroundDrawList();

            ImVec2 screenCenter = ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f);

            SDK::FVector2D screenCenterVec = { screenCenter.x, screenCenter.y };
            SDK::FVector2D targetScreen;

            SDK::ACharacter* bestTarget = GetBestTargetCharacter(pc, localPawn, screenCenterVec, targetScreen, features::magicbullet_type, features::magicbullet_fov_enabled, features::magicbullet_fov);
            if (!bestTarget) return;

            drawList->AddCircleFilled(ImVec2(targetScreen.X, targetScreen.Y), 5.0f, IM_COL32(255, 0, 0, 255));

            // Head pos
            SDK::USkeletalMeshComponent* mesh = bestTarget->Mesh;
            if (!mesh || mesh->GetNumBones() <= 2) return;

            SDK::FVector headPos = mesh->GetSocketLocation(mesh->GetBoneName(2));
        
            // Teleport le projectile
            SDK::FHitResult dummyHit;
            proj->K2_SetActorLocation(headPos, false, &dummyHit, true);
		}


    }
    // Continue normal ProcessEvent
    oProcessEvent(obj, function, params);
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

    HookProcessEvent();

    utils::Console::log("[MinHook] Hooks initialized");

    return true;
}

void cheat::Cheat::RefreshCheat()
{
    SDK::UWorld* world = SDK::UWorld::GetWorld();
    if (!world) return;

    SDK::APlayerController* playerController = world->OwningGameInstance->LocalPlayers[0]->PlayerController;
    if (!playerController) return;

    SDK::APawn* localPawn = playerController->AcknowledgedPawn;
    if (!localPawn || !localPawn->IsA(SDK::ATrainGusPlayer_C::StaticClass())) return; // si c pas un ATrainGusPlayer_C alors return

    auto* gusPlayer = static_cast<SDK::ATrainGusPlayer_C*>(localPawn);

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
        {6,5},{5,4},{4,3},{3,2},{2,1},
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
        if (charName.find("Default") != std::string::npos) continue;

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
                    drawList->AddLine(ImVec2(s1.X, s1.Y), ImVec2(s2.X, s2.Y), featurescolors::Bones_color, 1.5f);
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
                    featurescolors::box_color2D, 0.0f, 0, 1.5f);
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
                drawList->AddLine(p1, p2, featurescolors::box_color3D, 1.5f);
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

    // Crosshair
    if (features::crosshair_enabled) {
        ImVec2 screenCenter = ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f);
        ImU32 color = ImGui::ColorConvertFloat4ToU32(featurescolors::crosshair_color);

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

	// Aimbot
    if (features::aimbot_enabled) {
        ImVec2 screenCenter = ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f);

        SDK::FVector2D screenCenterVec = { screenCenter.x, screenCenter.y };
        SDK::FVector2D targetScreen;
        SDK::ACharacter* bestTarget = GetBestTargetCharacter(playerController, localPawn, screenCenterVec, targetScreen, features::aimbot_type, features::aimbot_fov_enabled, features::aimbot_fov);

        if (bestTarget)
        {
			utils::Console::log("[AIMBOT] Target found: " + bestTarget->GetName());
            drawList->AddCircleFilled(ImVec2(targetScreen.X, targetScreen.Y), 5.0f, featurescolors::Aimbot_dot_color);

            if ((GetAsyncKeyState(VK_RBUTTON) & 0x8000))
            {
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
                }
            }
        }
    }

	// Draw Aimbot/MagicBullet FOV
    if (features::aimbot_fov_enabled && features::aimbot_fov > 0.f or features::magicbullet_fov_enabled && features::magicbullet_fov > 0.0f)
    {
        ImVec2 screenCenter = ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f);
        drawList->AddCircle(screenCenter, features::aimbot_fov, featurescolors::Aimbot_FOV_color, 64, 1.5f);
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

	// Infinite Ammo + supplies
    if (features::infinite_ammo) {
        gusPlayer->Flintlock_ammo = 5;
        gusPlayer->Eye_of_reach_ammo = 5;
        gusPlayer->Blunderbuss_Ammo = 5;
    }
    if (features::infinite_supplies) {
        gusPlayer->Blunderbomb_Amount = 5;
        gusPlayer->Bannana_Amount = 5;
    }

	// No Reload
    if (features::no_reload) {
        SDK::UWorld* world = SDK::UWorld::GetWorld();
        if (!world) return;

        SDK::APlayerController* playerController = world->OwningGameInstance->LocalPlayers[0]->PlayerController;
        if (!playerController) return;

        SDK::APawn* localPawn = playerController->AcknowledgedPawn;
        if (!localPawn || !localPawn->IsA(SDK::ATrainGusPlayer_C::StaticClass())) return;

        auto* gus = static_cast<SDK::ATrainGusPlayer_C*>(localPawn);

        auto callFunction = [](SDK::UObject* obj, const char* name) {
            SDK::UFunction* fn = SDK::UObject::FindObject<SDK::UFunction>(name);
            if (fn && obj)
                obj->ProcessEvent(fn, nullptr);
            };

        gus->Reloading = false;
        gus->Is_Reload_ = false;
        gus->Reload_time = 0.0;
        gus->Loaded = true;
        gus->CanFire_ = true;

        if (gus->FlintlockFired or gus->IsReloadingFlintlock_) {
            gus->Flintlock_Current_Timer = SDK::FTimerHandle{};
            gus->IsReloadingFlintlock_ = false;
            callFunction(gus, "Function TrainGusPlayer.TrainGusPlayer_C.Finish Reloading Flintlock");
            callFunction(gus, "Function TrainGusPlayer.TrainGusPlayer_C.Finish Flintlock Reload slot 2");
            gus->FlintlockFired = false;
        }

        if (gus->EorFired or gus->IsReloadingEOR_) {
            gus->Sniper_Current_Timer = SDK::FTimerHandle{};
            gus->IsReloadingEOR_ = false;
            callFunction(gus, "Function TrainGusPlayer.TrainGusPlayer_C.Finish Reloading EOR");
            callFunction(gus, "Function TrainGusPlayer.TrainGusPlayer_C.Finish EOR Reload slot 2");
            gus->EorFired = false;
        }

        if (gus->BlunderBussFired or gus->IsReloadingBlunderbuss_) {
            gus->Blunderbuss_Current_Timer = SDK::FTimerHandle{};
            gus->IsReloadingBlunderbuss_ = false;
            callFunction(gus, "Function TrainGusPlayer.TrainGusPlayer_C.Finish Blunderbuss Reload");
            callFunction(gus, "Function TrainGusPlayer.TrainGusPlayer_C.Finish Blunderbuss Reload slot 2");
            gus->BlunderBussFired = false;
        }
    }

    return;
}