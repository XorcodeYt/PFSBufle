#pragma once
#include <string>
#include <vector>

namespace config {
    void Save(const std::string& name);
    void Load(const std::string& name);
    void Delete(const std::string& name);
    std::vector<std::string> ListConfigs();
    std::string GetConfigPath(const std::string& name);
}
