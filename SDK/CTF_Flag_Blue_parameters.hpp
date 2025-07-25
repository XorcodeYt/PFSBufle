﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CTF_Flag_Blue

#include "Basic.hpp"


namespace SDK::Params
{

// Function CTF_Flag_Blue.CTF_Flag_Blue_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct CTF_Flag_Blue_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CTF_Flag_Blue_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on CTF_Flag_Blue_C_ReceiveActorBeginOverlap");
static_assert(sizeof(CTF_Flag_Blue_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on CTF_Flag_Blue_C_ReceiveActorBeginOverlap");
static_assert(offsetof(CTF_Flag_Blue_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'CTF_Flag_Blue_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function CTF_Flag_Blue.CTF_Flag_Blue_C.ExecuteUbergraph_CTF_Flag_Blue
// 0x0030 (0x0030 - 0x0000)
struct CTF_Flag_Blue_C_ExecuteUbergraph_CTF_Flag_Blue final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATrainGusPlayer_C*                      K2Node_DynamicCast_AsTrain_Gus_Player;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATrainGusPlayer_C*                      K2Node_DynamicCast_AsTrain_Gus_Player_1;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CTF_Flag_Blue_C_ExecuteUbergraph_CTF_Flag_Blue) == 0x000008, "Wrong alignment on CTF_Flag_Blue_C_ExecuteUbergraph_CTF_Flag_Blue");
static_assert(sizeof(CTF_Flag_Blue_C_ExecuteUbergraph_CTF_Flag_Blue) == 0x000030, "Wrong size on CTF_Flag_Blue_C_ExecuteUbergraph_CTF_Flag_Blue");
static_assert(offsetof(CTF_Flag_Blue_C_ExecuteUbergraph_CTF_Flag_Blue, EntryPoint) == 0x000000, "Member 'CTF_Flag_Blue_C_ExecuteUbergraph_CTF_Flag_Blue::EntryPoint' has a wrong offset!");
static_assert(offsetof(CTF_Flag_Blue_C_ExecuteUbergraph_CTF_Flag_Blue, K2Node_Event_OtherActor) == 0x000008, "Member 'CTF_Flag_Blue_C_ExecuteUbergraph_CTF_Flag_Blue::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(CTF_Flag_Blue_C_ExecuteUbergraph_CTF_Flag_Blue, K2Node_DynamicCast_AsTrain_Gus_Player) == 0x000010, "Member 'CTF_Flag_Blue_C_ExecuteUbergraph_CTF_Flag_Blue::K2Node_DynamicCast_AsTrain_Gus_Player' has a wrong offset!");
static_assert(offsetof(CTF_Flag_Blue_C_ExecuteUbergraph_CTF_Flag_Blue, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CTF_Flag_Blue_C_ExecuteUbergraph_CTF_Flag_Blue::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CTF_Flag_Blue_C_ExecuteUbergraph_CTF_Flag_Blue, K2Node_DynamicCast_AsTrain_Gus_Player_1) == 0x000020, "Member 'CTF_Flag_Blue_C_ExecuteUbergraph_CTF_Flag_Blue::K2Node_DynamicCast_AsTrain_Gus_Player_1' has a wrong offset!");
static_assert(offsetof(CTF_Flag_Blue_C_ExecuteUbergraph_CTF_Flag_Blue, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'CTF_Flag_Blue_C_ExecuteUbergraph_CTF_Flag_Blue::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CTF_Flag_Blue_C_ExecuteUbergraph_CTF_Flag_Blue, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000029, "Member 'CTF_Flag_Blue_C_ExecuteUbergraph_CTF_Flag_Blue::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

