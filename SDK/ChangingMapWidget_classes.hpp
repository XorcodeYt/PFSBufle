﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChangingMapWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChangingMapWidget.ChangingMapWidget_C
// 0x0060 (0x02F0 - 0x0290)
class UChangingMapWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_135;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x02A8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x02B0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x02B8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Countdown;                                         // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C4[0x4];                                      // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 GameMode;                                          // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 Map;                                               // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Has_authority;                                     // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	class FText GetText_2();
	class FText GetText_1();
	class FText GetText_0();
	struct FSlateBrush GetBrush_0();
	void ExecuteUbergraph_ChangingMapWidget(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChangingMapWidget_C">();
	}
	static class UChangingMapWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChangingMapWidget_C>();
	}
};
static_assert(alignof(UChangingMapWidget_C) == 0x000008, "Wrong alignment on UChangingMapWidget_C");
static_assert(sizeof(UChangingMapWidget_C) == 0x0002F0, "Wrong size on UChangingMapWidget_C");
static_assert(offsetof(UChangingMapWidget_C, UberGraphFrame) == 0x000290, "Member 'UChangingMapWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChangingMapWidget_C, Image_0) == 0x000298, "Member 'UChangingMapWidget_C::Image_0' has a wrong offset!");
static_assert(offsetof(UChangingMapWidget_C, Image_135) == 0x0002A0, "Member 'UChangingMapWidget_C::Image_135' has a wrong offset!");
static_assert(offsetof(UChangingMapWidget_C, TextBlock) == 0x0002A8, "Member 'UChangingMapWidget_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UChangingMapWidget_C, TextBlock_1) == 0x0002B0, "Member 'UChangingMapWidget_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UChangingMapWidget_C, TextBlock_2) == 0x0002B8, "Member 'UChangingMapWidget_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UChangingMapWidget_C, Countdown) == 0x0002C0, "Member 'UChangingMapWidget_C::Countdown' has a wrong offset!");
static_assert(offsetof(UChangingMapWidget_C, GameMode) == 0x0002C8, "Member 'UChangingMapWidget_C::GameMode' has a wrong offset!");
static_assert(offsetof(UChangingMapWidget_C, Map) == 0x0002D8, "Member 'UChangingMapWidget_C::Map' has a wrong offset!");
static_assert(offsetof(UChangingMapWidget_C, Has_authority) == 0x0002E8, "Member 'UChangingMapWidget_C::Has_authority' has a wrong offset!");

}

