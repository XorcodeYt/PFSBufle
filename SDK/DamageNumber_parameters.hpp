﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DamageNumber

#include "Basic.hpp"


namespace SDK::Params
{

// Function DamageNumber.DamageNumber_C.GetText_0
// 0x0030 (0x0030 - 0x0000)
struct DamageNumber_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(DamageNumber_C_GetText_0) == 0x000008, "Wrong alignment on DamageNumber_C_GetText_0");
static_assert(sizeof(DamageNumber_C_GetText_0) == 0x000030, "Wrong size on DamageNumber_C_GetText_0");
static_assert(offsetof(DamageNumber_C_GetText_0, ReturnValue) == 0x000000, "Member 'DamageNumber_C_GetText_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageNumber_C_GetText_0, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000018, "Member 'DamageNumber_C_GetText_0::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");

// Function DamageNumber.DamageNumber_C.ExecuteUbergraph_DamageNumber
// 0x0010 (0x0010 - 0x0000)
struct DamageNumber_C_ExecuteUbergraph_DamageNumber final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DamageNumber_C_ExecuteUbergraph_DamageNumber) == 0x000008, "Wrong alignment on DamageNumber_C_ExecuteUbergraph_DamageNumber");
static_assert(sizeof(DamageNumber_C_ExecuteUbergraph_DamageNumber) == 0x000010, "Wrong size on DamageNumber_C_ExecuteUbergraph_DamageNumber");
static_assert(offsetof(DamageNumber_C_ExecuteUbergraph_DamageNumber, EntryPoint) == 0x000000, "Member 'DamageNumber_C_ExecuteUbergraph_DamageNumber::EntryPoint' has a wrong offset!");
static_assert(offsetof(DamageNumber_C_ExecuteUbergraph_DamageNumber, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'DamageNumber_C_ExecuteUbergraph_DamageNumber::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

