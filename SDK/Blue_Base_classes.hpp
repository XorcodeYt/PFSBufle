﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Blue_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Blue_Base.Blue_Base_C
// 0x0038 (0x02B0 - 0x0278)
class ABlue_Base_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Blue_Score;                                        // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_294[0x4];                                      // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              Red_Team_Gets_A_Point;                             // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AHUD_BP_C*                              HudRef;                                            // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void Flag_for_all();
	void ExecuteUbergraph_Blue_Base(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Blue_Base_C">();
	}
	static class ABlue_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABlue_Base_C>();
	}
};
static_assert(alignof(ABlue_Base_C) == 0x000008, "Wrong alignment on ABlue_Base_C");
static_assert(sizeof(ABlue_Base_C) == 0x0002B0, "Wrong size on ABlue_Base_C");
static_assert(offsetof(ABlue_Base_C, UberGraphFrame) == 0x000278, "Member 'ABlue_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABlue_Base_C, Sphere) == 0x000280, "Member 'ABlue_Base_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABlue_Base_C, DefaultSceneRoot) == 0x000288, "Member 'ABlue_Base_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABlue_Base_C, Blue_Score) == 0x000290, "Member 'ABlue_Base_C::Blue_Score' has a wrong offset!");
static_assert(offsetof(ABlue_Base_C, Red_Team_Gets_A_Point) == 0x000298, "Member 'ABlue_Base_C::Red_Team_Gets_A_Point' has a wrong offset!");
static_assert(offsetof(ABlue_Base_C, HudRef) == 0x0002A8, "Member 'ABlue_Base_C::HudRef' has a wrong offset!");

}

