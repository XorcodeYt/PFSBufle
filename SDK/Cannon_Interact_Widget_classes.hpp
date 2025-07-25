﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cannon_Interact_Widget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Cannon_Interact_Widget.Cannon_Interact_Widget_C
// 0x0028 (0x02B8 - 0x0290)
class UCannon_Interact_Widget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                InteractkeyShower;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x02A0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ACannon_C*                              BarrelRef;                                         // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Bannana_s_in_barrel;                               // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	class FText Get_Interact_key();
	void ExecuteUbergraph_Cannon_Interact_Widget(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Cannon_Interact_Widget_C">();
	}
	static class UCannon_Interact_Widget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCannon_Interact_Widget_C>();
	}
};
static_assert(alignof(UCannon_Interact_Widget_C) == 0x000008, "Wrong alignment on UCannon_Interact_Widget_C");
static_assert(sizeof(UCannon_Interact_Widget_C) == 0x0002B8, "Wrong size on UCannon_Interact_Widget_C");
static_assert(offsetof(UCannon_Interact_Widget_C, UberGraphFrame) == 0x000290, "Member 'UCannon_Interact_Widget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCannon_Interact_Widget_C, InteractkeyShower) == 0x000298, "Member 'UCannon_Interact_Widget_C::InteractkeyShower' has a wrong offset!");
static_assert(offsetof(UCannon_Interact_Widget_C, TextBlock) == 0x0002A0, "Member 'UCannon_Interact_Widget_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UCannon_Interact_Widget_C, BarrelRef) == 0x0002A8, "Member 'UCannon_Interact_Widget_C::BarrelRef' has a wrong offset!");
static_assert(offsetof(UCannon_Interact_Widget_C, Bannana_s_in_barrel) == 0x0002B0, "Member 'UCannon_Interact_Widget_C::Bannana_s_in_barrel' has a wrong offset!");

}

