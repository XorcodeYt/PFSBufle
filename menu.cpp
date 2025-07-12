#include "stdafx.h"
#include "menu.h"
#include <algorithm>
//menu.cpp
inline float Clamp01(float value) {
    return value < 0.0f ? 0.0f : (value > 1.0f ? 1.0f : value);
}
namespace features {
    float fov = 90.0f;
    bool fov_enabled = false;
    bool bone_esp = false;
    bool box2d_esp = false;
    bool box3d_esp = false;
    bool bhop = false;
    bool godmode = false;
    bool enable_magicbullet = false;
    bool crosshair_enabled = false;
    int crosshair_type = 0;
    float crosshair_size = 6.0f;
    float crosshair_thickness = 1.5f;
    ImVec4 crosshair_color = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
}

namespace menu {
    bool isOpen = true;
    static bool noTitleBar = false;

    void Init() {
        if (!isOpen) return;

        static float anim_progress = 0.0f;
        static float anim_speed = 2.0f;
        static bool animating = true;
        static bool last_isOpen = false;

        if (isOpen && !last_isOpen) {
            anim_progress = 0.0f;
            animating = true;
        }
        last_isOpen = isOpen;

        if (animating) {
            anim_progress += ImGui::GetIO().DeltaTime * anim_speed;
            if (anim_progress >= 1.0f) {
                anim_progress = 1.0f;
                animating = false;
            }
        }

        float alpha = anim_progress;
        float slide_offset = (1.0f - anim_progress) * 100.0f;
        static int current_tab = 0;
        static bool styled = false;
        if (!styled) {
            ImGuiStyle& style = ImGui::GetStyle();
            style.Alpha = 0.978f;
            style.WindowPadding = ImVec2(12, 12);
            style.FramePadding = ImVec2(8, 6);
            style.ItemSpacing = ImVec2(10, 8);
            style.WindowRounding = 20.0f;
            style.FrameRounding = 10.0f;
            style.IndentSpacing = 15.0f;
            style.ScrollbarSize = 14.0f;
            style.GrabRounding = 7.0f;

            ImVec4* colors = style.Colors;
            colors[ImGuiCol_Text] = ImVec4(0.95f, 0.96f, 0.98f, 1.00f);
            colors[ImGuiCol_WindowBg] = ImVec4(0.07f, 0.08f, 0.09f, 1.00f);
            colors[ImGuiCol_FrameBg] = ImVec4(0.13f, 0.14f, 0.16f, 1.00f);
            colors[ImGuiCol_FrameBgHovered] = ImVec4(0.18f, 0.20f, 0.22f, 1.00f);
            colors[ImGuiCol_FrameBgActive] = ImVec4(0.22f, 0.24f, 0.26f, 1.00f);
            colors[ImGuiCol_CheckMark] = ImVec4(0.98f, 0.38f, 0.14f, 1.00f);
            colors[ImGuiCol_Button] = ImVec4(0.18f, 0.18f, 0.20f, 1.00f);
            colors[ImGuiCol_ButtonHovered] = ImVec4(0.24f, 0.24f, 0.27f, 1.00f);
            colors[ImGuiCol_ButtonActive] = ImVec4(0.26f, 0.26f, 0.30f, 1.00f);
            colors[ImGuiCol_TitleBg] = ImVec4(0.05f, 0.05f, 0.05f, 1.00f);
            colors[ImGuiCol_TitleBgActive] = ImVec4(0.05f, 0.05f, 0.05f, 1.00f);
            colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.05f, 0.05f, 0.05f, 1.00f);
            styled = true;
        }

        ImGuiWindowFlags flags = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse;
        ImVec2 basePos = ImVec2(25, 25);
        ImVec2 animPos = ImVec2(basePos.x + slide_offset, basePos.y);

        if (anim_progress < 1.0f)
            ImGui::SetNextWindowPos(animPos, ImGuiCond_Always);
        else
            ImGui::SetNextWindowPos(basePos, ImGuiCond_FirstUseEver);

        ImGui::SetNextWindowSize(ImVec2(1080, 600), ImGuiCond_Once);
        ImGui::PushStyleVar(ImGuiStyleVar_Alpha, alpha);

        const char* tabs[] = {
            "Players", "Ships", "World", "View",
            "Weapon", "Cannon", "Gameplay", "Server",
            "Misc", "Skins", "Settings", "Account" };

        ImGui::Begin("PirateFS Menu", &isOpen, flags);
        ImGui::BeginChild("##Sidebar", ImVec2(150, 0), true);

        for (int i = 0; i < IM_ARRAYSIZE(tabs); ++i) {
            bool selected = (current_tab == i);
            ImVec4 bgColor = selected ? ImVec4(0.95f, 0.38f, 0.14f, 1.0f) : ImVec4(0.13f, 0.14f, 0.16f, 1.0f);
            ImVec4 textColor = selected ? ImVec4(1.0f, 1.0f, 1.0f, 1.0f) : ImVec4(0.85f, 0.88f, 0.91f, 1.0f);
            ImGui::PushStyleColor(ImGuiCol_Button, bgColor);
            ImGui::PushStyleColor(ImGuiCol_ButtonHovered, bgColor);
            ImGui::PushStyleColor(ImGuiCol_ButtonActive, bgColor);
            ImGui::PushStyleColor(ImGuiCol_Text, textColor);
            ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 6.0f);
            ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(12, 8));
            if (ImGui::Button(tabs[i], ImVec2(-1.0f, 32.0f))) current_tab = i;
            ImGui::PopStyleVar(2);
            ImGui::PopStyleColor(4);
        }

        ImGui::EndChild();
        ImGui::SameLine();

        ImGui::BeginChild("##MainContent", ImVec2(0, 0), true);
        ImGui::Text("  "); ImGui::SameLine();
        ImGui::TextColored(ImVec4(1, 1, 1, 1), "Tab: ");
        ImGui::SameLine(); ImGui::TextDisabled(tabs[current_tab]);
        ImGui::Separator();
        ImGui::SetNextItemWidth(200);
        static char search[64] = "";
        ImGui::InputTextWithHint("##Search", "Search...", search, IM_ARRAYSIZE(search));
        ImGui::Spacing();

        if (strcmp(tabs[current_tab], "Players") == 0) {
            ImGui::Checkbox("Bone ESP", &features::bone_esp);
            ImGui::Checkbox("2D Box ESP", &features::box2d_esp);
            ImGui::Checkbox("3D Box ESP", &features::box3d_esp);
            ImGui::Separator();
            ImGui::Checkbox("Bunny Hop", &features::bhop);
            ImGui::Checkbox("Gode Mode", &features::godmode);

            ImGui::Checkbox("Magic Bullet", &features::enable_magicbullet);
        }
        else if (strcmp(tabs[current_tab], "View") == 0) {
            ImGui::Checkbox("Enable FOV", &features::fov_enabled);
            ImGui::SliderFloat("FOV", &features::fov, 60.0f, 179.0f);
            ImGui::Separator();
            ImGui::Checkbox("Enable Crosshair", &features::crosshair_enabled);
            ImGui::Combo("Crosshair Type", &features::crosshair_type, "Dot\0Cross\0");
            ImGui::SliderFloat("Size", &features::crosshair_size, 2.0f, 20.0f);
            ImGui::SliderFloat("Thickness", &features::crosshair_thickness, 0.5f, 5.0f);
            ImGui::ColorEdit4("Color", (float*)&features::crosshair_color);
        }
        else if (strcmp(tabs[current_tab], "Server") == 0) {
			bool prestaEnabled = false;
            ImGui::Checkbox("Enable Presta d'Haikiu", &prestaEnabled);
        }
        else {
            ImGui::Columns(3, nullptr, false);
            for (int col = 0; col < 3; ++col) {
                ImGui::TextColored(ImVec4(0.9f, 0.9f, 0.9f, 1.0f),
                    (std::string(tabs[current_tab]) + " Section " + char('A' + col)).c_str());
                for (int i = 0; i < 3; ++i) {
                    static bool dummy_toggle[12][3][3] = {};
                    std::string label = "Feature " + std::to_string(i + 1);
                    std::string id = label + "##" + std::to_string(current_tab) + "_" + std::to_string(col) + "_" + std::to_string(i);
                    ImGui::Checkbox(id.c_str(), &dummy_toggle[current_tab][col][i]);
                }
                ImGui::NextColumn();
            }
            ImGui::Columns(1);
        }

        ImGui::EndChild();
        ImGui::End();
        ImGui::PopStyleVar();
    }

}
