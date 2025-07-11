#ifndef MENU_H
#define MENU_H

#include "SDK.hpp"
#include "imgui/imgui.h"

namespace menu {
    extern bool isOpen;
    void Init();
}

namespace features {
    extern float fov;           // D�claration de la variable fov
    extern bool fov_enabled;    // D�claration de la variable fov_enabled
}

#endif // MENU_H
