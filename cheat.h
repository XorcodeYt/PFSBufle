#pragma once
#include "menu.h"
#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_dx12.h"
#include "ImGui/imgui_impl_win32.h"
#include <fstream>
#include <unordered_set>

namespace cheat {
    class Cheat {
    public:
        static bool InitCheat();
        static void RefreshCheat();
    };
    inline std::unordered_set<SDK::AActor*> seenProjectiles;
}