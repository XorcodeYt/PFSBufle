﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ResonanceAudio

#include "Basic.hpp"

#include "ResonanceAudio_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "AudioExtensions_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings
// 0x0028 (0x0050 - 0x0028)
class UResonanceAudioSpatializationSourceSettings final : public USpatializationPluginSourceSettingsBase
{
public:
	ERaSpatializationMethod                       SpatializationMethod;                              // 0x0028(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Pattern;                                           // 0x002C(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Sharpness;                                         // 0x0030(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bToggleVisualization;                              // 0x0034(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Scale;                                             // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Spread;                                            // 0x003C(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERaDistanceRolloffModel                       Rolloff;                                           // 0x0040(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinDistance;                                       // 0x0044(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxDistance;                                       // 0x0048(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetSoundSourceDirectivity(float InPattern, float InSharpness);
	void SetSoundSourceSpread(float InSpread);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResonanceAudioSpatializationSourceSettings">();
	}
	static class UResonanceAudioSpatializationSourceSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResonanceAudioSpatializationSourceSettings>();
	}
};
static_assert(alignof(UResonanceAudioSpatializationSourceSettings) == 0x000008, "Wrong alignment on UResonanceAudioSpatializationSourceSettings");
static_assert(sizeof(UResonanceAudioSpatializationSourceSettings) == 0x000050, "Wrong size on UResonanceAudioSpatializationSourceSettings");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, SpatializationMethod) == 0x000028, "Member 'UResonanceAudioSpatializationSourceSettings::SpatializationMethod' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Pattern) == 0x00002C, "Member 'UResonanceAudioSpatializationSourceSettings::Pattern' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Sharpness) == 0x000030, "Member 'UResonanceAudioSpatializationSourceSettings::Sharpness' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, bToggleVisualization) == 0x000034, "Member 'UResonanceAudioSpatializationSourceSettings::bToggleVisualization' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Scale) == 0x000038, "Member 'UResonanceAudioSpatializationSourceSettings::Scale' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Spread) == 0x00003C, "Member 'UResonanceAudioSpatializationSourceSettings::Spread' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Rolloff) == 0x000040, "Member 'UResonanceAudioSpatializationSourceSettings::Rolloff' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, MinDistance) == 0x000044, "Member 'UResonanceAudioSpatializationSourceSettings::MinDistance' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, MaxDistance) == 0x000048, "Member 'UResonanceAudioSpatializationSourceSettings::MaxDistance' has a wrong offset!");

// Class ResonanceAudio.ResonanceAudioSoundfieldSettings
// 0x0008 (0x0030 - 0x0028)
class UResonanceAudioSoundfieldSettings final : public USoundfieldEncodingSettingsBase
{
public:
	EResonanceRenderMode                          RenderMode;                                        // 0x0028(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResonanceAudioSoundfieldSettings">();
	}
	static class UResonanceAudioSoundfieldSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResonanceAudioSoundfieldSettings>();
	}
};
static_assert(alignof(UResonanceAudioSoundfieldSettings) == 0x000008, "Wrong alignment on UResonanceAudioSoundfieldSettings");
static_assert(sizeof(UResonanceAudioSoundfieldSettings) == 0x000030, "Wrong size on UResonanceAudioSoundfieldSettings");
static_assert(offsetof(UResonanceAudioSoundfieldSettings, RenderMode) == 0x000028, "Member 'UResonanceAudioSoundfieldSettings::RenderMode' has a wrong offset!");

// Class ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UResonanceAudioBlueprintFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UResonanceAudioReverbPluginPreset* GetGlobalReverbPreset();
	static void SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* InPreset);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResonanceAudioBlueprintFunctionLibrary">();
	}
	static class UResonanceAudioBlueprintFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResonanceAudioBlueprintFunctionLibrary>();
	}
};
static_assert(alignof(UResonanceAudioBlueprintFunctionLibrary) == 0x000008, "Wrong alignment on UResonanceAudioBlueprintFunctionLibrary");
static_assert(sizeof(UResonanceAudioBlueprintFunctionLibrary) == 0x000028, "Wrong size on UResonanceAudioBlueprintFunctionLibrary");

// Class ResonanceAudio.ResonanceAudioDirectivityVisualizer
// 0x0080 (0x02F8 - 0x0278)
class AResonanceAudioDirectivityVisualizer final : public AActor
{
public:
	uint8                                         Pad_278[0x70];                                     // 0x0278(0x0070)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterial*                              Material;                                          // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UResonanceAudioSpatializationSourceSettings* Settings;                                     // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResonanceAudioDirectivityVisualizer">();
	}
	static class AResonanceAudioDirectivityVisualizer* GetDefaultObj()
	{
		return GetDefaultObjImpl<AResonanceAudioDirectivityVisualizer>();
	}
};
static_assert(alignof(AResonanceAudioDirectivityVisualizer) == 0x000008, "Wrong alignment on AResonanceAudioDirectivityVisualizer");
static_assert(sizeof(AResonanceAudioDirectivityVisualizer) == 0x0002F8, "Wrong size on AResonanceAudioDirectivityVisualizer");
static_assert(offsetof(AResonanceAudioDirectivityVisualizer, Material) == 0x0002E8, "Member 'AResonanceAudioDirectivityVisualizer::Material' has a wrong offset!");
static_assert(offsetof(AResonanceAudioDirectivityVisualizer, Settings) == 0x0002F0, "Member 'AResonanceAudioDirectivityVisualizer::Settings' has a wrong offset!");

// Class ResonanceAudio.ResonanceAudioReverbPluginPreset
// 0x0108 (0x0170 - 0x0068)
class UResonanceAudioReverbPluginPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_68[0x98];                                      // 0x0068(0x0098)(Fixing Size After Last Property [ Dumper-7 ])
	struct FResonanceAudioReverbPluginSettings    Settings;                                          // 0x0100(0x0070)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	void SetEnableRoomEffects(bool bInEnableRoomEffects);
	void SetReflectionScalar(float InReflectionScalar);
	void SetReverbBrightness(float InReverbBrightness);
	void SetReverbGain(float InReverbGain);
	void SetReverbTimeModifier(float InReverbTimeModifier);
	void SetRoomDimensions(const struct FVector& InDimensions);
	void SetRoomMaterials(const TArray<ERaMaterialName>& InMaterials);
	void SetRoomPosition(const struct FVector& InPosition);
	void SetRoomRotation(const struct FQuat& InRotation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResonanceAudioReverbPluginPreset">();
	}
	static class UResonanceAudioReverbPluginPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResonanceAudioReverbPluginPreset>();
	}
};
static_assert(alignof(UResonanceAudioReverbPluginPreset) == 0x000010, "Wrong alignment on UResonanceAudioReverbPluginPreset");
static_assert(sizeof(UResonanceAudioReverbPluginPreset) == 0x000170, "Wrong size on UResonanceAudioReverbPluginPreset");
static_assert(offsetof(UResonanceAudioReverbPluginPreset, Settings) == 0x000100, "Member 'UResonanceAudioReverbPluginPreset::Settings' has a wrong offset!");

// Class ResonanceAudio.ResonanceAudioSettings
// 0x0050 (0x0078 - 0x0028)
class UResonanceAudioSettings final : public UObject
{
public:
	struct FSoftObjectPath                        OutputSubmix;                                      // 0x0028(0x0018)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERaQualityMode                                QualityMode;                                       // 0x0040(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        GlobalReverbPreset;                                // 0x0048(0x0018)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        GlobalSourcePreset;                                // 0x0060(0x0018)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResonanceAudioSettings">();
	}
	static class UResonanceAudioSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResonanceAudioSettings>();
	}
};
static_assert(alignof(UResonanceAudioSettings) == 0x000008, "Wrong alignment on UResonanceAudioSettings");
static_assert(sizeof(UResonanceAudioSettings) == 0x000078, "Wrong size on UResonanceAudioSettings");
static_assert(offsetof(UResonanceAudioSettings, OutputSubmix) == 0x000028, "Member 'UResonanceAudioSettings::OutputSubmix' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSettings, QualityMode) == 0x000040, "Member 'UResonanceAudioSettings::QualityMode' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSettings, GlobalReverbPreset) == 0x000048, "Member 'UResonanceAudioSettings::GlobalReverbPreset' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSettings, GlobalSourcePreset) == 0x000060, "Member 'UResonanceAudioSettings::GlobalSourcePreset' has a wrong offset!");

}

