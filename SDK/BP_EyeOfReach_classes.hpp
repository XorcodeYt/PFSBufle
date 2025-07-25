﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EyeOfReach

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EyeOfReach.BP_EyeOfReach_C
// 0x0010 (0x0288 - 0x0278)
class ABP_EyeOfReach_C final : public AActor
{
public:
	class UStaticMeshComponent*                   eyeofreachmodel;                                   // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EyeOfReach_C">();
	}
	static class ABP_EyeOfReach_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EyeOfReach_C>();
	}
};
static_assert(alignof(ABP_EyeOfReach_C) == 0x000008, "Wrong alignment on ABP_EyeOfReach_C");
static_assert(sizeof(ABP_EyeOfReach_C) == 0x000288, "Wrong size on ABP_EyeOfReach_C");
static_assert(offsetof(ABP_EyeOfReach_C, eyeofreachmodel) == 0x000278, "Member 'ABP_EyeOfReach_C::eyeofreachmodel' has a wrong offset!");
static_assert(offsetof(ABP_EyeOfReach_C, DefaultSceneRoot) == 0x000280, "Member 'ABP_EyeOfReach_C::DefaultSceneRoot' has a wrong offset!");

}

