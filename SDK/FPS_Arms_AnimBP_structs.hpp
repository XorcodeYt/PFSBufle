﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FPS_Arms_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct FPS_Arms_AnimBP.FPS_Arms_AnimBP_C.AnimBlueprintGeneratedMutableData
// 0x0000 (0x0001 - 0x0001)
struct FPS_Arms_AnimBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
};
static_assert(alignof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on FPS_Arms_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong size on FPS_Arms_AnimBP::FAnimBlueprintGeneratedMutableData");

// ScriptStruct FPS_Arms_AnimBP.FPS_Arms_AnimBP_C.AnimBlueprintGeneratedConstantData
// 0x0127 (0x0128 - 0x0001)
struct FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_38;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_39;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_40;                                  // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_41;                                 // 0x0018(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputScaleBiasClampConstants          __StructProperty_42;                               // 0x001C(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_43;                                // 0x0048(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_44;                                // 0x004C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      __AnimSequenceBase_45;                             // 0x0050(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_46;                                 // 0x0058(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_47;                                 // 0x0059(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_48;                                 // 0x005A(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B[0x1];                                       // 0x005B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_49;                                 // 0x005C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_50;                                 // 0x0064(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_51;                                  // 0x006C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_52;                               // 0x0070(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0090(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0110(0x0018)()
};
static_assert(alignof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000128, "Wrong size on FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_38) == 0x000004, "Member 'FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_38' has a wrong offset!");
static_assert(offsetof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_39) == 0x00000C, "Member 'FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_39' has a wrong offset!");
static_assert(offsetof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_40) == 0x000014, "Member 'FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_40' has a wrong offset!");
static_assert(offsetof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_41) == 0x000018, "Member 'FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_41' has a wrong offset!");
static_assert(offsetof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_42) == 0x00001C, "Member 'FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_42' has a wrong offset!");
static_assert(offsetof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_43) == 0x000048, "Member 'FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_43' has a wrong offset!");
static_assert(offsetof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_44) == 0x00004C, "Member 'FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_44' has a wrong offset!");
static_assert(offsetof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData, __AnimSequenceBase_45) == 0x000050, "Member 'FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData::__AnimSequenceBase_45' has a wrong offset!");
static_assert(offsetof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_46) == 0x000058, "Member 'FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_46' has a wrong offset!");
static_assert(offsetof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_47) == 0x000059, "Member 'FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_47' has a wrong offset!");
static_assert(offsetof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_48) == 0x00005A, "Member 'FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_48' has a wrong offset!");
static_assert(offsetof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_49) == 0x00005C, "Member 'FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_49' has a wrong offset!");
static_assert(offsetof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_50) == 0x000064, "Member 'FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_50' has a wrong offset!");
static_assert(offsetof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_51) == 0x00006C, "Member 'FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_51' has a wrong offset!");
static_assert(offsetof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_52) == 0x000070, "Member 'FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_52' has a wrong offset!");
static_assert(offsetof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000090, "Member 'FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000110, "Member 'FPS_Arms_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

