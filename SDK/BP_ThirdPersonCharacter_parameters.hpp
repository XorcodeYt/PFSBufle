﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ThirdPersonCharacter

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C.InpTchEvt_Released
// 0x0020 (0x0020 - 0x0000)
struct BP_ThirdPersonCharacter_C_InpTchEvt_Released final
{
public:
	ETouchIndex                                   FingerIndex;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThirdPersonCharacter_C_InpTchEvt_Released) == 0x000008, "Wrong alignment on BP_ThirdPersonCharacter_C_InpTchEvt_Released");
static_assert(sizeof(BP_ThirdPersonCharacter_C_InpTchEvt_Released) == 0x000020, "Wrong size on BP_ThirdPersonCharacter_C_InpTchEvt_Released");
static_assert(offsetof(BP_ThirdPersonCharacter_C_InpTchEvt_Released, FingerIndex) == 0x000000, "Member 'BP_ThirdPersonCharacter_C_InpTchEvt_Released::FingerIndex' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_InpTchEvt_Released, Location) == 0x000008, "Member 'BP_ThirdPersonCharacter_C_InpTchEvt_Released::Location' has a wrong offset!");

// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C.InpTchEvt_Pressed
// 0x0020 (0x0020 - 0x0000)
struct BP_ThirdPersonCharacter_C_InpTchEvt_Pressed final
{
public:
	ETouchIndex                                   FingerIndex;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThirdPersonCharacter_C_InpTchEvt_Pressed) == 0x000008, "Wrong alignment on BP_ThirdPersonCharacter_C_InpTchEvt_Pressed");
static_assert(sizeof(BP_ThirdPersonCharacter_C_InpTchEvt_Pressed) == 0x000020, "Wrong size on BP_ThirdPersonCharacter_C_InpTchEvt_Pressed");
static_assert(offsetof(BP_ThirdPersonCharacter_C_InpTchEvt_Pressed, FingerIndex) == 0x000000, "Member 'BP_ThirdPersonCharacter_C_InpTchEvt_Pressed::FingerIndex' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_InpTchEvt_Pressed, Location) == 0x000008, "Member 'BP_ThirdPersonCharacter_C_InpTchEvt_Pressed::Location' has a wrong offset!");

// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C. Left Mouse_K2Node_InputAxisEvent_16
// 0x0004 (0x0004 - 0x0000)
struct BP_ThirdPersonCharacter_C__Left_Mouse_K2Node_InputAxisEvent_16 final
{
public:
	float                                         AxisValue;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThirdPersonCharacter_C__Left_Mouse_K2Node_InputAxisEvent_16) == 0x000004, "Wrong alignment on BP_ThirdPersonCharacter_C__Left_Mouse_K2Node_InputAxisEvent_16");
static_assert(sizeof(BP_ThirdPersonCharacter_C__Left_Mouse_K2Node_InputAxisEvent_16) == 0x000004, "Wrong size on BP_ThirdPersonCharacter_C__Left_Mouse_K2Node_InputAxisEvent_16");
static_assert(offsetof(BP_ThirdPersonCharacter_C__Left_Mouse_K2Node_InputAxisEvent_16, AxisValue) == 0x000000, "Member 'BP_ThirdPersonCharacter_C__Left_Mouse_K2Node_InputAxisEvent_16::AxisValue' has a wrong offset!");

// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C. Left Gamepad_K2Node_InputAxisEvent_15
// 0x0004 (0x0004 - 0x0000)
struct BP_ThirdPersonCharacter_C__Left_Gamepad_K2Node_InputAxisEvent_15 final
{
public:
	float                                         AxisValue;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThirdPersonCharacter_C__Left_Gamepad_K2Node_InputAxisEvent_15) == 0x000004, "Wrong alignment on BP_ThirdPersonCharacter_C__Left_Gamepad_K2Node_InputAxisEvent_15");
static_assert(sizeof(BP_ThirdPersonCharacter_C__Left_Gamepad_K2Node_InputAxisEvent_15) == 0x000004, "Wrong size on BP_ThirdPersonCharacter_C__Left_Gamepad_K2Node_InputAxisEvent_15");
static_assert(offsetof(BP_ThirdPersonCharacter_C__Left_Gamepad_K2Node_InputAxisEvent_15, AxisValue) == 0x000000, "Member 'BP_ThirdPersonCharacter_C__Left_Gamepad_K2Node_InputAxisEvent_15::AxisValue' has a wrong offset!");

// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C. Left_K2Node_InputAxisEvent_19
// 0x0004 (0x0004 - 0x0000)
struct BP_ThirdPersonCharacter_C__Left_K2Node_InputAxisEvent_19 final
{
public:
	float                                         AxisValue;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThirdPersonCharacter_C__Left_K2Node_InputAxisEvent_19) == 0x000004, "Wrong alignment on BP_ThirdPersonCharacter_C__Left_K2Node_InputAxisEvent_19");
static_assert(sizeof(BP_ThirdPersonCharacter_C__Left_K2Node_InputAxisEvent_19) == 0x000004, "Wrong size on BP_ThirdPersonCharacter_C__Left_K2Node_InputAxisEvent_19");
static_assert(offsetof(BP_ThirdPersonCharacter_C__Left_K2Node_InputAxisEvent_19, AxisValue) == 0x000000, "Member 'BP_ThirdPersonCharacter_C__Left_K2Node_InputAxisEvent_19::AxisValue' has a wrong offset!");

// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C. Backward_K2Node_InputAxisEvent_14
// 0x0004 (0x0004 - 0x0000)
struct BP_ThirdPersonCharacter_C__Backward_K2Node_InputAxisEvent_14 final
{
public:
	float                                         AxisValue;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThirdPersonCharacter_C__Backward_K2Node_InputAxisEvent_14) == 0x000004, "Wrong alignment on BP_ThirdPersonCharacter_C__Backward_K2Node_InputAxisEvent_14");
static_assert(sizeof(BP_ThirdPersonCharacter_C__Backward_K2Node_InputAxisEvent_14) == 0x000004, "Wrong size on BP_ThirdPersonCharacter_C__Backward_K2Node_InputAxisEvent_14");
static_assert(offsetof(BP_ThirdPersonCharacter_C__Backward_K2Node_InputAxisEvent_14, AxisValue) == 0x000000, "Member 'BP_ThirdPersonCharacter_C__Backward_K2Node_InputAxisEvent_14::AxisValue' has a wrong offset!");

// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C. Down Mouse_K2Node_InputAxisEvent_17
// 0x0004 (0x0004 - 0x0000)
struct BP_ThirdPersonCharacter_C__Down_Mouse_K2Node_InputAxisEvent_17 final
{
public:
	float                                         AxisValue;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThirdPersonCharacter_C__Down_Mouse_K2Node_InputAxisEvent_17) == 0x000004, "Wrong alignment on BP_ThirdPersonCharacter_C__Down_Mouse_K2Node_InputAxisEvent_17");
static_assert(sizeof(BP_ThirdPersonCharacter_C__Down_Mouse_K2Node_InputAxisEvent_17) == 0x000004, "Wrong size on BP_ThirdPersonCharacter_C__Down_Mouse_K2Node_InputAxisEvent_17");
static_assert(offsetof(BP_ThirdPersonCharacter_C__Down_Mouse_K2Node_InputAxisEvent_17, AxisValue) == 0x000000, "Member 'BP_ThirdPersonCharacter_C__Down_Mouse_K2Node_InputAxisEvent_17::AxisValue' has a wrong offset!");

// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C. Down Gamepad_K2Node_InputAxisEvent_18
// 0x0004 (0x0004 - 0x0000)
struct BP_ThirdPersonCharacter_C__Down_Gamepad_K2Node_InputAxisEvent_18 final
{
public:
	float                                         AxisValue;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThirdPersonCharacter_C__Down_Gamepad_K2Node_InputAxisEvent_18) == 0x000004, "Wrong alignment on BP_ThirdPersonCharacter_C__Down_Gamepad_K2Node_InputAxisEvent_18");
static_assert(sizeof(BP_ThirdPersonCharacter_C__Down_Gamepad_K2Node_InputAxisEvent_18) == 0x000004, "Wrong size on BP_ThirdPersonCharacter_C__Down_Gamepad_K2Node_InputAxisEvent_18");
static_assert(offsetof(BP_ThirdPersonCharacter_C__Down_Gamepad_K2Node_InputAxisEvent_18, AxisValue) == 0x000000, "Member 'BP_ThirdPersonCharacter_C__Down_Gamepad_K2Node_InputAxisEvent_18::AxisValue' has a wrong offset!");

// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_1
// 0x0018 (0x0018 - 0x0000)
struct BP_ThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_1 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_1) == 0x000008, "Wrong alignment on BP_ThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_1");
static_assert(sizeof(BP_ThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_1) == 0x000018, "Wrong size on BP_ThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_1");
static_assert(offsetof(BP_ThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_1, Key) == 0x000000, "Member 'BP_ThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_1::Key' has a wrong offset!");

// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_0
// 0x0018 (0x0018 - 0x0000)
struct BP_ThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_0 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_0) == 0x000008, "Wrong alignment on BP_ThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_0");
static_assert(sizeof(BP_ThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_0) == 0x000018, "Wrong size on BP_ThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_0");
static_assert(offsetof(BP_ThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_0, Key) == 0x000000, "Member 'BP_ThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_0::Key' has a wrong offset!");

// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C.ExecuteUbergraph_BP_ThirdPersonCharacter
// 0x01D0 (0x01D0 - 0x0000)
struct BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETouchIndex                                   K2Node_InputTouchEvent_FingerIndex;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_InputTouchEvent_Location;                   // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETouchIndex                                   Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Temp_struct_Variable;                              // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   K2Node_InputActionEvent_Key_1;                     // 0x0040(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputActionEvent_Key;                       // 0x0058(0x0018)(HasGetValueTypeHash)
	struct FKey                                   Temp_struct_Variable_1;                            // 0x0070(0x0018)(HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue;           // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue_1;         // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_InputAxisEvent_AxisValue_5;                 // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_InputAxisEvent_AxisValue_4;                 // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetRightVector_ReturnValue;               // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETouchIndex                                   K2Node_InputTouchEvent_FingerIndex_1;              // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_InputTouchEvent_Location_1;                 // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_InputAxisEvent_AxisValue_3;                 // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_FloatToDouble_ReturnValue;           // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_InputAxisEvent_AxisValue_2;                 // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_InputAxisEvent_AxisValue_1;                 // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18C[0x4];                                      // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_FloatToDouble_ReturnValue_1;         // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_InputAxisEvent_AxisValue;                   // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A4[0x4];                                      // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_WideningCast;     // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_AddControllerYawInput_Val_NarrowingCast;  // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BC[0x4];                                      // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_WideningCast_1;   // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_AddControllerPitchInput_Val_NarrowingCast; // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter) == 0x000008, "Wrong alignment on BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter");
static_assert(sizeof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter) == 0x0001D0, "Wrong size on BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, EntryPoint) == 0x000000, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, K2Node_InputTouchEvent_FingerIndex) == 0x000004, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::K2Node_InputTouchEvent_FingerIndex' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, K2Node_InputTouchEvent_Location) == 0x000008, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::K2Node_InputTouchEvent_Location' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, Temp_byte_Variable) == 0x000020, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, Temp_struct_Variable) == 0x000028, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, K2Node_InputActionEvent_Key_1) == 0x000040, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::K2Node_InputActionEvent_Key_1' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, K2Node_InputActionEvent_Key) == 0x000058, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::K2Node_InputActionEvent_Key' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, Temp_struct_Variable_1) == 0x000070, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_GetControlRotation_ReturnValue) == 0x000088, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_GetControlRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_BreakRotator_Roll) == 0x0000A0, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_BreakRotator_Pitch) == 0x0000A4, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_BreakRotator_Yaw) == 0x0000A8, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_MakeRotator_ReturnValue) == 0x0000B0, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_GetForwardVector_ReturnValue) == 0x0000C8, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_GetControlRotation_ReturnValue_1) == 0x0000E0, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_GetControlRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, K2Node_InputAxisEvent_AxisValue_5) == 0x0000F8, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::K2Node_InputAxisEvent_AxisValue_5' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_BreakRotator_Roll_1) == 0x0000FC, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_BreakRotator_Pitch_1) == 0x000100, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_BreakRotator_Yaw_1) == 0x000104, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_MakeRotator_ReturnValue_1) == 0x000108, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, K2Node_InputAxisEvent_AxisValue_4) == 0x000120, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::K2Node_InputAxisEvent_AxisValue_4' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_GetRightVector_ReturnValue) == 0x000128, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_GetRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, K2Node_InputTouchEvent_FingerIndex_1) == 0x000140, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::K2Node_InputTouchEvent_FingerIndex_1' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, K2Node_InputTouchEvent_Location_1) == 0x000148, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::K2Node_InputTouchEvent_Location_1' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000160, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000168, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, K2Node_InputAxisEvent_AxisValue_3) == 0x00016C, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::K2Node_InputAxisEvent_AxisValue_3' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_Conv_FloatToDouble_ReturnValue) == 0x000170, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_Conv_FloatToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000178, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, K2Node_InputAxisEvent_AxisValue_2) == 0x000180, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::K2Node_InputAxisEvent_AxisValue_2' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, K2Node_InputAxisEvent_AxisValue_1) == 0x000184, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::K2Node_InputAxisEvent_AxisValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_GetWorldDeltaSeconds_ReturnValue_1) == 0x000188, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_GetWorldDeltaSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000190, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_Conv_FloatToDouble_ReturnValue_1) == 0x000198, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_Conv_FloatToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, K2Node_InputAxisEvent_AxisValue) == 0x0001A0, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::K2Node_InputAxisEvent_AxisValue' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x0001A8, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_Multiply_DoubleDouble_A_WideningCast) == 0x0001B0, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_Multiply_DoubleDouble_A_WideningCast' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_AddControllerYawInput_Val_NarrowingCast) == 0x0001B8, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_AddControllerYawInput_Val_NarrowingCast' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_Multiply_DoubleDouble_A_WideningCast_1) == 0x0001C0, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_Multiply_DoubleDouble_A_WideningCast_1' has a wrong offset!");
static_assert(offsetof(BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter, CallFunc_AddControllerPitchInput_Val_NarrowingCast) == 0x0001C8, "Member 'BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter::CallFunc_AddControllerPitchInput_Val_NarrowingCast' has a wrong offset!");

}

