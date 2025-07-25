﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LossScreen2

#include "Basic.hpp"

#include "AdvancedSessions_structs.hpp"


namespace SDK::Params
{

// Function LossScreen2.LossScreen2_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct LossScreen2_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LossScreen2_C_PreConstruct) == 0x000001, "Wrong alignment on LossScreen2_C_PreConstruct");
static_assert(sizeof(LossScreen2_C_PreConstruct) == 0x000001, "Wrong size on LossScreen2_C_PreConstruct");
static_assert(offsetof(LossScreen2_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'LossScreen2_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function LossScreen2.LossScreen2_C.ExecuteUbergraph_LossScreen2
// 0x0130 (0x0130 - 0x0000)
struct LossScreen2_C_ExecuteUbergraph_LossScreen2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDestroySessionCallbackProxy*           CallFunc_DestroySession_ReturnValue;               // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ThirdPersonGameMode_C*              K2Node_DynamicCast_AsBP_Third_Person_Game_Mode;    // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSessionSettings_NumConnections;        // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSessionSettings_NumPrivateConnections; // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSessionSettings_bIsLAN;                // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSessionSettings_bIsDedicated;          // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSessionSettings_bAllowInvites;         // 0x00B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSessionSettings_bAllowJoinInProgress;  // 0x00B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSessionSettings_bIsAnticheatEnabled;   // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSessionSettings_BuildUniqueID;         // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSessionPropertyKeyPair>        CallFunc_GetSessionSettings_ExtraSettings;         // 0x00C0(0x0010)(ReferenceParm)
	EBlueprintResultSwitch                        CallFunc_GetSessionSettings_Result;                // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESessionSettingSearchResult                   CallFunc_GetSessionPropertyString_SearchResult;    // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D3[0x5];                                       // 0x00D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSessionPropertyString_SettingValue;    // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSessionSettings_NumConnections_1;      // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSessionSettings_NumPrivateConnections_1; // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSessionSettings_bIsLAN_1;              // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSessionSettings_bIsDedicated_1;        // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSessionSettings_bAllowInvites_1;       // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSessionSettings_bAllowJoinInProgress_1; // 0x00F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSessionSettings_bIsAnticheatEnabled_1; // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F5[0x3];                                       // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSessionSettings_BuildUniqueID_1;       // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSessionPropertyKeyPair>        CallFunc_GetSessionSettings_ExtraSettings_1;       // 0x0100(0x0010)(ReferenceParm)
	EBlueprintResultSwitch                        CallFunc_GetSessionSettings_Result_1;              // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESessionSettingSearchResult                   CallFunc_GetSessionPropertyString_SearchResult_1;  // 0x0113(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSessionPropertyString_SettingValue_1;  // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess_1;                  // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;                    // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LossScreen2_C_ExecuteUbergraph_LossScreen2) == 0x000008, "Wrong alignment on LossScreen2_C_ExecuteUbergraph_LossScreen2");
static_assert(sizeof(LossScreen2_C_ExecuteUbergraph_LossScreen2) == 0x000130, "Wrong size on LossScreen2_C_ExecuteUbergraph_LossScreen2");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, EntryPoint) == 0x000000, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::EntryPoint' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, K2Node_Event_IsDesignTime) == 0x000014, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_PlayAnimation_ReturnValue_2) == 0x000028, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_PlayAnimation_ReturnValue_3) == 0x000030, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_PlayAnimation_ReturnValue_4) == 0x000038, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetPlayerController_ReturnValue) == 0x000040, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetPlayerController_ReturnValue_1) == 0x000048, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, K2Node_CreateDelegate_OutputDelegate_1) == 0x000050, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetCurrentLevelName_ReturnValue) == 0x000060, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_Concat_StrStr_ReturnValue) == 0x000070, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetPlayerController_ReturnValue_2) == 0x000080, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_DestroySession_ReturnValue) == 0x000088, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_DestroySession_ReturnValue' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetGameMode_ReturnValue) == 0x000098, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, K2Node_DynamicCast_AsBP_Third_Person_Game_Mode) == 0x0000A0, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::K2Node_DynamicCast_AsBP_Third_Person_Game_Mode' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_NumConnections) == 0x0000AC, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_NumConnections' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_NumPrivateConnections) == 0x0000B0, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_NumPrivateConnections' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_bIsLAN) == 0x0000B4, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_bIsLAN' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_bIsDedicated) == 0x0000B5, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_bIsDedicated' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_bAllowInvites) == 0x0000B6, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_bAllowInvites' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_bAllowJoinInProgress) == 0x0000B7, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_bAllowJoinInProgress' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_bIsAnticheatEnabled) == 0x0000B8, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_bIsAnticheatEnabled' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_BuildUniqueID) == 0x0000BC, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_BuildUniqueID' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_ExtraSettings) == 0x0000C0, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_ExtraSettings' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_Result) == 0x0000D0, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_Result' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, K2Node_SwitchEnum_CmpSuccess) == 0x0000D1, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionPropertyString_SearchResult) == 0x0000D2, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionPropertyString_SearchResult' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionPropertyString_SettingValue) == 0x0000D8, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionPropertyString_SettingValue' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_NumConnections_1) == 0x0000E8, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_NumConnections_1' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_NumPrivateConnections_1) == 0x0000EC, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_NumPrivateConnections_1' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_bIsLAN_1) == 0x0000F0, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_bIsLAN_1' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_bIsDedicated_1) == 0x0000F1, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_bIsDedicated_1' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_bAllowInvites_1) == 0x0000F2, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_bAllowInvites_1' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_bAllowJoinInProgress_1) == 0x0000F3, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_bAllowJoinInProgress_1' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_bIsAnticheatEnabled_1) == 0x0000F4, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_bIsAnticheatEnabled_1' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_BuildUniqueID_1) == 0x0000F8, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_BuildUniqueID_1' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_ExtraSettings_1) == 0x000100, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_ExtraSettings_1' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionSettings_Result_1) == 0x000110, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionSettings_Result_1' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, K2Node_SwitchString_CmpSuccess) == 0x000111, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, K2Node_SwitchEnum_CmpSuccess_1) == 0x000112, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionPropertyString_SearchResult_1) == 0x000113, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionPropertyString_SearchResult_1' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, CallFunc_GetSessionPropertyString_SettingValue_1) == 0x000118, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::CallFunc_GetSessionPropertyString_SettingValue_1' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, K2Node_SwitchEnum_CmpSuccess_2) == 0x000128, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, K2Node_SwitchString_CmpSuccess_1) == 0x000129, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::K2Node_SwitchString_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_ExecuteUbergraph_LossScreen2, K2Node_SwitchEnum_CmpSuccess_3) == 0x00012A, "Member 'LossScreen2_C_ExecuteUbergraph_LossScreen2::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");

// Function LossScreen2.LossScreen2_C.Bind is Victorious
// 0x0050 (0x0050 - 0x0000)
struct LossScreen2_C_Bind_is_Victorious final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
};
static_assert(alignof(LossScreen2_C_Bind_is_Victorious) == 0x000008, "Wrong alignment on LossScreen2_C_Bind_is_Victorious");
static_assert(sizeof(LossScreen2_C_Bind_is_Victorious) == 0x000050, "Wrong size on LossScreen2_C_Bind_is_Victorious");
static_assert(offsetof(LossScreen2_C_Bind_is_Victorious, ReturnValue) == 0x000000, "Member 'LossScreen2_C_Bind_is_Victorious::ReturnValue' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_Bind_is_Victorious, CallFunc_Conv_NameToString_ReturnValue) == 0x000018, "Member 'LossScreen2_C_Bind_is_Victorious::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_Bind_is_Victorious, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'LossScreen2_C_Bind_is_Victorious::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LossScreen2_C_Bind_is_Victorious, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'LossScreen2_C_Bind_is_Victorious::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

