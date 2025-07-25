﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CannonFront_widget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CannonFront_widget.CannonFront_widget_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct CannonFront_widget_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CannonFront_widget_C_Tick) == 0x000008, "Wrong alignment on CannonFront_widget_C_Tick");
static_assert(sizeof(CannonFront_widget_C_Tick) == 0x000048, "Wrong size on CannonFront_widget_C_Tick");
static_assert(offsetof(CannonFront_widget_C_Tick, MyGeometry) == 0x000000, "Member 'CannonFront_widget_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(CannonFront_widget_C_Tick, InDeltaTime) == 0x000040, "Member 'CannonFront_widget_C_Tick::InDeltaTime' has a wrong offset!");

// Function CannonFront_widget.CannonFront_widget_C.Get Interact key
// 0x0070 (0x0070 - 0x0000)
struct CannonFront_widget_C_Get_Interact_key final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class UInputSettings*                         CallFunc_GetInputSettings_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>         CallFunc_GetActionMappingByName_OutMappings;       // 0x0020(0x0010)(ReferenceParm)
	struct FInputActionKeyMapping                 CallFunc_Array_Get_Item;                           // 0x0030(0x0028)()
	class FText                                   CallFunc_Key_GetDisplayName_ReturnValue;           // 0x0058(0x0018)()
};
static_assert(alignof(CannonFront_widget_C_Get_Interact_key) == 0x000008, "Wrong alignment on CannonFront_widget_C_Get_Interact_key");
static_assert(sizeof(CannonFront_widget_C_Get_Interact_key) == 0x000070, "Wrong size on CannonFront_widget_C_Get_Interact_key");
static_assert(offsetof(CannonFront_widget_C_Get_Interact_key, ReturnValue) == 0x000000, "Member 'CannonFront_widget_C_Get_Interact_key::ReturnValue' has a wrong offset!");
static_assert(offsetof(CannonFront_widget_C_Get_Interact_key, CallFunc_GetInputSettings_ReturnValue) == 0x000018, "Member 'CannonFront_widget_C_Get_Interact_key::CallFunc_GetInputSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(CannonFront_widget_C_Get_Interact_key, CallFunc_GetActionMappingByName_OutMappings) == 0x000020, "Member 'CannonFront_widget_C_Get_Interact_key::CallFunc_GetActionMappingByName_OutMappings' has a wrong offset!");
static_assert(offsetof(CannonFront_widget_C_Get_Interact_key, CallFunc_Array_Get_Item) == 0x000030, "Member 'CannonFront_widget_C_Get_Interact_key::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CannonFront_widget_C_Get_Interact_key, CallFunc_Key_GetDisplayName_ReturnValue) == 0x000058, "Member 'CannonFront_widget_C_Get_Interact_key::CallFunc_Key_GetDisplayName_ReturnValue' has a wrong offset!");

// Function CannonFront_widget.CannonFront_widget_C.ExecuteUbergraph_CannonFront_widget
// 0x0068 (0x0068 - 0x0000)
struct CannonFront_widget_C_ExecuteUbergraph_CannonFront_widget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATrainGusPlayer_C*                      K2Node_DynamicCast_AsTrain_Gus_Player;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CannonFront_widget_C_ExecuteUbergraph_CannonFront_widget) == 0x000008, "Wrong alignment on CannonFront_widget_C_ExecuteUbergraph_CannonFront_widget");
static_assert(sizeof(CannonFront_widget_C_ExecuteUbergraph_CannonFront_widget) == 0x000068, "Wrong size on CannonFront_widget_C_ExecuteUbergraph_CannonFront_widget");
static_assert(offsetof(CannonFront_widget_C_ExecuteUbergraph_CannonFront_widget, EntryPoint) == 0x000000, "Member 'CannonFront_widget_C_ExecuteUbergraph_CannonFront_widget::EntryPoint' has a wrong offset!");
static_assert(offsetof(CannonFront_widget_C_ExecuteUbergraph_CannonFront_widget, K2Node_Event_MyGeometry) == 0x000008, "Member 'CannonFront_widget_C_ExecuteUbergraph_CannonFront_widget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(CannonFront_widget_C_ExecuteUbergraph_CannonFront_widget, K2Node_Event_InDeltaTime) == 0x000048, "Member 'CannonFront_widget_C_ExecuteUbergraph_CannonFront_widget::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(CannonFront_widget_C_ExecuteUbergraph_CannonFront_widget, CallFunc_GetPlayerPawn_ReturnValue) == 0x000050, "Member 'CannonFront_widget_C_ExecuteUbergraph_CannonFront_widget::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(CannonFront_widget_C_ExecuteUbergraph_CannonFront_widget, K2Node_DynamicCast_AsTrain_Gus_Player) == 0x000058, "Member 'CannonFront_widget_C_ExecuteUbergraph_CannonFront_widget::K2Node_DynamicCast_AsTrain_Gus_Player' has a wrong offset!");
static_assert(offsetof(CannonFront_widget_C_ExecuteUbergraph_CannonFront_widget, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'CannonFront_widget_C_ExecuteUbergraph_CannonFront_widget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CannonFront_widget_C_ExecuteUbergraph_CannonFront_widget, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000061, "Member 'CannonFront_widget_C_ExecuteUbergraph_CannonFront_widget::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");

}

