﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cannon_Reload

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Cannon_Reload.Cannon_Reload_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct Cannon_Reload_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Cannon_Reload_C_Tick) == 0x000008, "Wrong alignment on Cannon_Reload_C_Tick");
static_assert(sizeof(Cannon_Reload_C_Tick) == 0x000048, "Wrong size on Cannon_Reload_C_Tick");
static_assert(offsetof(Cannon_Reload_C_Tick, MyGeometry) == 0x000000, "Member 'Cannon_Reload_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(Cannon_Reload_C_Tick, InDeltaTime) == 0x000040, "Member 'Cannon_Reload_C_Tick::InDeltaTime' has a wrong offset!");

// Function Cannon_Reload.Cannon_Reload_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Cannon_Reload_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Cannon_Reload_C_PreConstruct) == 0x000001, "Wrong alignment on Cannon_Reload_C_PreConstruct");
static_assert(sizeof(Cannon_Reload_C_PreConstruct) == 0x000001, "Wrong size on Cannon_Reload_C_PreConstruct");
static_assert(offsetof(Cannon_Reload_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Cannon_Reload_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Cannon_Reload.Cannon_Reload_C.ExecuteUbergraph_Cannon_Reload
// 0x0068 (0x0068 - 0x0000)
struct Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACannon_C*                              K2Node_DynamicCast_AsCannon;                       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload) == 0x000008, "Wrong alignment on Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload");
static_assert(sizeof(Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload) == 0x000068, "Wrong size on Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload");
static_assert(offsetof(Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload, EntryPoint) == 0x000000, "Member 'Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload::EntryPoint' has a wrong offset!");
static_assert(offsetof(Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload, K2Node_Event_IsDesignTime) == 0x000004, "Member 'Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload, K2Node_Event_MyGeometry) == 0x000008, "Member 'Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload, K2Node_Event_InDeltaTime) == 0x000048, "Member 'Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload, CallFunc_GetPlayerPawn_ReturnValue) == 0x000050, "Member 'Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload, K2Node_DynamicCast_AsCannon) == 0x000058, "Member 'Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload::K2Node_DynamicCast_AsCannon' has a wrong offset!");
static_assert(offsetof(Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000061, "Member 'Cannon_Reload_C_ExecuteUbergraph_Cannon_Reload::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");

}

