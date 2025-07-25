﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InteractWidgetCannonFront

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function InteractWidgetCannonFront.InteractWidgetCannonFront_C.GetText_0
// 0x00B8 (0x00B8 - 0x0000)
struct InteractWidgetCannonFront_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class UInputSettings*                         CallFunc_GetInputSettings_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>         CallFunc_GetActionMappingByName_OutMappings;       // 0x0020(0x0010)(ReferenceParm)
	struct FInputActionKeyMapping                 CallFunc_Array_Get_Item;                           // 0x0030(0x0028)()
	class FText                                   CallFunc_Key_GetDisplayName_ReturnValue;           // 0x0058(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A0(0x0018)()
};
static_assert(alignof(InteractWidgetCannonFront_C_GetText_0) == 0x000008, "Wrong alignment on InteractWidgetCannonFront_C_GetText_0");
static_assert(sizeof(InteractWidgetCannonFront_C_GetText_0) == 0x0000B8, "Wrong size on InteractWidgetCannonFront_C_GetText_0");
static_assert(offsetof(InteractWidgetCannonFront_C_GetText_0, ReturnValue) == 0x000000, "Member 'InteractWidgetCannonFront_C_GetText_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractWidgetCannonFront_C_GetText_0, CallFunc_GetInputSettings_ReturnValue) == 0x000018, "Member 'InteractWidgetCannonFront_C_GetText_0::CallFunc_GetInputSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractWidgetCannonFront_C_GetText_0, CallFunc_GetActionMappingByName_OutMappings) == 0x000020, "Member 'InteractWidgetCannonFront_C_GetText_0::CallFunc_GetActionMappingByName_OutMappings' has a wrong offset!");
static_assert(offsetof(InteractWidgetCannonFront_C_GetText_0, CallFunc_Array_Get_Item) == 0x000030, "Member 'InteractWidgetCannonFront_C_GetText_0::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InteractWidgetCannonFront_C_GetText_0, CallFunc_Key_GetDisplayName_ReturnValue) == 0x000058, "Member 'InteractWidgetCannonFront_C_GetText_0::CallFunc_Key_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractWidgetCannonFront_C_GetText_0, CallFunc_Conv_TextToString_ReturnValue) == 0x000070, "Member 'InteractWidgetCannonFront_C_GetText_0::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractWidgetCannonFront_C_GetText_0, CallFunc_Concat_StrStr_ReturnValue) == 0x000080, "Member 'InteractWidgetCannonFront_C_GetText_0::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractWidgetCannonFront_C_GetText_0, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000090, "Member 'InteractWidgetCannonFront_C_GetText_0::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InteractWidgetCannonFront_C_GetText_0, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'InteractWidgetCannonFront_C_GetText_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

