﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KillConfirmContainer

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KillConfirmContainer.KillConfirmContainer_C
// 0x0008 (0x0298 - 0x0290)
class UKillConfirmContainer_C final : public UUserWidget
{
public:
	class UVerticalBox*                           VerticalBox_81;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KillConfirmContainer_C">();
	}
	static class UKillConfirmContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKillConfirmContainer_C>();
	}
};
static_assert(alignof(UKillConfirmContainer_C) == 0x000008, "Wrong alignment on UKillConfirmContainer_C");
static_assert(sizeof(UKillConfirmContainer_C) == 0x000298, "Wrong size on UKillConfirmContainer_C");
static_assert(offsetof(UKillConfirmContainer_C, VerticalBox_81) == 0x000290, "Member 'UKillConfirmContainer_C::VerticalBox_81' has a wrong offset!");

}

