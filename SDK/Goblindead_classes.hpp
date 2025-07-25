﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Goblindead

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Goblindead.Goblindead_C
// 0x0010 (0x0610 - 0x0600)
class AGoblindead_C final : public ACharacter
{
public:
	uint8                                         Pad_5F8[0x8];                                      // 0x05F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0600(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0608(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Goblindead(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Goblindead_C">();
	}
	static class AGoblindead_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGoblindead_C>();
	}
};
static_assert(alignof(AGoblindead_C) == 0x000010, "Wrong alignment on AGoblindead_C");
static_assert(sizeof(AGoblindead_C) == 0x000610, "Wrong size on AGoblindead_C");
static_assert(offsetof(AGoblindead_C, UberGraphFrame) == 0x000600, "Member 'AGoblindead_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGoblindead_C, SkeletalMesh) == 0x000608, "Member 'AGoblindead_C::SkeletalMesh' has a wrong offset!");

}

