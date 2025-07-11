#include "stdafx.h"
#include "menu.h"

// Définir les variables du namespace features ici, à l'extérieur de `namespace menu`
namespace features {
    float fov = 90.0f;         // Définition de la variable fov
    bool fov_enabled = true;   // Définition de la variable fov_enabled
}

namespace menu {
    bool isOpen = true;
    static bool noTitleBar = false;

    void Init() {
        if (!isOpen) {
            return;
        }

        static bool styled = false;
        if (!styled) {
            ImGui::StyleColorsDark();
            ImVec4* colors = ImGui::GetStyle().Colors;
            colors[ImGuiCol_WindowBg] = ImVec4(0, 0, 0, 0.8f);
            colors[ImGuiCol_Header] = ImVec4(0.2f, 0.2f, 0.2f, 0.8f);
            colors[ImGuiCol_HeaderHovered] = ImVec4(0.3f, 0.3f, 0.3f, 0.8f);
            colors[ImGuiCol_Button] = ImVec4(0.26f, 0.59f, 0.98f, 0.4f);
            colors[ImGuiCol_ButtonHovered] = ImVec4(0.26f, 0.59f, 0.98f, 1.0f);
            colors[ImGuiCol_ButtonActive] = ImVec4(0.06f, 0.53f, 0.98f, 1.0f);
            styled = true;
        }

        ImGuiWindowFlags flags = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse;
        ImGui::SetNextWindowSize(ImVec2(450, 600), ImGuiCond_FirstUseEver);
        ImGui::SetNextWindowPos(ImVec2(25, 25), ImGuiCond_FirstUseEver);

        ImGui::Begin("ImGui Menu", &isOpen, flags);

        // Utilisation des variables externes
        ImGui::Checkbox("Enable FOV", &features::fov_enabled);
        ImGui::SliderFloat("FOV", &features::fov, 60, 179);

        ImGui::End();
    }
}
