﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TDM_UI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TDM_UI.TDM_UI_C
// 0x0040 (0x02D0 - 0x0290)
class UTDM_UI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Skull;                                             // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             BlueScoreText;                                     // 0x02A0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_0;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RedScoreText;                                      // 0x02B8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SkullImage;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Blue_Score;                                        // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Red_Score;                                         // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Update_Score();
	class FText Set_Text_Red_Score();
	class FText Set_Text_Blue_Score();
	float Red_Progress_Bar();
	struct FSlateBrush Get_SkullImage_Brush_0();
	void ExecuteUbergraph_TDM_UI(int32 EntryPoint);
	float Blue_Progress_Bar();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TDM_UI_C">();
	}
	static class UTDM_UI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTDM_UI_C>();
	}
};
static_assert(alignof(UTDM_UI_C) == 0x000008, "Wrong alignment on UTDM_UI_C");
static_assert(sizeof(UTDM_UI_C) == 0x0002D0, "Wrong size on UTDM_UI_C");
static_assert(offsetof(UTDM_UI_C, UberGraphFrame) == 0x000290, "Member 'UTDM_UI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTDM_UI_C, Skull) == 0x000298, "Member 'UTDM_UI_C::Skull' has a wrong offset!");
static_assert(offsetof(UTDM_UI_C, BlueScoreText) == 0x0002A0, "Member 'UTDM_UI_C::BlueScoreText' has a wrong offset!");
static_assert(offsetof(UTDM_UI_C, ProgressBar) == 0x0002A8, "Member 'UTDM_UI_C::ProgressBar' has a wrong offset!");
static_assert(offsetof(UTDM_UI_C, ProgressBar_0) == 0x0002B0, "Member 'UTDM_UI_C::ProgressBar_0' has a wrong offset!");
static_assert(offsetof(UTDM_UI_C, RedScoreText) == 0x0002B8, "Member 'UTDM_UI_C::RedScoreText' has a wrong offset!");
static_assert(offsetof(UTDM_UI_C, SkullImage) == 0x0002C0, "Member 'UTDM_UI_C::SkullImage' has a wrong offset!");
static_assert(offsetof(UTDM_UI_C, Blue_Score) == 0x0002C8, "Member 'UTDM_UI_C::Blue_Score' has a wrong offset!");
static_assert(offsetof(UTDM_UI_C, Red_Score) == 0x0002CC, "Member 'UTDM_UI_C::Red_Score' has a wrong offset!");

}

