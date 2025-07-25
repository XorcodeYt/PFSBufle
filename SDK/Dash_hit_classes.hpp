﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dash_hit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Dash_hit.Dash_hit_C
// 0x0018 (0x0290 - 0x0278)
class ADash_hit_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_Dash_hit(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Dash_hit_C">();
	}
	static class ADash_hit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADash_hit_C>();
	}
};
static_assert(alignof(ADash_hit_C) == 0x000008, "Wrong alignment on ADash_hit_C");
static_assert(sizeof(ADash_hit_C) == 0x000290, "Wrong size on ADash_hit_C");
static_assert(offsetof(ADash_hit_C, UberGraphFrame) == 0x000278, "Member 'ADash_hit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADash_hit_C, Box) == 0x000280, "Member 'ADash_hit_C::Box' has a wrong offset!");
static_assert(offsetof(ADash_hit_C, DefaultSceneRoot) == 0x000288, "Member 'ADash_hit_C::DefaultSceneRoot' has a wrong offset!");

}

