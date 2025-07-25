﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GusAnimBpNew

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "GusAnimBpNew_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass GusAnimBpNew.GusAnimBpNew_C
// 0x06D0 (0x0A20 - 0x0350)
class UGusAnimBpNew_C final : public UAnimInstance
{
public:
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct GusAnimBpNew::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                 // 0x0358(0x000C)(HasGetValueTypeHash)
	uint8                                         Pad_364[0x4];                                      // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0368(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0370(0x0008)()
	uint8                                         Pad_378[0x8];                                      // 0x0378(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_Fabrik                       AnimGraphNode_Fabrik;                              // 0x0380(0x01F0)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0570(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0590(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x05B0(0x0128)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x06D8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0700(0x0028)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x0728(0x0068)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0790(0x0020)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x07B0(0x0068)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0818(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0838(0x00B8)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x08F0(0x0020)()
	bool                                          Is_Falling;                                        // 0x0910(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_911[0x7];                                      // 0x0911(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Speed;                                             // 0x0918(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               HeadRotation;                                      // 0x0920(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                Gun_transform;                                     // 0x0938(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Effector_Transform;                                // 0x0950(0x0060)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Alpha;                                             // 0x09B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B4[0x4];                                      // 0x09B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGusPlayer_C*                           GusRefrence;                                       // 0x09B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Head_looking;                                      // 0x09C0(0x0060)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnNewFunction_0(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node);
	void head_turning();
	void Eye_of_reach_hands();
	void ExecuteUbergraph_GusAnimBpNew(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GusAnimBpNew_C">();
	}
	static class UGusAnimBpNew_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGusAnimBpNew_C>();
	}
};
static_assert(alignof(UGusAnimBpNew_C) == 0x000010, "Wrong alignment on UGusAnimBpNew_C");
static_assert(sizeof(UGusAnimBpNew_C) == 0x000A20, "Wrong size on UGusAnimBpNew_C");
static_assert(offsetof(UGusAnimBpNew_C, UberGraphFrame) == 0x000350, "Member 'UGusAnimBpNew_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, __AnimBlueprintMutables) == 0x000358, "Member 'UGusAnimBpNew_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, AnimBlueprintExtension_PropertyAccess) == 0x000368, "Member 'UGusAnimBpNew_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, AnimBlueprintExtension_Base) == 0x000370, "Member 'UGusAnimBpNew_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, AnimGraphNode_Fabrik) == 0x000380, "Member 'UGusAnimBpNew_C::AnimGraphNode_Fabrik' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, AnimGraphNode_ComponentToLocalSpace) == 0x000570, "Member 'UGusAnimBpNew_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, AnimGraphNode_LocalToComponentSpace) == 0x000590, "Member 'UGusAnimBpNew_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, AnimGraphNode_ModifyBone) == 0x0005B0, "Member 'UGusAnimBpNew_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, AnimGraphNode_TransitionResult_1) == 0x0006D8, "Member 'UGusAnimBpNew_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, AnimGraphNode_TransitionResult) == 0x000700, "Member 'UGusAnimBpNew_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, AnimGraphNode_BlendSpacePlayer_1) == 0x000728, "Member 'UGusAnimBpNew_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, AnimGraphNode_StateResult_1) == 0x000790, "Member 'UGusAnimBpNew_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, AnimGraphNode_BlendSpacePlayer) == 0x0007B0, "Member 'UGusAnimBpNew_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, AnimGraphNode_StateResult) == 0x000818, "Member 'UGusAnimBpNew_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, AnimGraphNode_StateMachine) == 0x000838, "Member 'UGusAnimBpNew_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, AnimGraphNode_Root) == 0x0008F0, "Member 'UGusAnimBpNew_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, Is_Falling) == 0x000910, "Member 'UGusAnimBpNew_C::Is_Falling' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, Speed) == 0x000918, "Member 'UGusAnimBpNew_C::Speed' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, HeadRotation) == 0x000920, "Member 'UGusAnimBpNew_C::HeadRotation' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, Gun_transform) == 0x000938, "Member 'UGusAnimBpNew_C::Gun_transform' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, Effector_Transform) == 0x000950, "Member 'UGusAnimBpNew_C::Effector_Transform' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, Alpha) == 0x0009B0, "Member 'UGusAnimBpNew_C::Alpha' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, GusRefrence) == 0x0009B8, "Member 'UGusAnimBpNew_C::GusRefrence' has a wrong offset!");
static_assert(offsetof(UGusAnimBpNew_C, Head_looking) == 0x0009C0, "Member 'UGusAnimBpNew_C::Head_looking' has a wrong offset!");

}

