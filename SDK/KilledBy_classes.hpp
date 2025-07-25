﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KilledBy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KilledBy.KilledBy_C
// 0x0060 (0x02F0 - 0x0290)
class UKilledBy_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AndDominating;                                     // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Fade;                                              // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_88;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x02B8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   KillerRef;                                         // 0x02C0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         Killer_team;                                       // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Enemy_team;                                        // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class APlayerState*                           Killer_Player_State;                               // 0x02E0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Counter;                                           // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FSlateColor Get_Killer_Team();
	class FText Get_Killer_name();
	void ExecuteUbergraph_KilledBy(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KilledBy_C">();
	}
	static class UKilledBy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKilledBy_C>();
	}
};
static_assert(alignof(UKilledBy_C) == 0x000008, "Wrong alignment on UKilledBy_C");
static_assert(sizeof(UKilledBy_C) == 0x0002F0, "Wrong size on UKilledBy_C");
static_assert(offsetof(UKilledBy_C, UberGraphFrame) == 0x000290, "Member 'UKilledBy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKilledBy_C, AndDominating) == 0x000298, "Member 'UKilledBy_C::AndDominating' has a wrong offset!");
static_assert(offsetof(UKilledBy_C, Fade) == 0x0002A0, "Member 'UKilledBy_C::Fade' has a wrong offset!");
static_assert(offsetof(UKilledBy_C, Image_0) == 0x0002A8, "Member 'UKilledBy_C::Image_0' has a wrong offset!");
static_assert(offsetof(UKilledBy_C, Image_88) == 0x0002B0, "Member 'UKilledBy_C::Image_88' has a wrong offset!");
static_assert(offsetof(UKilledBy_C, TextBlock) == 0x0002B8, "Member 'UKilledBy_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UKilledBy_C, KillerRef) == 0x0002C0, "Member 'UKilledBy_C::KillerRef' has a wrong offset!");
static_assert(offsetof(UKilledBy_C, Killer_team) == 0x0002D8, "Member 'UKilledBy_C::Killer_team' has a wrong offset!");
static_assert(offsetof(UKilledBy_C, Enemy_team) == 0x0002DC, "Member 'UKilledBy_C::Enemy_team' has a wrong offset!");
static_assert(offsetof(UKilledBy_C, Killer_Player_State) == 0x0002E0, "Member 'UKilledBy_C::Killer_Player_State' has a wrong offset!");
static_assert(offsetof(UKilledBy_C, Counter) == 0x0002E8, "Member 'UKilledBy_C::Counter' has a wrong offset!");

}

