﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Spectate_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Spectate_BP.Spectate_BP_C
// 0x0060 (0x0380 - 0x0320)
class ASpectate_BP_C final : public ASpectatorPawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                       Camera;                                            // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         PosterboardLerp_Alpha_59A737734235D934FC2EE4AE62DD7C5A; // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            PosterboardLerp__Direction_59A737734235D934FC2EE4AE62DD7C5A; // 0x0334(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_335[0x3];                                      // 0x0335(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     PosterboardLerp;                                   // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OpenWindowBP;                                      // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USaveGame*                              SaveOptions;                                       // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               New_Rotation;                                      // 0x0358(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Posterboard;                                       // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMenugus_C*                             MenuGusRef;                                        // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Window_doer();
	void ReceiveBeginPlay();
	void PosterboardLerp__UpdateFunc();
	void PosterboardLerp__FinishedFunc();
	void Load_Settings();
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ExecuteUbergraph_Spectate_BP(int32 EntryPoint);
	void Event_Posterboard();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Spectate_BP_C">();
	}
	static class ASpectate_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASpectate_BP_C>();
	}
};
static_assert(alignof(ASpectate_BP_C) == 0x000008, "Wrong alignment on ASpectate_BP_C");
static_assert(sizeof(ASpectate_BP_C) == 0x000380, "Wrong size on ASpectate_BP_C");
static_assert(offsetof(ASpectate_BP_C, UberGraphFrame) == 0x000320, "Member 'ASpectate_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASpectate_BP_C, Camera) == 0x000328, "Member 'ASpectate_BP_C::Camera' has a wrong offset!");
static_assert(offsetof(ASpectate_BP_C, PosterboardLerp_Alpha_59A737734235D934FC2EE4AE62DD7C5A) == 0x000330, "Member 'ASpectate_BP_C::PosterboardLerp_Alpha_59A737734235D934FC2EE4AE62DD7C5A' has a wrong offset!");
static_assert(offsetof(ASpectate_BP_C, PosterboardLerp__Direction_59A737734235D934FC2EE4AE62DD7C5A) == 0x000334, "Member 'ASpectate_BP_C::PosterboardLerp__Direction_59A737734235D934FC2EE4AE62DD7C5A' has a wrong offset!");
static_assert(offsetof(ASpectate_BP_C, PosterboardLerp) == 0x000338, "Member 'ASpectate_BP_C::PosterboardLerp' has a wrong offset!");
static_assert(offsetof(ASpectate_BP_C, OpenWindowBP) == 0x000340, "Member 'ASpectate_BP_C::OpenWindowBP' has a wrong offset!");
static_assert(offsetof(ASpectate_BP_C, SaveOptions) == 0x000350, "Member 'ASpectate_BP_C::SaveOptions' has a wrong offset!");
static_assert(offsetof(ASpectate_BP_C, New_Rotation) == 0x000358, "Member 'ASpectate_BP_C::New_Rotation' has a wrong offset!");
static_assert(offsetof(ASpectate_BP_C, Posterboard) == 0x000370, "Member 'ASpectate_BP_C::Posterboard' has a wrong offset!");
static_assert(offsetof(ASpectate_BP_C, MenuGusRef) == 0x000378, "Member 'ASpectate_BP_C::MenuGusRef' has a wrong offset!");

}

