﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ThirdPersonCharacter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "InputCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C
// 0x0020 (0x0620 - 0x0600)
class ABP_ThirdPersonCharacter_C final : public ACharacter
{
public:
	uint8                                         Pad_5F8[0x8];                                      // 0x05F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0600(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                       FollowCamera;                                      // 0x0608(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    CameraBoom;                                        // 0x0610(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        TurnRateGamepad;                                   // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void InpTchEvt_Released(ETouchIndex FingerIndex, const struct FVector& Location);
	void InpTchEvt_Pressed(ETouchIndex FingerIndex, const struct FVector& Location);
	void _Left_Mouse_K2Node_InputAxisEvent_16(float AxisValue);
	void _Left_Gamepad_K2Node_InputAxisEvent_15(float AxisValue);
	void _Left_K2Node_InputAxisEvent_19(float AxisValue);
	void _Backward_K2Node_InputAxisEvent_14(float AxisValue);
	void _Down_Mouse_K2Node_InputAxisEvent_17(float AxisValue);
	void _Down_Gamepad_K2Node_InputAxisEvent_18(float AxisValue);
	void InpActEvt_Jump_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_0(const struct FKey& Key);
	void ExecuteUbergraph_BP_ThirdPersonCharacter(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ThirdPersonCharacter_C">();
	}
	static class ABP_ThirdPersonCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ThirdPersonCharacter_C>();
	}
};
static_assert(alignof(ABP_ThirdPersonCharacter_C) == 0x000010, "Wrong alignment on ABP_ThirdPersonCharacter_C");
static_assert(sizeof(ABP_ThirdPersonCharacter_C) == 0x000620, "Wrong size on ABP_ThirdPersonCharacter_C");
static_assert(offsetof(ABP_ThirdPersonCharacter_C, UberGraphFrame) == 0x000600, "Member 'ABP_ThirdPersonCharacter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ThirdPersonCharacter_C, FollowCamera) == 0x000608, "Member 'ABP_ThirdPersonCharacter_C::FollowCamera' has a wrong offset!");
static_assert(offsetof(ABP_ThirdPersonCharacter_C, CameraBoom) == 0x000610, "Member 'ABP_ThirdPersonCharacter_C::CameraBoom' has a wrong offset!");
static_assert(offsetof(ABP_ThirdPersonCharacter_C, TurnRateGamepad) == 0x000618, "Member 'ABP_ThirdPersonCharacter_C::TurnRateGamepad' has a wrong offset!");

}

