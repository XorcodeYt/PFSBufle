﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WinScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "AdvancedSessions_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WinScreen.WinScreen_C
// 0x00B8 (0x0348 - 0x0290)
class UWinScreen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ServerWaitBoxAnim;                                 // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ClientWaitBoxAnim;                                 // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StartContextAnim;                                  // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StartBackground;                                   // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StartAnim;                                         // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BackgroundImage;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_0;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_1;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ChangeMapBox;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ChangeMapTDMer_Island;                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ChangeMapTheSpire;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ClientWaitBox;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ServerWaitBox;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                              Throbber;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                              Throbber_0;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VictoryImage;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   Winning_Player;                                    // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Authority;                                         // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void OnSuccess_93B0DC41420B7089A3BDDDB23C47FDC5();
	void OnFailure_93B0DC41420B7089A3BDDDB23C47FDC5();
	void ExecuteUbergraph_WinScreen(int32 EntryPoint);
	void Construct();
	void BndEvt__WinScreen_ChangeMapTDM_Island_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WinScreen_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WinScreen_Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WinScreen_Button_103_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WinScreen_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	class FText Bind_is_Victorious();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WinScreen_C">();
	}
	static class UWinScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWinScreen_C>();
	}
};
static_assert(alignof(UWinScreen_C) == 0x000008, "Wrong alignment on UWinScreen_C");
static_assert(sizeof(UWinScreen_C) == 0x000348, "Wrong size on UWinScreen_C");
static_assert(offsetof(UWinScreen_C, UberGraphFrame) == 0x000290, "Member 'UWinScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, ServerWaitBoxAnim) == 0x000298, "Member 'UWinScreen_C::ServerWaitBoxAnim' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, ClientWaitBoxAnim) == 0x0002A0, "Member 'UWinScreen_C::ClientWaitBoxAnim' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, StartContextAnim) == 0x0002A8, "Member 'UWinScreen_C::StartContextAnim' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, StartBackground) == 0x0002B0, "Member 'UWinScreen_C::StartBackground' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, StartAnim) == 0x0002B8, "Member 'UWinScreen_C::StartAnim' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, BackgroundImage) == 0x0002C0, "Member 'UWinScreen_C::BackgroundImage' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, Button) == 0x0002C8, "Member 'UWinScreen_C::Button' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, Button_0) == 0x0002D0, "Member 'UWinScreen_C::Button_0' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, Button_1) == 0x0002D8, "Member 'UWinScreen_C::Button_1' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, ChangeMapBox) == 0x0002E0, "Member 'UWinScreen_C::ChangeMapBox' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, ChangeMapTDMer_Island) == 0x0002E8, "Member 'UWinScreen_C::ChangeMapTDMer_Island' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, ChangeMapTheSpire) == 0x0002F0, "Member 'UWinScreen_C::ChangeMapTheSpire' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, ClientWaitBox) == 0x0002F8, "Member 'UWinScreen_C::ClientWaitBox' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, ServerWaitBox) == 0x000300, "Member 'UWinScreen_C::ServerWaitBox' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, TextBlock) == 0x000308, "Member 'UWinScreen_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, TextBlock_1) == 0x000310, "Member 'UWinScreen_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, TextBlock_2) == 0x000318, "Member 'UWinScreen_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, Throbber) == 0x000320, "Member 'UWinScreen_C::Throbber' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, Throbber_0) == 0x000328, "Member 'UWinScreen_C::Throbber_0' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, VictoryImage) == 0x000330, "Member 'UWinScreen_C::VictoryImage' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, Winning_Player) == 0x000338, "Member 'UWinScreen_C::Winning_Player' has a wrong offset!");
static_assert(offsetof(UWinScreen_C, Authority) == 0x000340, "Member 'UWinScreen_C::Authority' has a wrong offset!");

}

