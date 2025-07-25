﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChatBoxWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatBoxWidget.ChatBoxWidget_C
// 0x0038 (0x02C8 - 0x0290)
class UChatBoxWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_0;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableText*                 MultiLineEditableText_99;                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_0;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ETextCommit                                   Commit_Method;                                     // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      Owner_Player_State;                                // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Send_In_Text();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void InpActEvt_T_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void ExecuteUbergraph_ChatBoxWidget(int32 EntryPoint);
	void Construct();
	void Add_Message_Client(class APlayerState* Player, const class FText& Text, const class FString& Name_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatBoxWidget_C">();
	}
	static class UChatBoxWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatBoxWidget_C>();
	}
};
static_assert(alignof(UChatBoxWidget_C) == 0x000008, "Wrong alignment on UChatBoxWidget_C");
static_assert(sizeof(UChatBoxWidget_C) == 0x0002C8, "Wrong size on UChatBoxWidget_C");
static_assert(offsetof(UChatBoxWidget_C, UberGraphFrame) == 0x000290, "Member 'UChatBoxWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatBoxWidget_C, Button_0) == 0x000298, "Member 'UChatBoxWidget_C::Button_0' has a wrong offset!");
static_assert(offsetof(UChatBoxWidget_C, Image_0) == 0x0002A0, "Member 'UChatBoxWidget_C::Image_0' has a wrong offset!");
static_assert(offsetof(UChatBoxWidget_C, MultiLineEditableText_99) == 0x0002A8, "Member 'UChatBoxWidget_C::MultiLineEditableText_99' has a wrong offset!");
static_assert(offsetof(UChatBoxWidget_C, ScrollBox_0) == 0x0002B0, "Member 'UChatBoxWidget_C::ScrollBox_0' has a wrong offset!");
static_assert(offsetof(UChatBoxWidget_C, Commit_Method) == 0x0002B8, "Member 'UChatBoxWidget_C::Commit_Method' has a wrong offset!");
static_assert(offsetof(UChatBoxWidget_C, Owner_Player_State) == 0x0002C0, "Member 'UChatBoxWidget_C::Owner_Player_State' has a wrong offset!");

}

