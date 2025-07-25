﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CTF_Flag_Red_Home

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CTF_Flag_Red_Home.CTF_Flag_Red_Home_C
// 0x0030 (0x02A8 - 0x0278)
class ACTF_Flag_Red_Home_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                       Widget;                                            // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 flag2;                                             // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_CTF_Flag_Red_Home(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CTF_Flag_Red_Home_C">();
	}
	static class ACTF_Flag_Red_Home_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACTF_Flag_Red_Home_C>();
	}
};
static_assert(alignof(ACTF_Flag_Red_Home_C) == 0x000008, "Wrong alignment on ACTF_Flag_Red_Home_C");
static_assert(sizeof(ACTF_Flag_Red_Home_C) == 0x0002A8, "Wrong size on ACTF_Flag_Red_Home_C");
static_assert(offsetof(ACTF_Flag_Red_Home_C, UberGraphFrame) == 0x000278, "Member 'ACTF_Flag_Red_Home_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACTF_Flag_Red_Home_C, Widget) == 0x000280, "Member 'ACTF_Flag_Red_Home_C::Widget' has a wrong offset!");
static_assert(offsetof(ACTF_Flag_Red_Home_C, StaticMesh) == 0x000288, "Member 'ACTF_Flag_Red_Home_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ACTF_Flag_Red_Home_C, Capsule) == 0x000290, "Member 'ACTF_Flag_Red_Home_C::Capsule' has a wrong offset!");
static_assert(offsetof(ACTF_Flag_Red_Home_C, flag2) == 0x000298, "Member 'ACTF_Flag_Red_Home_C::flag2' has a wrong offset!");
static_assert(offsetof(ACTF_Flag_Red_Home_C, DefaultSceneRoot) == 0x0002A0, "Member 'ACTF_Flag_Red_Home_C::DefaultSceneRoot' has a wrong offset!");

}

