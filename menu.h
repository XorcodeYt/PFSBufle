#ifndef MENU_H
#define MENU_H

#include "SDK.hpp"
#include "imgui/imgui.h"

namespace menu {
    extern bool isOpen;
    void Init();
}

namespace features {
	//player features   
    extern bool bone_esp;
    extern bool box2d_esp;
    extern bool box3d_esp;
	
	//misc
    extern bool bhop;
    extern bool infinite_supplies;
    extern bool godmode; //marche po
    extern bool enable_fly; //marche po

    //veiw
    extern float fov;
    extern bool fov_enabled;
    extern bool crosshair_enabled;
    extern int crosshair_type;
    extern float crosshair_size;
    extern float crosshair_thickness;
    extern ImVec4 crosshair_color;

    //weapon
	extern bool aimbot_enabled;
	extern bool aimbot_fov_enabled;
    extern float aimbot_fov;
    extern int aimbot_type;
    extern bool infinite_ammo;
    extern bool no_reload;
    extern bool demon_shoot;
    extern bool enable_magicbullet; //marche po

	//server
    extern bool spoof_name_enabled;
    extern char spoofed_name[64];
}

#endif
