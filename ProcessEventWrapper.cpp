#include "ProcessEventHook.hpp"
#include "utils.h"

extern tProcessEvent oProcessEvent;

void __fastcall SafeProcessEvent(SDK::UObject* obj, SDK::UFunction* function, void* params)
{
    if (!function || !oProcessEvent)
    {
        utils::Console::logError("[HOOKED] Invalid ProcessEvent args");
        return;
    }

    const char* name = nullptr;
    try {
        name = function->GetFullName().c_str();
    }
    catch (...) {
        utils::Console::logError("[HOOKED] Exception in GetFullName");
    }

    if (name && strstr(name, "Eat_Banana"))
        utils::Console::log(std::string("[HOOKED] Eat_Banana: ") + name);

    oProcessEvent(obj, function, params);
}