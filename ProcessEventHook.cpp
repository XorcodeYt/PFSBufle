#include "ProcessEventHook.hpp"
#include "utils.h"
#include "minhook/include/MinHook.h"
#include <string>
#include <cstring>

typedef void(__fastcall* tProcessEvent)(SDK::UObject*, SDK::UFunction*, void*);
tProcessEvent oProcessEvent = nullptr;

void __fastcall SafeProcessEvent(SDK::UObject* obj, SDK::UFunction* function, void* params)
{
    if (!function || !oProcessEvent)
        return;

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

void HookProcessEvent()
{
    void** vtable = *(void***)(SDK::UObject::GObjects->GetByIndex(0));
    if (!vtable) {
        utils::Console::logError("[HOOK] Failed to get UObject vtable");
        return;
    }

    void* target = vtable[66];
    utils::Console::log("[HOOK] VTable[66] = " + std::to_string((uintptr_t)target));

    if (MH_CreateHook(target, &SafeProcessEvent, reinterpret_cast<void**>(&oProcessEvent)) == MH_OK) {
        MH_EnableHook(target);
        utils::Console::log("[HOOK] ProcessEvent hooked successfully");
    }
    else {
        utils::Console::logError("[HOOK] Failed to hook ProcessEvent");
    }
}
