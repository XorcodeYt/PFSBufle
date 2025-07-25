﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemSteam

#include "Basic.hpp"

#include "OnlineSubsystemUtils_classes.hpp"
#include "PacketHandler_classes.hpp"


namespace SDK
{

// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// 0x0000 (0x0028 - 0x0028)
class USteamAuthComponentModuleInterface final : public UHandlerComponentFactory
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SteamAuthComponentModuleInterface">();
	}
	static class USteamAuthComponentModuleInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamAuthComponentModuleInterface>();
	}
};
static_assert(alignof(USteamAuthComponentModuleInterface) == 0x000008, "Wrong alignment on USteamAuthComponentModuleInterface");
static_assert(sizeof(USteamAuthComponentModuleInterface) == 0x000028, "Wrong size on USteamAuthComponentModuleInterface");

// Class OnlineSubsystemSteam.SteamNetConnection
// 0x0010 (0x32F0 - 0x32E0)
class USteamNetConnection final : public UIpConnection
{
public:
	bool                                          bIsPassthrough;                                    // 0x32E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_32E1[0xF];                                     // 0x32E1(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SteamNetConnection">();
	}
	static class USteamNetConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamNetConnection>();
	}
};
static_assert(alignof(USteamNetConnection) == 0x000010, "Wrong alignment on USteamNetConnection");
static_assert(sizeof(USteamNetConnection) == 0x0032F0, "Wrong size on USteamNetConnection");
static_assert(offsetof(USteamNetConnection, bIsPassthrough) == 0x0032E0, "Member 'USteamNetConnection::bIsPassthrough' has a wrong offset!");

// Class OnlineSubsystemSteam.SteamNetDriver
// 0x0008 (0x07E0 - 0x07D8)
class USteamNetDriver final : public UIpNetDriver
{
public:
	uint8                                         Pad_7D8[0x8];                                      // 0x07D8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SteamNetDriver">();
	}
	static class USteamNetDriver* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamNetDriver>();
	}
};
static_assert(alignof(USteamNetDriver) == 0x000008, "Wrong alignment on USteamNetDriver");
static_assert(sizeof(USteamNetDriver) == 0x0007E0, "Wrong size on USteamNetDriver");

}

