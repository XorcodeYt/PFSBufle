﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CannonballAOE

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CannonballAOE.CannonballAOE_C
// 0x0020 (0x0298 - 0x0278)
class ACannonballAOE_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        explosion_muffled_Cue;                             // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CannonParticleAOE;                                 // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_CannonballAOE(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CannonballAOE_C">();
	}
	static class ACannonballAOE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACannonballAOE_C>();
	}
};
static_assert(alignof(ACannonballAOE_C) == 0x000008, "Wrong alignment on ACannonballAOE_C");
static_assert(sizeof(ACannonballAOE_C) == 0x000298, "Wrong size on ACannonballAOE_C");
static_assert(offsetof(ACannonballAOE_C, UberGraphFrame) == 0x000278, "Member 'ACannonballAOE_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACannonballAOE_C, explosion_muffled_Cue) == 0x000280, "Member 'ACannonballAOE_C::explosion_muffled_Cue' has a wrong offset!");
static_assert(offsetof(ACannonballAOE_C, CannonParticleAOE) == 0x000288, "Member 'ACannonballAOE_C::CannonParticleAOE' has a wrong offset!");
static_assert(offsetof(ACannonballAOE_C, DefaultSceneRoot) == 0x000290, "Member 'ACannonballAOE_C::DefaultSceneRoot' has a wrong offset!");

}

