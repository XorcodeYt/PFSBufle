#include "cheat.h"
#include "utils.h"
#include <windows.h>
#include "stdafx.h"
#include <unordered_set>
#include <queue>
#include <functional>  

// Forward declaration
typedef void(__fastcall* tProcessEvent)(SDK::UObject*, SDK::UFunction*, void*);
tProcessEvent oProcessEvent = nullptr;

typedef void(__fastcall* tPostRender)(SDK::UGameViewportClient*, SDK::UCanvas*);
tPostRender oPostRender = nullptr;


// get few values
inline int GetCurrentWeapon(SDK::ATrainGusPlayer_C* gus)
{
    if (!gus) return 0;

    if (gus->Blunderbuss_Equipped_Right_now) return 1;
    if (gus->FlintlockEquppiedRightnow)        return 2;
    if (gus->Eye_of_Reach_Equipped_rightnow)   return 3;

    return 0;
}

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

        if (trainPlayer->IsDead_ || trainPlayer->Current_Health < 1) continue;

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

SDK::ATrainGusPlayer_C* GetClosestPlayer(SDK::APawn* localPawn)
{
    if (!localPawn) return nullptr;

    SDK::FVector localPos = localPawn->K2_GetActorLocation();
    SDK::ATrainGusPlayer_C* closest = nullptr;
    float minDistance = FLT_MAX;

    for (int i = 0; i < SDK::UObject::GObjects->Num(); ++i)
    {
        SDK::UObject* obj = SDK::UObject::GObjects->GetByIndex(i);
        if (!obj || !obj->IsA(SDK::ATrainGusPlayer_C::StaticClass())) continue;

        auto* player = static_cast<SDK::ATrainGusPlayer_C*>(obj);
        if (!player || player == localPawn) continue;

        std::string name = player->GetName();
        if (name.find("TrainGusPlayer") == std::string::npos) continue;
        if (name.find("Default") != std::string::npos) continue;

        auto* trainPlayer = reinterpret_cast<SDK::ATrainGusPlayer_C*>(player);

        if (!trainPlayer) continue;

        if (trainPlayer->IsDead_ || trainPlayer->Current_Health < 1) continue;

        if (player->IsDead_ || player->Current_Health < 1) continue;

        SDK::FVector targetPos = player->K2_GetActorLocation();
        float distance = helper::Vec3Size(targetPos - localPos);

        if (distance < minDistance)
        {
            minDistance = distance;
            closest = player;
        }
    }

    return closest;
}

void DrawFilledCircle(SDK::UCanvas* canvas, const SDK::FVector2D& center, float radius, int segments, const SDK::FLinearColor& color)
{
    SDK::FVector2D prevPoint = SDK::FVector2D(center.X + radius, center.Y);
    for (int i = 1; i <= segments; ++i)
    {
        float angle = 2.0f * 3.14159265f * i / segments;
        SDK::FVector2D newPoint = SDK::FVector2D(
            center.X + cosf(angle) * radius,
            center.Y + sinf(angle) * radius
        );

        // Draw triangle fan lines (simulate fill)
        canvas->K2_DrawLine(center, prevPoint, 1.0f, color);
        canvas->K2_DrawLine(prevPoint, newPoint, 1.0f, color);
        canvas->K2_DrawLine(newPoint, center, 1.0f, color);

        prevPoint = newPoint;
    }
}

// hooks
void __fastcall hkProcessEvent(SDK::UObject* obj, SDK::UFunction* function, void* params)
{
    if (!function || !oProcessEvent) return;

    static std::unordered_set<std::string> alreadyLogged;
    const std::string fname = function->GetFullName();

    if (
        fname.find("ReceiveBeginPlay") != std::string::npos &&
        (
            fname.find("Flintlock_Projectile") != std::string::npos ||
            fname.find("FlintlockProjectile") != std::string::npos ||
            fname.find("BlunderProjectile") != std::string::npos ||
            fname.find("Blunderbomb") != std::string::npos ||
            fname.find("EyeOfReach_Projectile") != std::string::npos
            )
        )
    {
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

            SDK::ACharacter* bestTarget = GetClosestPlayer(localPawn);
            if (!bestTarget) return;

            SDK::FVector targetPos = bestTarget->K2_GetActorLocation();
            targetPos.Z += 30.f;

            SDK::FHitResult dummyHit;
            proj->K2_SetActorLocation(targetPos, false, &dummyHit, true);

            SDK::FRotator upRot = { -90.f, 0.f, 0.f };
            proj->K2_SetActorRotation(upRot, false);
        }
    }

    // Appel original
    oProcessEvent(obj, function, params);
}

void HookProcessEvent()
{
    void** vtable = *(void***)(SDK::UObject::GObjects->GetByIndex(0));
    if (!vtable) {
        utils::Console::logError("[HOOK] Failed to get UObject vtable");
        return;
    }

    void* target = vtable[75];
    utils::Console::log("[HOOK] VTable[75] = " + std::to_string((uintptr_t)target));

    if (MH_CreateHook(target, &hkProcessEvent, reinterpret_cast<void**>(&oProcessEvent)) == MH_OK) {
        MH_EnableHook(target);
        utils::Console::log("[HOOK] ProcessEvent hooked successfully");
    }
    else {
        utils::Console::logError("[HOOK] Failed to hook ProcessEvent");
    }
}

void __fastcall hkPostRender(SDK::UGameViewportClient* viewport, SDK::UCanvas* canvas)
{
    cheat::Cheat::RefreshCheat(canvas);

    if (oPostRender)
        oPostRender(viewport, canvas);
}

void HookPostRender()
{
    SDK::UWorld* world = SDK::UWorld::GetWorld();
    if (!world || !world->OwningGameInstance) {
        utils::Console::logError("[HOOK] Failed: No world or game instance");
        return;
    }

    const auto& localPlayers = world->OwningGameInstance->LocalPlayers;
    if (localPlayers.Num() == 0 || !localPlayers[0]) {
        utils::Console::logError("[HOOK] Failed: No local players");
        return;
    }

    SDK::ULocalPlayer* localPlayer = localPlayers[0];
    SDK::UGameViewportClient* viewport = localPlayer->ViewportClient;

    if (!viewport) {
        utils::Console::logError("[HOOK] Failed: Viewport is null");
        return;
    }

    void** vtable = *(void***)(viewport);
    if (!vtable) {
        utils::Console::logError("[HOOK] Failed: Viewport vtable is null");
        return;
    }

    void* target = vtable[0x6C];
    utils::Console::log("[HOOK] Hooking PostRender @ vtable[0x5E]");

    if (MH_CreateHook(target, &hkPostRender, reinterpret_cast<void**>(&oPostRender)) == MH_OK) {
        MH_EnableHook(target);
        utils::Console::log("[HOOK] PostRender hooked successfully");
    }
    else {
        utils::Console::logError("[HOOK] Failed to hook PostRender");
    }
}

// cheat logic
bool cheat::Cheat::InitCheat()
{
    HANDLE PFSModuleBase = GetModuleHandleA("PirateFS-Win64-Shipping.exe");
    if (!PFSModuleBase)
    {
        utils::Console::logError("PirateFS-Win64-Shipping.exe cannot be found");
        return false;
    }

    utils::Console::log("PirateFS-Win64-Shipping.exe found");
    utils::Console::log("[DLL IDENTIFIER] Build tag: V" __DATE__ " " __TIME__);

    HookProcessEvent();
    HookPostRender();

    utils::Console::log("[MinHook] Hooks initialized");

    return true;
}

void cheat::Cheat::RefreshCheat(SDK::UCanvas* canvas)
{
    SDK::UWorld* world = SDK::UWorld::GetWorld();
    if (!world) return;

    SDK::APlayerController* playerController = world->OwningGameInstance->LocalPlayers[0]->PlayerController;
    if (!playerController) return;

    SDK::APawn* localPawn = playerController->AcknowledgedPawn;
    if (!localPawn || !localPawn->IsA(SDK::ATrainGusPlayer_C::StaticClass())) return;

    auto* gusPlayer = static_cast<SDK::ATrainGusPlayer_C*>(localPawn);
	if (!gusPlayer) return;

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

        auto* trainPlayer = reinterpret_cast<SDK::ATrainGusPlayer_C*>(character);
        if (!trainPlayer) continue;

        if (trainPlayer->IsDead_ || trainPlayer->Current_Health < 1) continue;

        SDK::USkeletalMeshComponent* mesh = character->Mesh;
        if (!mesh) continue;

        int boneCount = mesh->GetNumBones();
        // show bones
        if (features::bone_esp) {
            for (int k = 0; k < linkCount; ++k) {
                int idx1 = boneLinks[k][0];
                int idx2 = boneLinks[k][1];
                if (idx1 >= boneCount || idx2 >= boneCount) continue;

                SDK::FVector bone1World = mesh->GetSocketLocation(mesh->GetBoneName(idx1));
                SDK::FVector bone2World = mesh->GetSocketLocation(mesh->GetBoneName(idx2));
                SDK::FVector2D screen1, screen2;

                if (playerController->ProjectWorldLocationToScreen(bone1World, &screen1, false) &&
                    playerController->ProjectWorldLocationToScreen(bone2World, &screen2, false)) {

                    SDK::FLinearColor color = helper::ImU32ToLinearColor(featurescolors::Bones_color);
                    canvas->K2_DrawLine(screen1, screen2, 2.f, color);
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

                SDK::FVector2D topLeft(minX, minY);
                SDK::FVector2D topRight(maxX, minY);
                SDK::FVector2D bottomLeft(minX, maxY);
                SDK::FVector2D bottomRight(maxX, maxY);

                SDK::FLinearColor color = helper::ImU32ToLinearColor(featurescolors::box_color2D);

                canvas->K2_DrawLine(topLeft, topRight, 2.f, color);
                canvas->K2_DrawLine(topRight, bottomRight, 2.f, color);
                canvas->K2_DrawLine(bottomRight, bottomLeft, 2.f, color);
                canvas->K2_DrawLine(bottomLeft, topLeft, 2.f, color);
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
                SDK::FVector2D p1(screen[edges[e][0]].X, screen[edges[e][0]].Y);
                SDK::FVector2D p2(screen[edges[e][1]].X, screen[edges[e][1]].Y);
                SDK::FLinearColor color = helper::ImU32ToLinearColor(featurescolors::box_color3D);
                canvas->K2_DrawLine(p1, p2, 2.f, color);
            }
        }
        if (features::health_bar) {
            SDK::FVector headPos = mesh->GetSocketLocation(mesh->GetBoneName(8)); // Cou / chest
            SDK::FVector2D screenHead;

            if (playerController->ProjectWorldLocationToScreen(headPos, &screenHead, false)) {

                float barWidth = 40.0f;   // 2× plus large
                float barHeight = 8.0f;   // 2× plus haut

                float x = screenHead.X - (barWidth * 0.5f);
                float y = screenHead.Y - 30.0f; // au-dessus de la tête

                float raw = trainPlayer->Current_Health / 100.0f;
                float percent = raw < 0.f ? 0.f : (raw > 1.f ? 1.f : raw);
                float filledWidth = barWidth * percent;

                SDK::FVector2D barPos(x, y);

                // Fond gris
                canvas->K2_DrawBox(barPos, SDK::FVector2D(barWidth, barHeight), 0.0f, SDK::FLinearColor(0.23f, 0.23f, 0.23f, 1.0f));

                // Barre verte remplie (en fait une box sans bordure)
                canvas->K2_DrawBox(barPos, SDK::FVector2D(filledWidth, barHeight), 0.0f, SDK::FLinearColor(0.f, 1.f, 0.f, 1.0f));

                // Contour noir
                canvas->K2_DrawBox(barPos, SDK::FVector2D(barWidth, barHeight), 1.0f, SDK::FLinearColor(0.f, 0.f, 0.f, 1.0f));
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
    if (features::crosshair_enabled)
    {
        SDK::FVector2D screenCenter(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f);
        SDK::FLinearColor color = helper::ImU32ToLinearColor(ImGui::ColorConvertFloat4ToU32(featurescolors::crosshair_color));

        if (features::crosshair_type == 0)
        {
            SDK::FVector2D center(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f);
            SDK::FLinearColor color = helper::ImU32ToLinearColor(ImGui::ColorConvertFloat4ToU32(featurescolors::crosshair_color));
            DrawFilledCircle(canvas, center, features::crosshair_size, 128, color);
        }
        else if (features::crosshair_type == 1)
        {
            float s = features::crosshair_size;
            float t = features::crosshair_thickness;

            canvas->K2_DrawLine(
                SDK::FVector2D(screenCenter.X - s, screenCenter.Y),
                SDK::FVector2D(screenCenter.X + s, screenCenter.Y),
                t, color
            );

            canvas->K2_DrawLine(
                SDK::FVector2D(screenCenter.X, screenCenter.Y - s),
                SDK::FVector2D(screenCenter.X, screenCenter.Y + s),
                t, color
            );
        }
    }

	// Aimbot
    if (features::aimbot_enabled) {
        ImVec2 screenCenter = ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f);
        SDK::FVector2D screenCenterVec = { screenCenter.x, screenCenter.y };
        SDK::FVector2D targetScreen;

        SDK::ACharacter* bestTarget = GetBestTargetCharacter(playerController, localPawn, screenCenterVec, targetScreen, features::aimbot_type, features::aimbot_fov_enabled, features::aimbot_fov);

        if (bestTarget && (GetAsyncKeyState(VK_RBUTTON) & 0x8000)) {
            SDK::USkeletalMeshComponent* mesh = bestTarget->Mesh;
            if (mesh && mesh->GetNumBones() > 2) {
                SDK::FVector headPos = mesh->GetSocketLocation(mesh->GetBoneName(2));

                SDK::FVector shooterPos = playerController->PlayerCameraManager->GetCameraLocation();
                SDK::FVector targetVel = bestTarget->GetVelocity();
                int weaponID = GetCurrentWeapon(gusPlayer);
                float projectileSpeed = 15000.f;

                switch (weaponID)
                {
                case 1:
                    projectileSpeed = 8000.f;
                    break;
                case 2:
                    projectileSpeed = 15000.f;
                    break;
                case 3:
                    projectileSpeed = 20000.f;
                    break;
                default:
                    break;
                }

                SDK::FVector toTarget = headPos - shooterPos;
                float dist = helper::Vec3Size(toTarget);
                float timeToHit = dist / projectileSpeed;

                SDK::FVector predictedHead = headPos + (targetVel * timeToHit);

                SDK::FVector aimDir = helper::Vec3Normalize(predictedHead - shooterPos);
                SDK::FRotator aimRot = helper::VecToRotator(aimDir);
                aimRot.Pitch *= -1.f;

                playerController->SetControlRotation(aimRot);

                if (playerController->PlayerCameraManager)
                    playerController->PlayerCameraManager->K2_SetActorRotation(aimRot, false);
            }
        }
    }

    // Draw selected player
    if ((features::show_selected_player && features::aimbot_enabled) || features::enable_magicbullet)
    {
        ImVec2 screenCenter = ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f);
        SDK::FVector2D screenCenterVec = { screenCenter.x, screenCenter.y };
        SDK::FVector2D targetScreen;

        SDK::ACharacter* bestTarget = GetBestTargetCharacter(playerController, localPawn, screenCenterVec, targetScreen, features::aimbot_type, features::aimbot_fov_enabled, features::aimbot_fov);

        if (bestTarget)
        {
            float radius = features::selected_player_size;
            SDK::FLinearColor color = helper::ImU32ToLinearColor(featurescolors::Aimbot_dot_color);
            DrawFilledCircle(canvas, targetScreen, radius, 128, color); // même cercle que crosshair
        }
    }

	// Draw Aimbot/MagicBullet FOV
    if (features::aimbot_fov_enabled && features::aimbot_fov > 0.f)
    {
        SDK::FVector2D center(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f);
        float radius = features::aimbot_fov;
        int segments = 64;
        float angleStep = 2 * 3.14159265f / segments;

        SDK::FLinearColor color = helper::ImU32ToLinearColor(featurescolors::Aimbot_FOV_color);

        for (int i = 0; i < segments; ++i)
        {
            float angle1 = i * angleStep;
            float angle2 = (i + 1) * angleStep;

            SDK::FVector2D p1(center.X + cosf(angle1) * radius, center.Y + sinf(angle1) * radius);
            SDK::FVector2D p2(center.X + cosf(angle2) * radius, center.Y + sinf(angle2) * radius);

            canvas->K2_DrawLine(p1, p2, 1.5f, color);
        }
    }

	// Name spoofing
    static std::string lastSpoofedName = "";
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
        gusPlayer->Reloading = false;
        gusPlayer->Is_Reload_ = false;
        gusPlayer->Reload_time = 0.0;
        gusPlayer->Loaded = true;
        gusPlayer->CanFire_ = true;
        gusPlayer->ThrowingBlunderbomb_ = false;

        gusPlayer->Flintlock_Current_Timer = SDK::FTimerHandle{};
        gusPlayer->IsReloadingFlintlock_ = false;
        gusPlayer->Finish_Reloading_Flintlock();
        gusPlayer->Finish_Flintlock_Reload_slot_2();
        gusPlayer->FlintlockFired = false;

        gusPlayer->Sniper_Current_Timer = SDK::FTimerHandle{};
        gusPlayer->IsReloadingEOR_ = false;
        gusPlayer->Finish_Reloading_EOR();
        gusPlayer->Finish_EOR_Reload_slot_2();
        gusPlayer->EorFired = false;

        gusPlayer->Blunderbuss_Current_Timer = SDK::FTimerHandle{};
        gusPlayer->IsReloadingBlunderbuss_ = false;
        gusPlayer->Finish_Blunderbuss_Reload();
        gusPlayer->Finish_Blunderbuss_Reload_slot_2();
        gusPlayer->BlunderBussFired = false;
    }

    // QS
    if (features::qs) {
        gusPlayer->Skip_swap_delay = true;
        gusPlayer->Swap_delay = false;
    }

    // Godmode
    if (features::godmode) {
        if (gusPlayer->Current_Health < 100.0) {
            gusPlayer->Current_Health = 9999.0;
			gusPlayer->Update_Health_on_Server();
        }
    }

    // Fly
    if (features::enable_fly) {
        SDK::UWorld* world = SDK::UWorld::GetWorld();
        if (!world) return;

        SDK::APlayerController* pc = world->OwningGameInstance->LocalPlayers[0]->PlayerController;
        if (!pc) return;

        SDK::APawn* localPawn = pc->AcknowledgedPawn;
        if (!localPawn || !localPawn->IsA(SDK::ATrainGusPlayer_C::StaticClass())) return;

        auto* gus = static_cast<SDK::ATrainGusPlayer_C*>(localPawn);

        SDK::FRotator camRot = pc->PlayerCameraManager->GetCameraRotation();
        SDK::FVector direction = helper::RotatorToVector(camRot);
        direction = helper::Vec3Normalize(direction) * features::fly_force;

        if (GetAsyncKeyState(VK_SPACE) & 0x8000) {
            gus->Sword_Dodge_Forward(direction.X, direction.Y, gusPlayer);
        }
    }

    // Deamon shoot 
    if (features::demon_shoot && (GetAsyncKeyState(VK_CONTROL) & 0x8000)) {
        gusPlayer->InpActEvt_Fire_weapon_K2Node_InputActionEvent_15(SDK::FKey());
    }
    return;
}