#include "stdafx.h"
#include "menu.h"
#include <algorithm>
//menu.cpp
static ImVec4 lastColor = featurescolors::generalcolor;
namespace features {
    // player features
    bool bone_esp = false;
    bool box2d_esp = false;
    bool box3d_esp = false;

    // misc
    bool bhop = false;
    bool infinite_supplies = false;
    bool godmode = false; // marche po
    bool enable_fly = false; // marche po

    // view
    float fov = 90.0f;
    bool fov_enabled = false;
    bool crosshair_enabled = false;
    int crosshair_type = 0;
    float crosshair_size = 6.0f;
    float crosshair_thickness = 1.5f;


    // weapon
    bool aimbot_enabled = false;
    bool aimbot_fov_enabled = false;
    float aimbot_fov = 90.0f;
    int aimbot_type = 0; // 0: Closest to Crosshair, 1: Closest by Distance
    bool infinite_ammo = false;
    bool no_reload = false;
    bool demon_shoot = false; //marche po
    bool enable_magicbullet = false;
    bool magicbullet_fov_enabled = false;
    float magicbullet_fov = 90.0f;
    int magicbullet_type = 0; // 0: Closest to Crosshair, 1: Closest by Distance

    // server
    bool spoof_name_enabled = false;
    char spoofed_name[64] = "HaikiuWasHere";
}
void menu::ResetAnimation() {
    anim_progress = 0.0f;
    animating = true;
}
ImVec4 DarkenColor(const ImVec4& color, float factor = 0.2f)
{
    return ImVec4(
        color.x * (1.0f - factor),
        color.y * (1.0f - factor),
        color.z * (1.0f - factor),
        color.w
    );
}
namespace menu {
    bool isOpen = true;
    bool noTitleBar = false;
    float anim_progress = 1.0f;
    float anim_speed = 2.0f;
    bool animating = false;
    bool wasOpen = true;

    void Init() {

        if (wasOpen != isOpen) {
            ResetAnimation();
            wasOpen = isOpen;
        }

        if (!isOpen) return;

        if (animating) {
            anim_progress += ImGui::GetIO().DeltaTime * anim_speed;

            if (anim_progress >= 1.0f) {
                anim_progress = 1.0f;
                animating = false;

                if (!isOpen) return; // Stop drawing when closed
            }
        }
        else {
            if (!isOpen) return; // No draw if not animating and closed
        }
        float textWidth = ImGui::CalcTextSize("PirateFS Menu").x;
        float alpha = isOpen ? Clamp01(anim_progress) : Clamp01(1.0f - anim_progress);
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
            colors[ImGuiCol_FrameBg] = ImVec4(frameStatic);
            colors[ImGuiCol_ButtonActive] = ImVec4(0.26f, 0.26f, 0.30f, 1.00f);
            colors[ImGuiCol_TitleBg] = ImVec4(0.05f, 0.05f, 0.05f, 1.00f);
            colors[ImGuiCol_TitleBgActive] = ImVec4(0.05f, 0.05f, 0.05f, 1.00f);
            colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.05f, 0.05f, 0.05f, 1.00f);
            colors[ImGuiCol_FrameBgHovered] = ImVec4(frameHovered);
            colors[ImGuiCol_FrameBgActive] = ImVec4(frameActive);
            colors[ImGuiCol_PopupBg] = ImVec4(popupcombo);

            styled = true;

        }


        ImGuiWindowFlags flags = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar;
        ImVec2 basePos = ImVec2(25, 25);
        ImVec2 animPos = ImVec2(basePos.x - slide_offset, basePos.y);

        if (anim_progress < 1.0f)
            ImGui::SetNextWindowPos(animPos, ImGuiCond_Always);
        else
            ImGui::SetNextWindowPos(basePos, ImGuiCond_FirstUseEver);

        ImGui::SetNextWindowSize(ImVec2(1080, 600), ImGuiCond_Once);
        ImGui::PushStyleVar(ImGuiStyleVar_Alpha, alpha);

        const char* tabs[] = {
            "Players", "View", "Weapon",
            "Server", "Misc", "Settings" };



        ImGui::Begin("NiggerWare", &isOpen, flags);
        float windowWidth = ImGui::GetWindowSize().x;
        ImGui::SetCursorPosX((windowWidth - textWidth) * 0.5f);
        ImGui::Text("NiggerWare");
        //trucs de couleurs
        if (memcmp(&lastColor, &featurescolors::generalcolor, sizeof(ImVec4)) != 0)
        {
            ImVec4* colors = ImGui::GetStyle().Colors;
            colors[ImGuiCol_CheckMark] = featurescolors::generalcolor;
            colors[ImGuiCol_Button] = featurescolors::generalcolor;
            colors[ImGuiCol_ButtonHovered] = DarkenColor(featurescolors::generalcolor);
            colors[ImGuiCol_ButtonActive] = ImVec4(0.26f, 0.26f, 0.30f, 1.00f);
            lastColor = featurescolors::generalcolor;
        }
        featurescolors::generalcolorU32 = ImGui::ColorConvertFloat4ToU32(featurescolors::generalcolor);
        ImGui::BeginChild("##Sidebar", ImVec2(150, 0), true);

        for (int i = 0; i < IM_ARRAYSIZE(tabs); ++i) {
            bool selected = (current_tab == i);
            ImVec4 bgColor = selected ? featurescolors::generalcolor : ImVec4(0.13f, 0.14f, 0.16f, 1.0f);
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
            ImGui::SameLine();
            DrawCoolSelectorU32(":##bone", featurescolors::Bones_color);// là les trucs comme ça c'est les sliders de couleur d'esp uwu

            ImGui::Checkbox("2D Box ESP  ", &features::box2d_esp);
            ImGui::SameLine();
            DrawCoolSelectorU32(":##2D", featurescolors::box_color2D);

            ImGui::Checkbox("3D Box ESP", &features::box3d_esp);
            ImGui::SameLine();
            DrawCoolSelectorU32(":##3D", featurescolors::box_color3D);

        }
        else if (strcmp(tabs[current_tab], "View") == 0) {
            ImGui::Checkbox("Enable FOV", &features::fov_enabled);
            ImGui::SameLine();
            CustomRoundedSlider("##FOVSlider", &features::fov, 60.0f, 179.0f, ImVec2(300, 6), featurescolors::generalcolorU32);
            ImGui::Separator();
            ImGui::Checkbox("Enable Crosshair", &features::crosshair_enabled);
            ImGui::SameLine();
            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 298);
            DrawCoolSelector("Crosshair color", featurescolors::crosshair_color);
            ImGui::Combo("Crosshair Type", &features::crosshair_type, "Dot\0Cross\0");
            ImGui::Text("Crosshair Size");
            ImGui::SameLine();
            CustomRoundedSlider("##crossize", &features::crosshair_size, 2.0f, 20.0f, ImVec2(300, 6), featurescolors::generalcolorU32);
            ImGui::Text("Crosshair Thickness");
            ImGui::SameLine();
            CustomRoundedSlider("##crossthick", &features::crosshair_thickness, 0.5f, 5.0f, ImVec2(300, 6), featurescolors::generalcolorU32);

        }
        else if (strcmp(tabs[current_tab], "Weapon") == 0) {
            ImGui::Checkbox("Enable Aimbot", &features::aimbot_enabled);
            ImGui::Checkbox("Use Aimbot FOV Limit", &features::aimbot_fov_enabled);
            ImGui::SameLine();
            DrawCoolSelectorU32(":##FOV", featurescolors::Aimbot_FOV_color);
            CustomRoundedSlider("##FOVaimbot", &features::aimbot_fov, 0.0f, 1000.0f, ImVec2(300, 6), featurescolors::generalcolorU32);
            const char* aimModes[] = { "Closest to Crosshair", "Closest by Distance" };
            ImGui::Combo("Aimbot Type", &features::aimbot_type, aimModes, IM_ARRAYSIZE(aimModes));
            ImGui::Separator();
            ImGui::Checkbox("Infinite Ammo + Supplies", &features::infinite_ammo);
            ImGui::Checkbox("No Reload", &features::no_reload);
            ImGui::Checkbox("Enable Demon Shoot", &features::demon_shoot);
            ImGui::Separator();
            ImGui::Checkbox("Enable Magic Bullet", &features::enable_magicbullet);
            const char* bulletsModes[] = { "Closest to Crosshair", "Closest by Distance" };
            ImGui::Checkbox("Use Magic Bullet FOV Limit", &features::magicbullet_fov_enabled);
            ImGui::SameLine();
            DrawCoolSelectorU32(":##FOV", featurescolors::Aimbot_FOV_color);
            CustomRoundedSlider("##MBaimbot", &features::magicbullet_fov, 0.0f, 1000.0f, ImVec2(300, 6), featurescolors::generalcolorU32);
            const char* MbModes[] = { "Closest to Crosshair", "Closest by Distance" };
            ImGui::Combo("Magic Bullet Type", &features::magicbullet_type, MbModes, IM_ARRAYSIZE(bulletsModes));
        }
        else if (strcmp(tabs[current_tab], "Misc") == 0) {
            ImGui::Checkbox("Bunny Hop", &features::bhop);
            ImGui::Checkbox("Infinite Supplies", &features::infinite_supplies);
            ImGui::Separator();
            ImGui::Checkbox("Enable Fly", &features::enable_fly);
            ImGui::Checkbox("Gode Mode", &features::godmode);
        }
        else if (strcmp(tabs[current_tab], "Server") == 0) {
            bool prestaEnabled = false;
            ImGui::Checkbox("Enable Presta d'Haikiu", &prestaEnabled);
            ImGui::Separator();
            ImGui::InputText("Spoofed Name", features::spoofed_name, sizeof(features::spoofed_name));
            ImGui::Checkbox("Enable Name Spoofing", &features::spoof_name_enabled);
        }
        else if (strcmp(tabs[current_tab], "Settings") == 0) {
            DrawCoolSelector("General color", featurescolors::generalcolor);
        }

        ImGui::EndChild();
        ImGui::End();
        ImGui::PopStyleVar();
    }

}