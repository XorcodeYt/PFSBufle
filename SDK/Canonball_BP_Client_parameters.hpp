﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Canonball_BP_Client

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Canonball_BP_Client.Canonball_BP_Client_C.ReceiveHit
// 0x0150 (0x0150 - 0x0000)
struct Canonball_BP_Client_C_ReceiveHit final
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
static_assert(alignof(Canonball_BP_Client_C_ReceiveHit) == 0x000008, "Wrong alignment on Canonball_BP_Client_C_ReceiveHit");
static_assert(sizeof(Canonball_BP_Client_C_ReceiveHit) == 0x000150, "Wrong size on Canonball_BP_Client_C_ReceiveHit");
static_assert(offsetof(Canonball_BP_Client_C_ReceiveHit, MyComp) == 0x000000, "Member 'Canonball_BP_Client_C_ReceiveHit::MyComp' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ReceiveHit, Other) == 0x000008, "Member 'Canonball_BP_Client_C_ReceiveHit::Other' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ReceiveHit, OtherComp) == 0x000010, "Member 'Canonball_BP_Client_C_ReceiveHit::OtherComp' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ReceiveHit, bSelfMoved) == 0x000018, "Member 'Canonball_BP_Client_C_ReceiveHit::bSelfMoved' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ReceiveHit, HitLocation) == 0x000020, "Member 'Canonball_BP_Client_C_ReceiveHit::HitLocation' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ReceiveHit, HitNormal) == 0x000038, "Member 'Canonball_BP_Client_C_ReceiveHit::HitNormal' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ReceiveHit, NormalImpulse) == 0x000050, "Member 'Canonball_BP_Client_C_ReceiveHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ReceiveHit, Hit) == 0x000068, "Member 'Canonball_BP_Client_C_ReceiveHit::Hit' has a wrong offset!");

// Function Canonball_BP_Client.Canonball_BP_Client_C.ExecuteUbergraph_Canonball_BP_Client
// 0x01A8 (0x01A8 - 0x0000)
struct Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATrainGusPlayer_C*                      K2Node_DynamicCast_AsTrain_Gus_Player;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_DamagedActor;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_DamageCauser;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ApplyDamage_ReturnValue;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerControllerBP_C*                  K2Node_DynamicCast_AsPlayer_Controller_BP;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_Event_MyComp;                               // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_Other;                                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bSelfMoved;                           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_HitLocation;                          // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_HitNormal;                            // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_NormalImpulse;                        // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x00B0(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class ATrainGusPlayer_C*                      K2Node_DynamicCast_AsTrain_Gus_Player_1;           // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client) == 0x000008, "Wrong alignment on Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client");
static_assert(sizeof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client) == 0x0001A8, "Wrong size on Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client");
static_assert(offsetof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client, EntryPoint) == 0x000000, "Member 'Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client::EntryPoint' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client, K2Node_DynamicCast_AsTrain_Gus_Player) == 0x000010, "Member 'Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client::K2Node_DynamicCast_AsTrain_Gus_Player' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client, K2Node_CustomEvent_DamagedActor) == 0x000020, "Member 'Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client::K2Node_CustomEvent_DamagedActor' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client, K2Node_CustomEvent_DamageCauser) == 0x000028, "Member 'Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client::K2Node_CustomEvent_DamageCauser' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client, CallFunc_ApplyDamage_ReturnValue) == 0x000030, "Member 'Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client::CallFunc_ApplyDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client, K2Node_DynamicCast_AsPlayer_Controller_BP) == 0x000038, "Member 'Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client::K2Node_DynamicCast_AsPlayer_Controller_BP' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client, K2Node_Event_MyComp) == 0x000048, "Member 'Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client::K2Node_Event_MyComp' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client, K2Node_Event_Other) == 0x000050, "Member 'Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client, K2Node_Event_OtherComp) == 0x000058, "Member 'Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client, K2Node_Event_bSelfMoved) == 0x000060, "Member 'Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client::K2Node_Event_bSelfMoved' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client, K2Node_Event_HitLocation) == 0x000068, "Member 'Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client, K2Node_Event_HitNormal) == 0x000080, "Member 'Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client::K2Node_Event_HitNormal' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client, K2Node_Event_NormalImpulse) == 0x000098, "Member 'Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client::K2Node_Event_NormalImpulse' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client, K2Node_Event_Hit) == 0x0000B0, "Member 'Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client, K2Node_DynamicCast_AsTrain_Gus_Player_1) == 0x000198, "Member 'Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client::K2Node_DynamicCast_AsTrain_Gus_Player_1' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client, K2Node_DynamicCast_bSuccess_2) == 0x0001A0, "Member 'Canonball_BP_Client_C_ExecuteUbergraph_Canonball_BP_Client::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function Canonball_BP_Client.Canonball_BP_Client_C.Apply Damage on Server
// 0x0010 (0x0010 - 0x0000)
struct Canonball_BP_Client_C_Apply_Damage_on_Server final
{
public:
	class AActor*                                 DamagedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Canonball_BP_Client_C_Apply_Damage_on_Server) == 0x000008, "Wrong alignment on Canonball_BP_Client_C_Apply_Damage_on_Server");
static_assert(sizeof(Canonball_BP_Client_C_Apply_Damage_on_Server) == 0x000010, "Wrong size on Canonball_BP_Client_C_Apply_Damage_on_Server");
static_assert(offsetof(Canonball_BP_Client_C_Apply_Damage_on_Server, DamagedActor) == 0x000000, "Member 'Canonball_BP_Client_C_Apply_Damage_on_Server::DamagedActor' has a wrong offset!");
static_assert(offsetof(Canonball_BP_Client_C_Apply_Damage_on_Server, DamageCauser) == 0x000008, "Member 'Canonball_BP_Client_C_Apply_Damage_on_Server::DamageCauser' has a wrong offset!");

}

