﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DamageIndecator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DamageIndecator.DamageIndecator_C
// 0x0018 (0x02A8 - 0x0290)
class UDamageIndecator_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OpacityAnim;                                       // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DamageIndecator(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DamageIndecator_C">();
	}
	static class UDamageIndecator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDamageIndecator_C>();
	}
};
static_assert(alignof(UDamageIndecator_C) == 0x000008, "Wrong alignment on UDamageIndecator_C");
static_assert(sizeof(UDamageIndecator_C) == 0x0002A8, "Wrong size on UDamageIndecator_C");
static_assert(offsetof(UDamageIndecator_C, UberGraphFrame) == 0x000290, "Member 'UDamageIndecator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDamageIndecator_C, OpacityAnim) == 0x000298, "Member 'UDamageIndecator_C::OpacityAnim' has a wrong offset!");
static_assert(offsetof(UDamageIndecator_C, Image_0) == 0x0002A0, "Member 'UDamageIndecator_C::Image_0' has a wrong offset!");

}

