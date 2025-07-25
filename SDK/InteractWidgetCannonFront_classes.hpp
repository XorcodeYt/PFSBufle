﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InteractWidgetCannonFront

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InteractWidgetCannonFront.InteractWidgetCannonFront_C
// 0x0008 (0x0298 - 0x0290)
class UInteractWidgetCannonFront_C final : public UUserWidget
{
public:
	class UButton*                                Button_0;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class FText GetText_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InteractWidgetCannonFront_C">();
	}
	static class UInteractWidgetCannonFront_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractWidgetCannonFront_C>();
	}
};
static_assert(alignof(UInteractWidgetCannonFront_C) == 0x000008, "Wrong alignment on UInteractWidgetCannonFront_C");
static_assert(sizeof(UInteractWidgetCannonFront_C) == 0x000298, "Wrong size on UInteractWidgetCannonFront_C");
static_assert(offsetof(UInteractWidgetCannonFront_C, Button_0) == 0x000290, "Member 'UInteractWidgetCannonFront_C::Button_0' has a wrong offset!");

}

