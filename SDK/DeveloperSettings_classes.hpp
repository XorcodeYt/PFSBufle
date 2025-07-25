﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DeveloperSettings

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "DeveloperSettings_structs.hpp"


namespace SDK
{

// Class DeveloperSettings.DeveloperSettings
// 0x0010 (0x0038 - 0x0028)
class UDeveloperSettings : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DeveloperSettings">();
	}
	static class UDeveloperSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeveloperSettings>();
	}
};
static_assert(alignof(UDeveloperSettings) == 0x000008, "Wrong alignment on UDeveloperSettings");
static_assert(sizeof(UDeveloperSettings) == 0x000038, "Wrong size on UDeveloperSettings");

// Class DeveloperSettings.DeveloperSettingsBackedByCVars
// 0x0000 (0x0038 - 0x0038)
class UDeveloperSettingsBackedByCVars final : public UDeveloperSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DeveloperSettingsBackedByCVars">();
	}
	static class UDeveloperSettingsBackedByCVars* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeveloperSettingsBackedByCVars>();
	}
};
static_assert(alignof(UDeveloperSettingsBackedByCVars) == 0x000008, "Wrong alignment on UDeveloperSettingsBackedByCVars");
static_assert(sizeof(UDeveloperSettingsBackedByCVars) == 0x000038, "Wrong size on UDeveloperSettingsBackedByCVars");

// Class DeveloperSettings.PlatformSettings
// 0x0018 (0x0040 - 0x0028)
class UPlatformSettings final : public UObject
{
public:
	uint8                                         Pad_28[0x18];                                      // 0x0028(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlatformSettings">();
	}
	static class UPlatformSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlatformSettings>();
	}
};
static_assert(alignof(UPlatformSettings) == 0x000008, "Wrong alignment on UPlatformSettings");
static_assert(sizeof(UPlatformSettings) == 0x000040, "Wrong size on UPlatformSettings");

// Class DeveloperSettings.PlatformSettingsManager
// 0x0058 (0x0080 - 0x0028)
class UPlatformSettingsManager final : public UObject
{
public:
	TMap<TSubclassOf<class UPlatformSettings>, struct FPlatformSettingsInstances> SettingsMap;       // 0x0028(0x0050)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_78[0x8];                                       // 0x0078(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlatformSettingsManager">();
	}
	static class UPlatformSettingsManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlatformSettingsManager>();
	}
};
static_assert(alignof(UPlatformSettingsManager) == 0x000008, "Wrong alignment on UPlatformSettingsManager");
static_assert(sizeof(UPlatformSettingsManager) == 0x000080, "Wrong size on UPlatformSettingsManager");
static_assert(offsetof(UPlatformSettingsManager, SettingsMap) == 0x000028, "Member 'UPlatformSettingsManager::SettingsMap' has a wrong offset!");

}

