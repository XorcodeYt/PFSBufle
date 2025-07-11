#pragma once
#include "menu.h"
#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_dx12.h"
#include "ImGui/imgui_impl_win32.h"

namespace cheat {
	class Cheat {
	public:
		static inline bool InitCheat()
		{
			HANDLE PFSModuleBase = GetModuleHandleA("PirateFS-Win64-Shipping.exe");
			if (!PFSModuleBase)
			{
				utils::Console::logError("PirateFS-Win64-Shipping.exe cannot be found");
				return false;
			}

			utils::Console::log("PirateFS-Win64-Shipping.exe found");

			return true;
		}
		static inline bool RefreshCheat()
		{
			SDK::UWorld* world = SDK::UWorld::GetWorld();
			if (!world)	return false;

			SDK::ULevel* level = world->PersistentLevel;
			if (!level) {
				utils::Console::logError("Failed to get PL");
				return false;
			}
			SDK::APlayerController* playerController = world->OwningGameInstance->LocalPlayers[0]->PlayerController;
			if (!playerController) return false;

			SDK::APawn* pawn = playerController->AcknowledgedPawn;
			if (!pawn) {
				utils::Console::logError("Failed to get Pawn");
				return false;
			}

			utils::Console::Clear();

			if (features::fov_enabled) {
				SDK::UWorld* World = SDK::UWorld::GetWorld();
				SDK::APlayerController* MyController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;
				MyController->FOV(features::fov);
				utils::Console::log("FOV set to: " + std::to_string(features::fov));
			}

			/*if (esp_enabled) {
				for (auto actor : level->actors) {
					if (!actor) continue;

					if (!actor->isa(sdk::acharacter::staticclass())) continue;

					sdk::acharacter* character = reinterpret_cast<sdk::acharacter*>(actor);
					if (!character || character == pawn) continue;

					sdk::fvector location = actor->k2_getactorlocation();

					std::string name = actor->getname();

					utils::console::log("player: " + name + " | pos: x=" +
						std::to_string(location.x) + " y=" +
						std::to_string(location.y) + " z=" +
						std::to_string(location.z));

					imgui_impldx12_newframe();
					imgui_implwin32_newframe();
					imgui::newframe();

					imgui::begin("esp", nullptr, imguiwindowflags_nobackground | imguiwindowflags_noinputs);
					imgui::getwindowdrawlist()->addrect(imvec2(100, 100), imvec2(200, 200), im_col32(255, 0, 0, 255));
					imgui::end();
				}
			}*/
			return true;
		}
	};
}