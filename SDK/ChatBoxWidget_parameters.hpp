﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChatBoxWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ChatBoxWidget.ChatBoxWidget_C.OnPreviewKeyDown
// 0x0478 (0x0478 - 0x0000)
struct ChatBoxWidget_C_OnPreviewKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0040(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0078(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0130(0x00B8)()
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x01E8(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_201[0x7];                                      // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GetKey_ReturnValue_1;                     // 0x0208(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_221[0x7];                                      // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue_1;                    // 0x0228(0x00B8)()
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATrainGusPlayer_C*                      K2Node_DynamicCast_AsTrain_Gus_Player;             // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F1[0x7];                                      // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0300(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue_2;                    // 0x03B8(0x00B8)()
	bool                                          CallFunc_HasKeyboardFocus_ReturnValue;             // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0471(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatBoxWidget_C_OnPreviewKeyDown) == 0x000008, "Wrong alignment on ChatBoxWidget_C_OnPreviewKeyDown");
static_assert(sizeof(ChatBoxWidget_C_OnPreviewKeyDown) == 0x000478, "Wrong size on ChatBoxWidget_C_OnPreviewKeyDown");
static_assert(offsetof(ChatBoxWidget_C_OnPreviewKeyDown, MyGeometry) == 0x000000, "Member 'ChatBoxWidget_C_OnPreviewKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_OnPreviewKeyDown, InKeyEvent) == 0x000040, "Member 'ChatBoxWidget_C_OnPreviewKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_OnPreviewKeyDown, ReturnValue) == 0x000078, "Member 'ChatBoxWidget_C_OnPreviewKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_OnPreviewKeyDown, CallFunc_Handled_ReturnValue) == 0x000130, "Member 'ChatBoxWidget_C_OnPreviewKeyDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_OnPreviewKeyDown, CallFunc_GetKey_ReturnValue) == 0x0001E8, "Member 'ChatBoxWidget_C_OnPreviewKeyDown::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_OnPreviewKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000200, "Member 'ChatBoxWidget_C_OnPreviewKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_OnPreviewKeyDown, CallFunc_GetKey_ReturnValue_1) == 0x000208, "Member 'ChatBoxWidget_C_OnPreviewKeyDown::CallFunc_GetKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_OnPreviewKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_1) == 0x000220, "Member 'ChatBoxWidget_C_OnPreviewKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_OnPreviewKeyDown, CallFunc_Handled_ReturnValue_1) == 0x000228, "Member 'ChatBoxWidget_C_OnPreviewKeyDown::CallFunc_Handled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_OnPreviewKeyDown, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0002E0, "Member 'ChatBoxWidget_C_OnPreviewKeyDown::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_OnPreviewKeyDown, K2Node_DynamicCast_AsTrain_Gus_Player) == 0x0002E8, "Member 'ChatBoxWidget_C_OnPreviewKeyDown::K2Node_DynamicCast_AsTrain_Gus_Player' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_OnPreviewKeyDown, K2Node_DynamicCast_bSuccess) == 0x0002F0, "Member 'ChatBoxWidget_C_OnPreviewKeyDown::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_OnPreviewKeyDown, CallFunc_GetPlayerController_ReturnValue) == 0x0002F8, "Member 'ChatBoxWidget_C_OnPreviewKeyDown::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_OnPreviewKeyDown, CallFunc_Unhandled_ReturnValue) == 0x000300, "Member 'ChatBoxWidget_C_OnPreviewKeyDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_OnPreviewKeyDown, CallFunc_Handled_ReturnValue_2) == 0x0003B8, "Member 'ChatBoxWidget_C_OnPreviewKeyDown::CallFunc_Handled_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_OnPreviewKeyDown, CallFunc_HasKeyboardFocus_ReturnValue) == 0x000470, "Member 'ChatBoxWidget_C_OnPreviewKeyDown::CallFunc_HasKeyboardFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_OnPreviewKeyDown, CallFunc_BooleanAND_ReturnValue) == 0x000471, "Member 'ChatBoxWidget_C_OnPreviewKeyDown::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function ChatBoxWidget.ChatBoxWidget_C.InpActEvt_T_K2Node_InputKeyEvent_0
// 0x0018 (0x0018 - 0x0000)
struct ChatBoxWidget_C_InpActEvt_T_K2Node_InputKeyEvent_0 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(ChatBoxWidget_C_InpActEvt_T_K2Node_InputKeyEvent_0) == 0x000008, "Wrong alignment on ChatBoxWidget_C_InpActEvt_T_K2Node_InputKeyEvent_0");
static_assert(sizeof(ChatBoxWidget_C_InpActEvt_T_K2Node_InputKeyEvent_0) == 0x000018, "Wrong size on ChatBoxWidget_C_InpActEvt_T_K2Node_InputKeyEvent_0");
static_assert(offsetof(ChatBoxWidget_C_InpActEvt_T_K2Node_InputKeyEvent_0, Key) == 0x000000, "Member 'ChatBoxWidget_C_InpActEvt_T_K2Node_InputKeyEvent_0::Key' has a wrong offset!");

// Function ChatBoxWidget.ChatBoxWidget_C.ExecuteUbergraph_ChatBoxWidget
// 0x0118 (0x0118 - 0x0000)
struct ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatMessageWidget_C*                   CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key;                          // 0x0010(0x0018)(HasGetValueTypeHash)
	class UChatMessageWidget_C*                   CallFunc_Create_ReturnValue_1;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerControllerBP_C*                  K2Node_DynamicCast_AsPlayer_Controller_BP;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0050(0x0018)(ConstParm)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0068(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           K2Node_CustomEvent_Player;                         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Text;                           // 0x00B0(0x0018)()
	class FString                                 K2Node_CustomEvent_Name;                           // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D8(0x0018)()
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable_1;                              // 0x0100(0x0018)(ConstParm)
};
static_assert(alignof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget) == 0x000008, "Wrong alignment on ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget");
static_assert(sizeof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget) == 0x000118, "Wrong size on ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, EntryPoint) == 0x000000, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, CallFunc_Create_ReturnValue) == 0x000008, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, K2Node_InputKeyEvent_Key) == 0x000010, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::K2Node_InputKeyEvent_Key' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, CallFunc_Create_ReturnValue_1) == 0x000028, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, CallFunc_GetPlayerController_ReturnValue) == 0x000030, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, CallFunc_AddChild_ReturnValue) == 0x000038, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, K2Node_DynamicCast_AsPlayer_Controller_BP) == 0x000040, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::K2Node_DynamicCast_AsPlayer_Controller_BP' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, Temp_text_Variable) == 0x000050, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, CallFunc_GetText_ReturnValue) == 0x000068, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, CallFunc_Conv_TextToString_ReturnValue) == 0x000080, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, CallFunc_TextIsEmpty_ReturnValue) == 0x000090, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, CallFunc_Len_ReturnValue) == 0x000094, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000098, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, CallFunc_AddChild_ReturnValue_1) == 0x0000A0, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, K2Node_CustomEvent_Player) == 0x0000A8, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::K2Node_CustomEvent_Player' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, K2Node_CustomEvent_Text) == 0x0000B0, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, K2Node_CustomEvent_Name) == 0x0000C8, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::K2Node_CustomEvent_Name' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D8, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, CallFunc_GetPlayerName_ReturnValue) == 0x0000F0, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget, Temp_text_Variable_1) == 0x000100, "Member 'ChatBoxWidget_C_ExecuteUbergraph_ChatBoxWidget::Temp_text_Variable_1' has a wrong offset!");

// Function ChatBoxWidget.ChatBoxWidget_C.Add Message Client
// 0x0030 (0x0030 - 0x0000)
struct ChatBoxWidget_C_Add_Message_Client final
{
public:
	class APlayerState*                           Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 Name_0;                                            // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatBoxWidget_C_Add_Message_Client) == 0x000008, "Wrong alignment on ChatBoxWidget_C_Add_Message_Client");
static_assert(sizeof(ChatBoxWidget_C_Add_Message_Client) == 0x000030, "Wrong size on ChatBoxWidget_C_Add_Message_Client");
static_assert(offsetof(ChatBoxWidget_C_Add_Message_Client, Player) == 0x000000, "Member 'ChatBoxWidget_C_Add_Message_Client::Player' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_Add_Message_Client, Text) == 0x000008, "Member 'ChatBoxWidget_C_Add_Message_Client::Text' has a wrong offset!");
static_assert(offsetof(ChatBoxWidget_C_Add_Message_Client, Name_0) == 0x000020, "Member 'ChatBoxWidget_C_Add_Message_Client::Name_0' has a wrong offset!");

}

