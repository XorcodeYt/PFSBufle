#include "config.h"
#include "menu.h"
#include "json.hpp"
#include <fstream>
#include <filesystem>
#include <Windows.h>

namespace fs = std::filesystem;

std::string config::GetConfigPath(const std::string& name) {
    char path[MAX_PATH];
    GetEnvironmentVariableA("USERPROFILE", path, MAX_PATH);
    std::string folder = std::string(path) + "\\NiggaWareConfigs\\";
    fs::create_directories(folder);
    return folder + name + ".json";
}

static nlohmann::json SerializeColor(const ImVec4& c) {
    return nlohmann::json{ c.x, c.y, c.z, c.w };
}

static ImVec4 DeserializeColor(const nlohmann::json& jc) {
    return ImVec4(jc[0], jc[1], jc[2], jc[3]);
}

static ImU32 RGBAArrayToU32(const std::vector<int>& c) {
    return IM_COL32(c[0], c[1], c[2], c[3]);
}

static std::vector<int> U32ToRGBAArray(ImU32 color) {
    ImVec4 col = ImGui::ColorConvertU32ToFloat4(color);
    return {
        static_cast<int>(col.x * 255),
        static_cast<int>(col.y * 255),
        static_cast<int>(col.z * 255),
        static_cast<int>(col.w * 255)
    };
}

void config::Save(const std::string& name) {
    nlohmann::json j;

    j["features"] = {
        {"size", features::menu_scale_factor},
        // Player ESP
        {"bone_esp", features::bone_esp},
        {"box2d_esp", features::box2d_esp},
        {"box3d_esp", features::box3d_esp},
		{"health_bar", features::health_bar},

        // Misc
        {"bhop", features::bhop},
        {"infinite_supplies", features::infinite_supplies},
        {"godmode", features::godmode},
        {"enable_fly", features::enable_fly},
        {"fly_force", features::fly_force},

        // View
        {"fov", features::fov},
        {"fov_enabled", features::fov_enabled},
        {"crosshair_enabled", features::crosshair_enabled},
        {"crosshair_type", features::crosshair_type},
        {"crosshair_size", features::crosshair_size},
        {"crosshair_thickness", features::crosshair_thickness},

        // Weapon
        {"aimbot_enabled", features::aimbot_enabled},
        {"enable_magicbullet", features::enable_magicbullet},
        {"show_selected_player", features::show_selected_player},
        {"selected_player_size", features::selected_player_size},
        {"aimbot_fov_enabled", features::aimbot_fov_enabled},
        {"aimbot_fov", features::aimbot_fov},
        {"aimbot_type", features::aimbot_type},
        {"infinite_ammo", features::infinite_ammo},
        {"no_reload", features::no_reload},
        {"demon_shoot", features::demon_shoot},
        {"qs", features::qs},

        // Server
        {"spoof_name_enabled", features::spoof_name_enabled},
        {"spoofed_name", std::string(features::spoofed_name)}
    };

    // Colors
    j["colors"]["generalcolor"] = SerializeColor(featurescolors::generalcolor);
    j["colors"]["crosshair_color"] = SerializeColor(featurescolors::crosshair_color);

    j["colors"]["Bones_color"] = U32ToRGBAArray(featurescolors::Bones_color);
    j["colors"]["box_color3D"] = U32ToRGBAArray(featurescolors::box_color3D);
    j["colors"]["box_color2D"] = U32ToRGBAArray(featurescolors::box_color2D);
    j["colors"]["Aimbot_FOV_color"] = U32ToRGBAArray(featurescolors::Aimbot_FOV_color);
    j["colors"]["Aimbot_dot_color"] = U32ToRGBAArray(featurescolors::Aimbot_dot_color);
    j["colors"]["Bullet_color"] = U32ToRGBAArray(featurescolors::Bullet_color);

    std::ofstream out(GetConfigPath(name));
    if (out.is_open()) {
        out << j.dump(4);
        out.close();
    }
}

void config::Load(const std::string& name) {
    std::ifstream in(GetConfigPath(name));
    if (!in.is_open()) return;

    nlohmann::json j;
    in >> j;
    in.close();

    auto& f = j["features"];
    features::menu_scale_factor = f.value("size", 1.f);

    features::bone_esp = f.value("bone_esp", false);
    features::box2d_esp = f.value("box2d_esp", false);
    features::box3d_esp = f.value("box3d_esp", false);
	features::health_bar = f.value("health_bar", false);

    features::bhop = f.value("bhop", false);
    features::infinite_supplies = f.value("infinite_supplies", false);
    features::godmode = f.value("godmode", false);
    features::enable_fly = f.value("enable_fly", false);
    features::fly_force = f.value("flu_force", 100.f);

    features::fov = f.value("fov", 90.0f);
    features::fov_enabled = f.value("fov_enabled", false);
    features::crosshair_enabled = f.value("crosshair_enabled", false);
    features::crosshair_type = f.value("crosshair_type", 0);
    features::crosshair_size = f.value("crosshair_size", 5.0f);
    features::crosshair_thickness = f.value("crosshair_thickness", 1.0f);

    features::aimbot_enabled = f.value("aimbot_enabled", false);
    features::enable_magicbullet = f.value("enable_magicbullet", false);
    features::show_selected_player = f.value("show_selected_player", false);
    features::selected_player_size = f.value("selected_player_size", 5.0f);
    features::aimbot_fov_enabled = f.value("aimbot_fov_enabled", false);
    features::aimbot_fov = f.value("aimbot_fov", 90.0f);
    features::aimbot_type = f.value("aimbot_type", 0);
    features::infinite_ammo = f.value("infinite_ammo", false);
    features::no_reload = f.value("no_reload", false);
    features::demon_shoot = f.value("demon_shoot", false);
    features::qs = f.value("qs", false);

    features::spoof_name_enabled = f.value("spoof_name_enabled", false);
    if (f.contains("spoofed_name"))
        strncpy_s(features::spoofed_name, sizeof(features::spoofed_name), f["spoofed_name"].get<std::string>().c_str(), _TRUNCATE);

    if (j["colors"].contains("generalcolor"))
        featurescolors::generalcolor = DeserializeColor(j["colors"]["generalcolor"]);
    if (j["colors"].contains("crosshair_color"))
        featurescolors::crosshair_color = DeserializeColor(j["colors"]["crosshair_color"]);

    if (j["colors"].contains("Bones_color"))
        featurescolors::Bones_color = RGBAArrayToU32(j["colors"]["Bones_color"]);
    if (j["colors"].contains("box_color3D"))
        featurescolors::box_color3D = RGBAArrayToU32(j["colors"]["box_color3D"]);
    if (j["colors"].contains("box_color2D"))
        featurescolors::box_color2D = RGBAArrayToU32(j["colors"]["box_color2D"]);
    if (j["colors"].contains("Aimbot_FOV_color"))
        featurescolors::Aimbot_FOV_color = RGBAArrayToU32(j["colors"]["Aimbot_FOV_color"]);
    if (j["colors"].contains("Aimbot_dot_color"))
        featurescolors::Aimbot_dot_color = RGBAArrayToU32(j["colors"]["Aimbot_dot_color"]);
    if (j["colors"].contains("Bullet_color"))
        featurescolors::Bullet_color = RGBAArrayToU32(j["colors"]["Bullet_color"]);

    featurescolors::generalcolorU32 = ImGui::ColorConvertFloat4ToU32(featurescolors::generalcolor);
}

void config::Delete(const std::string& name) {
    fs::remove(GetConfigPath(name));
}

std::vector<std::string> config::ListConfigs() {
    std::vector<std::string> names;
    char path[MAX_PATH];
    GetEnvironmentVariableA("USERPROFILE", path, MAX_PATH);
    std::string folder = std::string(path) + "\\NiggaWareConfigs\\";

    if (!fs::exists(folder)) {
        fs::create_directory(folder);
    }

    for (const auto& file : fs::directory_iterator(folder)) {
        if (file.path().extension() == ".json")
            names.push_back(file.path().stem().string());
    }
    return names;
}
