#pragma once

#ifndef MENU_H
#define MENU_H

#include "SDK.hpp"
#include "imgui/imgui.h"


namespace menu {
    extern bool isOpen;
    extern bool noTitleBar;
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

    //weapon
    extern bool aimbot_enabled;
    extern bool enable_magicbullet;
	extern bool show_selected_player;
	extern float selected_player_size;
    extern bool aimbot_fov_enabled;
    extern float aimbot_fov;
    extern int aimbot_type;
    extern bool infinite_ammo;
    extern bool no_reload;
    extern bool demon_shoot; //marche po
    

    //server
    extern bool spoof_name_enabled;
    extern char spoofed_name[64];
}


inline void DrawCoolSelector(const char* label, ImVec4& color)
{
    // Ne pas afficher les ## dans le texte visible
    const char* displayLabel = label;
    const char* hashPos = strstr(label, "##");
    if (hashPos && hashPos != label) {
        static char temp[128];
        strncpy_s(temp, label, hashPos - label);
        temp[hashPos - label] = '\0';
        displayLabel = temp;
    }

    ImGui::TextUnformatted(displayLabel);
    ImGui::SameLine();

    ImGui::PushID(label);
    if (ImGui::ColorButton("##ColorBtn", color, ImGuiColorEditFlags_NoTooltip, ImVec2(20, 20)))
        ImGui::OpenPopup("ColorPopup");

    if (ImGui::BeginPopup("ColorPopup")) {
        ImGui::ColorPicker4("##picker", (float*)&color,
            ImGuiColorEditFlags_NoInputs |
            ImGuiColorEditFlags_AlphaBar |
            ImGuiColorEditFlags_NoSidePreview |
            ImGuiColorEditFlags_DisplayRGB);
        ImGui::EndPopup();
    }

    ImGui::PopID();
}

inline void DrawCoolSelectorU32(const char* label, ImU32& color)
{
    ImVec4 tempColor = ImGui::ColorConvertU32ToFloat4(color);

    // Ne pas afficher les ## dans le texte visible
    const char* displayLabel = label;
    const char* hashPos = strstr(label, "##");
    if (hashPos && hashPos != label) {
        static char temp[128];
        strncpy_s(temp, label, hashPos - label);
        temp[hashPos - label] = '\0';
        displayLabel = temp;
    }

    ImGui::TextUnformatted(displayLabel);
    ImGui::SameLine();

    ImGui::PushID(label);
    if (ImGui::ColorButton("##ColorBtn", tempColor, ImGuiColorEditFlags_NoTooltip, ImVec2(20, 20)))
        ImGui::OpenPopup("ColorPopup");

    bool modified = false;
    if (ImGui::BeginPopup("ColorPopup")) {
        modified = ImGui::ColorPicker4("##picker", (float*)&tempColor,
            ImGuiColorEditFlags_NoInputs |
            ImGuiColorEditFlags_AlphaBar |
            ImGuiColorEditFlags_NoSidePreview |
            ImGuiColorEditFlags_DisplayRGB);
        ImGui::EndPopup();
    }

    if (modified)
        color = ImGui::ColorConvertFloat4ToU32(tempColor);

    ImGui::PopID();
}


namespace featurescolors {
    inline ImVec4 generalcolor = ImVec4(1.0f, 0.55f, 0.2f, 1.0f);
    inline ImVec4 crosshair_color = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
    inline ImU32 Bones_color = IM_COL32(255, 255, 255, 255);
    inline ImU32 box_color3D = IM_COL32(255, 255, 255, 255);
    inline ImU32 box_color2D = IM_COL32(255, 255, 255, 255);
    inline ImU32 Aimbot_FOV_color = IM_COL32(255, 255, 255, 255);
    inline ImU32 Aimbot_dot_color = IM_COL32(255, 255, 255, 255);
    inline ImU32 Bullet_color = IM_COL32(255, 255, 255, 255);
    inline ImU32 generalcolorU32 = ImGui::ColorConvertFloat4ToU32(generalcolor);


}
inline float Clamp01(float value) {
    return value < 0.0f ? 0.0f : (value > 1.0f ? 1.0f : value);
}
inline bool CustomRoundedSlider(const char* label, float* value, float min, float max, const ImVec2& size = ImVec2(300, 6), ImU32 fill_color = IM_COL32(255, 0, 0, 255))
{
    ImVec2 pos = ImGui::GetCursorScreenPos();
    ImDrawList* draw = ImGui::GetWindowDrawList();

    float radius = size.y * 0.5f;
    float t = (*value - min) / (max - min);
    t = Clamp01(t);

    // Fond de la barre
    draw->AddRectFilled(pos, ImVec2(pos.x + size.x, pos.y + size.y), IM_COL32(40, 40, 40, 180), radius);

    // Partie remplie
    draw->AddRectFilled(pos, ImVec2(pos.x + size.x * t, pos.y + size.y), fill_color, radius);

    // Interaction souris
    ImGui::InvisibleButton(label, size);
    bool changed = false;
    if (ImGui::IsItemActive()) {
        ImVec2 mouse = ImGui::GetIO().MousePos;
        float new_t = Clamp01((mouse.x - pos.x) / size.x);
        *value = min + (max - min) * new_t;
        changed = true;
    }

    // Affichage valeur � droite
    ImVec2 text_pos = ImVec2(pos.x + size.x + 8, pos.y - 2);
    char buf[16];
    snprintf(buf, sizeof(buf), "%.0f", *value);
    draw->AddText(text_pos, ImGui::GetColorU32(ImGuiCol_Text), buf);

    return changed;
}

const ImVec4 frameStatic = ImVec4(0.13f, 0.14f, 0.16f, 1.00f);
const ImVec4 frameHovered = ImVec4(0.18f, 0.20f, 0.22f, 1.00f);
const ImVec4 frameActive = ImVec4(0.22f, 0.24f, 0.26f, 1.00f);
const ImVec4 popupcombo = ImVec4(0.13f, 0.14f, 0.16f, 1.00f);

#endif