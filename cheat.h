#pragma once
#include "menu.h"
#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_dx12.h"
#include "ImGui/imgui_impl_win32.h"
#include <fstream>
#include <sstream>
#include <unordered_set>
#define PI 3.14159265358979323846


namespace cheat {
    class Cheat {
    public:
        static bool InitCheat();
        static void RefreshCheat(SDK::UCanvas* canvas);
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
    inline float Vec3Dist(const SDK::FVector& a, const SDK::FVector& b) {
        return std::sqrt(
            (b.X - a.X) * (b.X - a.X) +
            (b.Y - a.Y) * (b.Y - a.Y) +
            (b.Z - a.Z) * (b.Z - a.Z)
        );
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
    inline std::string HexStr(uintptr_t address)
    {
        std::stringstream stream;
        stream << "0x" << std::hex << std::uppercase << address;
        return stream.str();
    }
    inline std::string HexStr(void* ptr) {
        return HexStr(reinterpret_cast<uintptr_t>(ptr));
    }
    template<typename T>
    struct TArray {
        T* Data;
        int32_t Count;
        int32_t Max;

        int Num() const { return Count; }
        T& operator[](int i) { return Data[i]; }
        const T& operator[](int i) const { return Data[i]; }
    };
    inline SDK::FVector RotatorToVector(const SDK::FRotator& rot)
    {
        float pitch = rot.Pitch * (PI / 180.0f);
        float yaw = rot.Yaw * (PI / 180.0f);

        float sp = sinf(pitch);
        float cp = cosf(pitch);
        float sy = sinf(yaw);
        float cy = cosf(yaw);

        return SDK::FVector(cp * cy, cp * sy, sp);
    }
    inline SDK::FLinearColor ImU32ToLinearColor(ImU32 color)
    {
        float a = ((color >> 24) & 0xFF) / 255.0f;
        float r = ((color >> 0) & 0xFF) / 255.0f;
        float g = ((color >> 8) & 0xFF) / 255.0f;
        float b = ((color >> 16) & 0xFF) / 255.0f;
        return SDK::FLinearColor(r, g, b, a);
    }
}
