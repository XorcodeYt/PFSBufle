#ifndef MENU_H
#define MENU_H

#include "SDK.hpp"
#include "imgui/imgui.h"

namespace menu {
    extern bool isOpen;
    void Init();
}

namespace features {
    extern float fov;
    extern bool fov_enabled;
    extern bool bone_esp;
    extern bool box2d_esp;
    extern bool box3d_esp;
	extern bool bhop;
	extern bool godmode;
    extern bool enable_magicbullet;
    extern bool spoof_name_enabled;
    extern char spoofed_name[64];
	extern bool enable_fly;
	extern bool infinite_ammo;

    //crosshair
    extern bool crosshair_enabled;
    extern int crosshair_type;
    extern float crosshair_size;
    extern float crosshair_thickness;
    extern ImVec4 crosshair_color;

    //aimbot
	extern bool aimbot_enabled;
	extern bool aimbot_fov_enabled;
    extern float aimbot_fov;
    extern int aimbot_type;
}

#endif
