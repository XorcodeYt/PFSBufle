#pragma once
#include "menu.h"
#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_dx12.h"
#include "ImGui/imgui_impl_win32.h"
#include <fstream>
#include <unordered_set>

namespace cheat {
    class Cheat {
    public:
        static bool InitCheat();
        static void RefreshCheat();
		static void hkProcessEvent();
    };
    inline std::unordered_set<SDK::AActor*> seenProjectiles;
}
namespace helper {
    inline float Vec3Size(const SDK::FVector& vec) {
        return sqrtf(vec.X * vec.X + vec.Y * vec.Y + vec.Z * vec.Z);
    }

    inline SDK::FVector Vec3Normalize(const SDK::FVector& vec) {
        float mag = Vec3Size(vec);
        if (mag == 0.f) return SDK::FVector(0, 0, 0);
        return SDK::FVector(vec.X / mag, vec.Y / mag, vec.Z / mag);
    }

    inline float Vec2Distance(const SDK::FVector2D& a, const SDK::FVector2D& b) {
        float dx = a.X - b.X;
        float dy = a.Y - b.Y;
        return sqrtf(dx * dx + dy * dy);
    }

    inline float Vec3Distance(const SDK::FVector& a, const SDK::FVector& b) {
        float dx = a.X - b.X;
        float dy = a.Y - b.Y;
        float dz = a.Z - b.Z;
        return sqrtf(dx * dx + dy * dy + dz * dz);
    }
    inline SDK::FRotator VecToRotator(const SDK::FVector& vec)
    {
        SDK::FRotator rot;
        rot.Pitch = -atan2f(vec.Z, sqrtf(vec.X * vec.X + vec.Y * vec.Y)) * (180.0f / 3.14159265f);
        rot.Yaw = atan2f(vec.Y, vec.X) * (180.0f / 3.14159265f);
        rot.Roll = 0.0f;
        return rot;
    }
    template<typename T>
    inline T* FindComponentByClass(SDK::AActor* actor) {
        if (!actor) return nullptr;

        auto* result = actor->GetComponentByClass(T::StaticClass());
        return result ? static_cast<T*>(result) : nullptr;
    }
}