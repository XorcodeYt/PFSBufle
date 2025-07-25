﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpawnMenu_The_Spire

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function SpawnMenu_The_Spire.SpawnMenu_The_Spire_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct SpawnMenu_The_Spire_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpawnMenu_The_Spire_C_Tick) == 0x000008, "Wrong alignment on SpawnMenu_The_Spire_C_Tick");
static_assert(sizeof(SpawnMenu_The_Spire_C_Tick) == 0x000048, "Wrong size on SpawnMenu_The_Spire_C_Tick");
static_assert(offsetof(SpawnMenu_The_Spire_C_Tick, MyGeometry) == 0x000000, "Member 'SpawnMenu_The_Spire_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_Tick, InDeltaTime) == 0x000040, "Member 'SpawnMenu_The_Spire_C_Tick::InDeltaTime' has a wrong offset!");

// Function SpawnMenu_The_Spire.SpawnMenu_The_Spire_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_0
// 0x0018 (0x0018 - 0x0000)
struct SpawnMenu_The_Spire_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_0 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(SpawnMenu_The_Spire_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_0) == 0x000008, "Wrong alignment on SpawnMenu_The_Spire_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_0");
static_assert(sizeof(SpawnMenu_The_Spire_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_0) == 0x000018, "Wrong size on SpawnMenu_The_Spire_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_0");
static_assert(offsetof(SpawnMenu_The_Spire_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_0, Key) == 0x000000, "Member 'SpawnMenu_The_Spire_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_0::Key' has a wrong offset!");

// Function SpawnMenu_The_Spire.SpawnMenu_The_Spire_C.ExecuteUbergraph_SpawnMenu_The_Spire
// 0x01E0 (0x01E0 - 0x0000)
struct SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBP_C*                         K2Node_DynamicCast_AsGame_State_BP;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key;                          // 0x0020(0x0018)(HasGetValueTypeHash)
	class APlayerState*                           CallFunc_GetPlayerState_ReturnValue;               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerControllerBP_C*                  K2Node_DynamicCast_AsPlayer_Controller_BP;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerControllerBP_C*                  K2Node_DynamicCast_AsPlayer_Controller_BP_1;       // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATrainGusPlayer_C*                      K2Node_DynamicCast_AsTrain_Gus_Player;             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue_1;              // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStarterSpectate2_C*                    K2Node_DynamicCast_AsStarter_Spectate_2;           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ADeadSpectate_C*                        K2Node_DynamicCast_AsDead_Spectate;                // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue_2;              // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStarterSpectate2_C*                    K2Node_DynamicCast_AsStarter_Spectate_2_1;         // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADeadSpectate_C*                        K2Node_DynamicCast_AsDead_Spectate_1;              // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0118(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerControllerBP_C*                  K2Node_DynamicCast_AsPlayer_Controller_BP_2;       // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Select_Default;                             // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesSaveGameExist_ReturnValue;            // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USaveGame*                              CallFunc_LoadGameFromSlot_ReturnValue;             // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USaveItems_C*                           K2Node_DynamicCast_AsSave_Items;                   // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_9;                     // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesSaveGameExist_ReturnValue_1;          // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B2[0x6];                                      // 0x01B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USaveGame*                              CallFunc_LoadGameFromSlot_ReturnValue_1;           // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USaveItems_C*                           K2Node_DynamicCast_AsSave_Items_1;                 // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_10;                    // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire) == 0x000008, "Wrong alignment on SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire");
static_assert(sizeof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire) == 0x0001E0, "Wrong size on SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, EntryPoint) == 0x000000, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::EntryPoint' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_AsGame_State_BP) == 0x000010, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_AsGame_State_BP' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, CallFunc_RandomInteger_ReturnValue) == 0x00001C, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_InputKeyEvent_Key) == 0x000020, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_InputKeyEvent_Key' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, CallFunc_GetPlayerState_ReturnValue) == 0x000038, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::CallFunc_GetPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, CallFunc_GetPlayerController_ReturnValue) == 0x000040, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_AsPlayer_Controller_BP) == 0x000048, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_AsPlayer_Controller_BP' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, CallFunc_GetPlayerController_ReturnValue_1) == 0x000058, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_AsPlayer_Controller_BP_1) == 0x000060, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_AsPlayer_Controller_BP_1' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_bSuccess_2) == 0x000068, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, CallFunc_GetPlayerPawn_ReturnValue) == 0x000070, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_AsTrain_Gus_Player) == 0x000078, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_AsTrain_Gus_Player' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_bSuccess_3) == 0x000080, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, CallFunc_GetPlayerPawn_ReturnValue_1) == 0x000088, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::CallFunc_GetPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_AsStarter_Spectate_2) == 0x000090, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_AsStarter_Spectate_2' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_bSuccess_4) == 0x000098, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, CallFunc_Conv_IntToString_ReturnValue) == 0x0000A0, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_AsDead_Spectate) == 0x0000B0, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_AsDead_Spectate' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_bSuccess_5) == 0x0000B8, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, CallFunc_Concat_StrStr_ReturnValue) == 0x0000C0, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0000D0, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000E0, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, CallFunc_GetPlayerPawn_ReturnValue_2) == 0x0000F0, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::CallFunc_GetPlayerPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_AsStarter_Spectate_2_1) == 0x0000F8, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_AsStarter_Spectate_2_1' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_bSuccess_6) == 0x000100, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_AsDead_Spectate_1) == 0x000108, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_AsDead_Spectate_1' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_bSuccess_7) == 0x000110, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_Event_MyGeometry) == 0x000118, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_Event_InDeltaTime) == 0x000158, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, Temp_int_Variable) == 0x00015C, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, CallFunc_GetPlayerController_ReturnValue_2) == 0x000160, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_AsPlayer_Controller_BP_2) == 0x000168, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_AsPlayer_Controller_BP_2' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_bSuccess_8) == 0x000170, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_Select_Default) == 0x000178, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, CallFunc_PlayAnimation_ReturnValue) == 0x000190, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, CallFunc_DoesSaveGameExist_ReturnValue) == 0x000198, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::CallFunc_DoesSaveGameExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, CallFunc_LoadGameFromSlot_ReturnValue) == 0x0001A0, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::CallFunc_LoadGameFromSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_AsSave_Items) == 0x0001A8, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_AsSave_Items' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_bSuccess_9) == 0x0001B0, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, CallFunc_DoesSaveGameExist_ReturnValue_1) == 0x0001B1, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::CallFunc_DoesSaveGameExist_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, CallFunc_Conv_IntToString_ReturnValue_2) == 0x0001B8, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, CallFunc_LoadGameFromSlot_ReturnValue_1) == 0x0001C8, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::CallFunc_LoadGameFromSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_AsSave_Items_1) == 0x0001D0, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_AsSave_Items_1' has a wrong offset!");
static_assert(offsetof(SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire, K2Node_DynamicCast_bSuccess_10) == 0x0001D8, "Member 'SpawnMenu_The_Spire_C_ExecuteUbergraph_SpawnMenu_The_Spire::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");

}

