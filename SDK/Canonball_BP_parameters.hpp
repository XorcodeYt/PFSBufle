﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Canonball_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Canonball_BP.Canonball_BP_C.ReceiveHit
// 0x0150 (0x0150 - 0x0000)
struct Canonball_BP_C_ReceiveHit final
{
public:
	class UPrimitiveComponent*                    MyComp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Other;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelfMoved;                                        // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitLocation;                                       // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0038(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0050(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0068(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Canonball_BP_C_ReceiveHit) == 0x000008, "Wrong alignment on Canonball_BP_C_ReceiveHit");
static_assert(sizeof(Canonball_BP_C_ReceiveHit) == 0x000150, "Wrong size on Canonball_BP_C_ReceiveHit");
static_assert(offsetof(Canonball_BP_C_ReceiveHit, MyComp) == 0x000000, "Member 'Canonball_BP_C_ReceiveHit::MyComp' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ReceiveHit, Other) == 0x000008, "Member 'Canonball_BP_C_ReceiveHit::Other' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ReceiveHit, OtherComp) == 0x000010, "Member 'Canonball_BP_C_ReceiveHit::OtherComp' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ReceiveHit, bSelfMoved) == 0x000018, "Member 'Canonball_BP_C_ReceiveHit::bSelfMoved' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ReceiveHit, HitLocation) == 0x000020, "Member 'Canonball_BP_C_ReceiveHit::HitLocation' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ReceiveHit, HitNormal) == 0x000038, "Member 'Canonball_BP_C_ReceiveHit::HitNormal' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ReceiveHit, NormalImpulse) == 0x000050, "Member 'Canonball_BP_C_ReceiveHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ReceiveHit, Hit) == 0x000068, "Member 'Canonball_BP_C_ReceiveHit::Hit' has a wrong offset!");

// Function Canonball_BP.Canonball_BP_C.ExecuteUbergraph_Canonball_BP
// 0x0200 (0x0200 - 0x0000)
struct Canonball_BP_C_ExecuteUbergraph_Canonball_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_Event_MyComp;                               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_Other;                                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bSelfMoved;                           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_HitLocation;                          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_HitNormal;                            // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_NormalImpulse;                        // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0070(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UDecalComponent*                        CallFunc_SpawnDecalAtLocation_ReturnValue;         // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_178[0x8];                                      // 0x0178(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0180(0x0060)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E1[0x7];                                      // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACannonballAOE_C*                       CallFunc_FinishSpawningActor_ReturnValue;          // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Canonball_BP_C_ExecuteUbergraph_Canonball_BP) == 0x000010, "Wrong alignment on Canonball_BP_C_ExecuteUbergraph_Canonball_BP");
static_assert(sizeof(Canonball_BP_C_ExecuteUbergraph_Canonball_BP) == 0x000200, "Wrong size on Canonball_BP_C_ExecuteUbergraph_Canonball_BP");
static_assert(offsetof(Canonball_BP_C_ExecuteUbergraph_Canonball_BP, EntryPoint) == 0x000000, "Member 'Canonball_BP_C_ExecuteUbergraph_Canonball_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ExecuteUbergraph_Canonball_BP, K2Node_Event_MyComp) == 0x000008, "Member 'Canonball_BP_C_ExecuteUbergraph_Canonball_BP::K2Node_Event_MyComp' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ExecuteUbergraph_Canonball_BP, K2Node_Event_Other) == 0x000010, "Member 'Canonball_BP_C_ExecuteUbergraph_Canonball_BP::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ExecuteUbergraph_Canonball_BP, K2Node_Event_OtherComp) == 0x000018, "Member 'Canonball_BP_C_ExecuteUbergraph_Canonball_BP::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ExecuteUbergraph_Canonball_BP, K2Node_Event_bSelfMoved) == 0x000020, "Member 'Canonball_BP_C_ExecuteUbergraph_Canonball_BP::K2Node_Event_bSelfMoved' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ExecuteUbergraph_Canonball_BP, K2Node_Event_HitLocation) == 0x000028, "Member 'Canonball_BP_C_ExecuteUbergraph_Canonball_BP::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ExecuteUbergraph_Canonball_BP, K2Node_Event_HitNormal) == 0x000040, "Member 'Canonball_BP_C_ExecuteUbergraph_Canonball_BP::K2Node_Event_HitNormal' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ExecuteUbergraph_Canonball_BP, K2Node_Event_NormalImpulse) == 0x000058, "Member 'Canonball_BP_C_ExecuteUbergraph_Canonball_BP::K2Node_Event_NormalImpulse' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ExecuteUbergraph_Canonball_BP, K2Node_Event_Hit) == 0x000070, "Member 'Canonball_BP_C_ExecuteUbergraph_Canonball_BP::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ExecuteUbergraph_Canonball_BP, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000158, "Member 'Canonball_BP_C_ExecuteUbergraph_Canonball_BP::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ExecuteUbergraph_Canonball_BP, CallFunc_SpawnDecalAtLocation_ReturnValue) == 0x000170, "Member 'Canonball_BP_C_ExecuteUbergraph_Canonball_BP::CallFunc_SpawnDecalAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ExecuteUbergraph_Canonball_BP, CallFunc_MakeTransform_ReturnValue) == 0x000180, "Member 'Canonball_BP_C_ExecuteUbergraph_Canonball_BP::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ExecuteUbergraph_Canonball_BP, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0001E0, "Member 'Canonball_BP_C_ExecuteUbergraph_Canonball_BP::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ExecuteUbergraph_Canonball_BP, CallFunc_GetOwner_ReturnValue) == 0x0001E8, "Member 'Canonball_BP_C_ExecuteUbergraph_Canonball_BP::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ExecuteUbergraph_Canonball_BP, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0001F0, "Member 'Canonball_BP_C_ExecuteUbergraph_Canonball_BP::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Canonball_BP_C_ExecuteUbergraph_Canonball_BP, CallFunc_FinishSpawningActor_ReturnValue) == 0x0001F8, "Member 'Canonball_BP_C_ExecuteUbergraph_Canonball_BP::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

