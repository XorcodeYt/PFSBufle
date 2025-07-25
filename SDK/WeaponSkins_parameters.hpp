﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponSkins

#include "Basic.hpp"


namespace SDK::Params
{

// Function WeaponSkins.WeaponSkins_C.Save Item
// 0x0030 (0x0030 - 0x0000)
struct WeaponSkins_C_Save_Item final
{
public:
	int32                                         Title;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Hat;                                               // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Skin;                                              // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PantType;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class USaveItems_C*                           CallFunc_CreateSaveGameObject_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveGameToSlot_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSkins_C_Save_Item) == 0x000008, "Wrong alignment on WeaponSkins_C_Save_Item");
static_assert(sizeof(WeaponSkins_C_Save_Item) == 0x000030, "Wrong size on WeaponSkins_C_Save_Item");
static_assert(offsetof(WeaponSkins_C_Save_Item, Title) == 0x000000, "Member 'WeaponSkins_C_Save_Item::Title' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_Save_Item, Hat) == 0x000004, "Member 'WeaponSkins_C_Save_Item::Hat' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_Save_Item, Skin) == 0x000008, "Member 'WeaponSkins_C_Save_Item::Skin' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_Save_Item, PantType) == 0x000010, "Member 'WeaponSkins_C_Save_Item::PantType' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_Save_Item, CallFunc_CreateSaveGameObject_ReturnValue) == 0x000020, "Member 'WeaponSkins_C_Save_Item::CallFunc_CreateSaveGameObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_Save_Item, CallFunc_SaveGameToSlot_ReturnValue) == 0x000028, "Member 'WeaponSkins_C_Save_Item::CallFunc_SaveGameToSlot_ReturnValue' has a wrong offset!");

// Function WeaponSkins.WeaponSkins_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WeaponSkins_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSkins_C_PreConstruct) == 0x000001, "Wrong alignment on WeaponSkins_C_PreConstruct");
static_assert(sizeof(WeaponSkins_C_PreConstruct) == 0x000001, "Wrong size on WeaponSkins_C_PreConstruct");
static_assert(offsetof(WeaponSkins_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WeaponSkins_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WeaponSkins.WeaponSkins_C.ExecuteUbergraph_WeaponSkins
// 0x0108 (0x0108 - 0x0000)
struct WeaponSkins_C_ExecuteUbergraph_WeaponSkins final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATrainGusPlayer_C*                      K2Node_DynamicCast_AsTrain_Gus_Player;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetPlayerState_ReturnValue;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerStateBP_C*                       K2Node_DynamicCast_AsPlayer_State_BP;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_3;        // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetPlayerState_ReturnValue_1;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerStateBP_C*                       K2Node_DynamicCast_AsPlayer_State_BP_1;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetPlayerState_ReturnValue_2;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerStateBP_C*                       K2Node_DynamicCast_AsPlayer_State_BP_2;            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetPlayerState_ReturnValue_3;             // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerStateBP_C*                       K2Node_DynamicCast_AsPlayer_State_BP_3;            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesSaveGameExist_ReturnValue;            // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A[0x6];                                       // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USaveGame*                              CallFunc_LoadGameFromSlot_ReturnValue;             // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USavePlayerData_C*                      K2Node_DynamicCast_AsSave_Player_Data;             // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerControllerBP_C*                  K2Node_DynamicCast_AsPlayer_Controller_BP;         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetPlayerState_ReturnValue_4;             // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerStateBP_C*                       K2Node_DynamicCast_AsPlayer_State_BP_4;            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesSaveGameExist_ReturnValue_1;          // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D2[0x6];                                       // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USaveGame*                              CallFunc_LoadGameFromSlot_ReturnValue_1;           // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USaveItems_C*                           K2Node_DynamicCast_AsSave_Items;                   // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesSaveGameExist_ReturnValue_2;          // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EA[0x6];                                       // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USaveGame*                              CallFunc_LoadGameFromSlot_ReturnValue_2;           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USaveItems_C*                           K2Node_DynamicCast_AsSave_Items_1;                 // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_9;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins) == 0x000008, "Wrong alignment on WeaponSkins_C_ExecuteUbergraph_WeaponSkins");
static_assert(sizeof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins) == 0x000108, "Wrong size on WeaponSkins_C_ExecuteUbergraph_WeaponSkins");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, EntryPoint) == 0x000000, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_AsTrain_Gus_Player) == 0x000010, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_AsTrain_Gus_Player' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, CallFunc_GetPlayerState_ReturnValue) == 0x000020, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::CallFunc_GetPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000028, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_AsPlayer_State_BP) == 0x000030, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_AsPlayer_State_BP' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000039, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x00003A, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, CallFunc_GreaterEqual_IntInt_ReturnValue_3) == 0x00003B, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::CallFunc_GreaterEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, CallFunc_GetPlayerState_ReturnValue_1) == 0x000040, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::CallFunc_GetPlayerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_AsPlayer_State_BP_1) == 0x000048, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_AsPlayer_State_BP_1' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_bSuccess_2) == 0x000050, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, CallFunc_GetPlayerState_ReturnValue_2) == 0x000058, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::CallFunc_GetPlayerState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_AsPlayer_State_BP_2) == 0x000060, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_AsPlayer_State_BP_2' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_bSuccess_3) == 0x000068, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, CallFunc_GetPlayerState_ReturnValue_3) == 0x000070, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::CallFunc_GetPlayerState_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_Event_IsDesignTime) == 0x000078, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_AsPlayer_State_BP_3) == 0x000080, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_AsPlayer_State_BP_3' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_bSuccess_4) == 0x000088, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, CallFunc_DoesSaveGameExist_ReturnValue) == 0x000089, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::CallFunc_DoesSaveGameExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, CallFunc_LoadGameFromSlot_ReturnValue) == 0x000090, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::CallFunc_LoadGameFromSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_AsSave_Player_Data) == 0x000098, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_AsSave_Player_Data' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_bSuccess_5) == 0x0000A0, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, CallFunc_GetPlayerController_ReturnValue) == 0x0000A8, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_AsPlayer_Controller_BP) == 0x0000B0, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_AsPlayer_Controller_BP' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_bSuccess_6) == 0x0000B8, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, CallFunc_GetPlayerState_ReturnValue_4) == 0x0000C0, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::CallFunc_GetPlayerState_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_AsPlayer_State_BP_4) == 0x0000C8, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_AsPlayer_State_BP_4' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_bSuccess_7) == 0x0000D0, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, CallFunc_DoesSaveGameExist_ReturnValue_1) == 0x0000D1, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::CallFunc_DoesSaveGameExist_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, CallFunc_LoadGameFromSlot_ReturnValue_1) == 0x0000D8, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::CallFunc_LoadGameFromSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_AsSave_Items) == 0x0000E0, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_AsSave_Items' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_bSuccess_8) == 0x0000E8, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, CallFunc_DoesSaveGameExist_ReturnValue_2) == 0x0000E9, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::CallFunc_DoesSaveGameExist_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, CallFunc_LoadGameFromSlot_ReturnValue_2) == 0x0000F0, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::CallFunc_LoadGameFromSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_AsSave_Items_1) == 0x0000F8, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_AsSave_Items_1' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_ExecuteUbergraph_WeaponSkins, K2Node_DynamicCast_bSuccess_9) == 0x000100, "Member 'WeaponSkins_C_ExecuteUbergraph_WeaponSkins::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");

// Function WeaponSkins.WeaponSkins_C.EnableTheSun
// 0x0028 (0x0028 - 0x0000)
struct WeaponSkins_C_EnableTheSun final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetPlayerState_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerStateBP_C*                       K2Node_DynamicCast_AsPlayer_State_BP;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSkins_C_EnableTheSun) == 0x000008, "Wrong alignment on WeaponSkins_C_EnableTheSun");
static_assert(sizeof(WeaponSkins_C_EnableTheSun) == 0x000028, "Wrong size on WeaponSkins_C_EnableTheSun");
static_assert(offsetof(WeaponSkins_C_EnableTheSun, ReturnValue) == 0x000000, "Member 'WeaponSkins_C_EnableTheSun::ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableTheSun, CallFunc_GetPlayerState_ReturnValue) == 0x000008, "Member 'WeaponSkins_C_EnableTheSun::CallFunc_GetPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableTheSun, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000010, "Member 'WeaponSkins_C_EnableTheSun::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableTheSun, K2Node_DynamicCast_AsPlayer_State_BP) == 0x000018, "Member 'WeaponSkins_C_EnableTheSun::K2Node_DynamicCast_AsPlayer_State_BP' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableTheSun, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WeaponSkins_C_EnableTheSun::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableTheSun, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000021, "Member 'WeaponSkins_C_EnableTheSun::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WeaponSkins.WeaponSkins_C.EnableNoSkin
// 0x0020 (0x0020 - 0x0000)
struct WeaponSkins_C_EnableNoSkin final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetPlayerState_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerStateBP_C*                       K2Node_DynamicCast_AsPlayer_State_BP;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSkins_C_EnableNoSkin) == 0x000008, "Wrong alignment on WeaponSkins_C_EnableNoSkin");
static_assert(sizeof(WeaponSkins_C_EnableNoSkin) == 0x000020, "Wrong size on WeaponSkins_C_EnableNoSkin");
static_assert(offsetof(WeaponSkins_C_EnableNoSkin, ReturnValue) == 0x000000, "Member 'WeaponSkins_C_EnableNoSkin::ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableNoSkin, CallFunc_GetPlayerState_ReturnValue) == 0x000008, "Member 'WeaponSkins_C_EnableNoSkin::CallFunc_GetPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableNoSkin, K2Node_DynamicCast_AsPlayer_State_BP) == 0x000010, "Member 'WeaponSkins_C_EnableNoSkin::K2Node_DynamicCast_AsPlayer_State_BP' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableNoSkin, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WeaponSkins_C_EnableNoSkin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableNoSkin, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000019, "Member 'WeaponSkins_C_EnableNoSkin::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WeaponSkins.WeaponSkins_C.EnableManyullyn
// 0x0028 (0x0028 - 0x0000)
struct WeaponSkins_C_EnableManyullyn final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetPlayerState_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerStateBP_C*                       K2Node_DynamicCast_AsPlayer_State_BP;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSkins_C_EnableManyullyn) == 0x000008, "Wrong alignment on WeaponSkins_C_EnableManyullyn");
static_assert(sizeof(WeaponSkins_C_EnableManyullyn) == 0x000028, "Wrong size on WeaponSkins_C_EnableManyullyn");
static_assert(offsetof(WeaponSkins_C_EnableManyullyn, ReturnValue) == 0x000000, "Member 'WeaponSkins_C_EnableManyullyn::ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableManyullyn, CallFunc_GetPlayerState_ReturnValue) == 0x000008, "Member 'WeaponSkins_C_EnableManyullyn::CallFunc_GetPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableManyullyn, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000010, "Member 'WeaponSkins_C_EnableManyullyn::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableManyullyn, K2Node_DynamicCast_AsPlayer_State_BP) == 0x000018, "Member 'WeaponSkins_C_EnableManyullyn::K2Node_DynamicCast_AsPlayer_State_BP' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableManyullyn, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WeaponSkins_C_EnableManyullyn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableManyullyn, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000021, "Member 'WeaponSkins_C_EnableManyullyn::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WeaponSkins.WeaponSkins_C.EnableLeaves
// 0x0028 (0x0028 - 0x0000)
struct WeaponSkins_C_EnableLeaves final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetPlayerState_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerStateBP_C*                       K2Node_DynamicCast_AsPlayer_State_BP;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSkins_C_EnableLeaves) == 0x000008, "Wrong alignment on WeaponSkins_C_EnableLeaves");
static_assert(sizeof(WeaponSkins_C_EnableLeaves) == 0x000028, "Wrong size on WeaponSkins_C_EnableLeaves");
static_assert(offsetof(WeaponSkins_C_EnableLeaves, ReturnValue) == 0x000000, "Member 'WeaponSkins_C_EnableLeaves::ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableLeaves, CallFunc_GetPlayerState_ReturnValue) == 0x000008, "Member 'WeaponSkins_C_EnableLeaves::CallFunc_GetPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableLeaves, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000010, "Member 'WeaponSkins_C_EnableLeaves::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableLeaves, K2Node_DynamicCast_AsPlayer_State_BP) == 0x000018, "Member 'WeaponSkins_C_EnableLeaves::K2Node_DynamicCast_AsPlayer_State_BP' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableLeaves, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WeaponSkins_C_EnableLeaves::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableLeaves, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000021, "Member 'WeaponSkins_C_EnableLeaves::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WeaponSkins.WeaponSkins_C.EnableBricks
// 0x0028 (0x0028 - 0x0000)
struct WeaponSkins_C_EnableBricks final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetPlayerState_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerStateBP_C*                       K2Node_DynamicCast_AsPlayer_State_BP;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSkins_C_EnableBricks) == 0x000008, "Wrong alignment on WeaponSkins_C_EnableBricks");
static_assert(sizeof(WeaponSkins_C_EnableBricks) == 0x000028, "Wrong size on WeaponSkins_C_EnableBricks");
static_assert(offsetof(WeaponSkins_C_EnableBricks, ReturnValue) == 0x000000, "Member 'WeaponSkins_C_EnableBricks::ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableBricks, CallFunc_GetPlayerState_ReturnValue) == 0x000008, "Member 'WeaponSkins_C_EnableBricks::CallFunc_GetPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableBricks, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000010, "Member 'WeaponSkins_C_EnableBricks::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableBricks, K2Node_DynamicCast_AsPlayer_State_BP) == 0x000018, "Member 'WeaponSkins_C_EnableBricks::K2Node_DynamicCast_AsPlayer_State_BP' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableBricks, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WeaponSkins_C_EnableBricks::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponSkins_C_EnableBricks, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000021, "Member 'WeaponSkins_C_EnableBricks::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

