﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ThirdPersonCharacter

#include "Basic.hpp"

#include "BP_ThirdPersonCharacter_classes.hpp"
#include "BP_ThirdPersonCharacter_parameters.hpp"


namespace SDK
{

// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C.InpTchEvt_Released
// (BlueprintEvent)
// Parameters:
// ETouchIndex                             FingerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThirdPersonCharacter_C::InpTchEvt_Released(ETouchIndex FingerIndex, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThirdPersonCharacter_C", "InpTchEvt_Released");

	Params::BP_ThirdPersonCharacter_C_InpTchEvt_Released Parms{};

	Parms.FingerIndex = FingerIndex;
	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C.InpTchEvt_Pressed
// (BlueprintEvent)
// Parameters:
// ETouchIndex                             FingerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThirdPersonCharacter_C::InpTchEvt_Pressed(ETouchIndex FingerIndex, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThirdPersonCharacter_C", "InpTchEvt_Pressed");

	Params::BP_ThirdPersonCharacter_C_InpTchEvt_Pressed Parms{};

	Parms.FingerIndex = FingerIndex;
	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C. Left Mouse_K2Node_InputAxisEvent_16
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThirdPersonCharacter_C::_Left_Mouse_K2Node_InputAxisEvent_16(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThirdPersonCharacter_C", " Left Mouse_K2Node_InputAxisEvent_16");

	Params::BP_ThirdPersonCharacter_C__Left_Mouse_K2Node_InputAxisEvent_16 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C. Left Gamepad_K2Node_InputAxisEvent_15
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThirdPersonCharacter_C::_Left_Gamepad_K2Node_InputAxisEvent_15(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThirdPersonCharacter_C", " Left Gamepad_K2Node_InputAxisEvent_15");

	Params::BP_ThirdPersonCharacter_C__Left_Gamepad_K2Node_InputAxisEvent_15 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C. Left_K2Node_InputAxisEvent_19
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThirdPersonCharacter_C::_Left_K2Node_InputAxisEvent_19(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThirdPersonCharacter_C", " Left_K2Node_InputAxisEvent_19");

	Params::BP_ThirdPersonCharacter_C__Left_K2Node_InputAxisEvent_19 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C. Backward_K2Node_InputAxisEvent_14
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThirdPersonCharacter_C::_Backward_K2Node_InputAxisEvent_14(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThirdPersonCharacter_C", " Backward_K2Node_InputAxisEvent_14");

	Params::BP_ThirdPersonCharacter_C__Backward_K2Node_InputAxisEvent_14 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C. Down Mouse_K2Node_InputAxisEvent_17
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThirdPersonCharacter_C::_Down_Mouse_K2Node_InputAxisEvent_17(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThirdPersonCharacter_C", " Down Mouse_K2Node_InputAxisEvent_17");

	Params::BP_ThirdPersonCharacter_C__Down_Mouse_K2Node_InputAxisEvent_17 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C. Down Gamepad_K2Node_InputAxisEvent_18
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThirdPersonCharacter_C::_Down_Gamepad_K2Node_InputAxisEvent_18(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThirdPersonCharacter_C", " Down Gamepad_K2Node_InputAxisEvent_18");

	Params::BP_ThirdPersonCharacter_C__Down_Gamepad_K2Node_InputAxisEvent_18 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_ThirdPersonCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThirdPersonCharacter_C", "InpActEvt_Jump_K2Node_InputActionEvent_1");

	Params::BP_ThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_ThirdPersonCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThirdPersonCharacter_C", "InpActEvt_Jump_K2Node_InputActionEvent_0");

	Params::BP_ThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C.ExecuteUbergraph_BP_ThirdPersonCharacter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThirdPersonCharacter_C::ExecuteUbergraph_BP_ThirdPersonCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThirdPersonCharacter_C", "ExecuteUbergraph_BP_ThirdPersonCharacter");

	Params::BP_ThirdPersonCharacter_C_ExecuteUbergraph_BP_ThirdPersonCharacter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

