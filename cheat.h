#pragma once
#include "menu.h"
#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_dx12.h"
#include "ImGui/imgui_impl_win32.h"
#include <fstream>

namespace cheat {
    class Cheat {
    public:
        using ReceiveBeginPlayFn = void(__fastcall*)(SDK::AActor*);

        static ReceiveBeginPlayFn original_Server;
        static ReceiveBeginPlayFn original_Client;

        static void __fastcall Hooked_Server_ReceiveBeginPlay(SDK::AActor* This);
        static void __fastcall Hooked_Client_ReceiveBeginPlay(SDK::AActor* This);

        static void Hook_EyeOfReach_Projectile();

        static bool InitCheat();
        static void RefreshCheat();
    };
}