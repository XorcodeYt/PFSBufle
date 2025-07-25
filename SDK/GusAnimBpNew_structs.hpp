﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GusAnimBpNew

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct GusAnimBpNew.GusAnimBpNew_C.AnimBlueprintGeneratedMutableData
// 0x000B (0x000C - 0x0001)
struct GusAnimBpNew::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty;                                   // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_0;                                 // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GusAnimBpNew::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on GusAnimBpNew::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(GusAnimBpNew::FAnimBlueprintGeneratedMutableData) == 0x00000C, "Wrong size on GusAnimBpNew::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(GusAnimBpNew::FAnimBlueprintGeneratedMutableData, __FloatProperty) == 0x000004, "Member 'GusAnimBpNew::FAnimBlueprintGeneratedMutableData::__FloatProperty' has a wrong offset!");
static_assert(offsetof(GusAnimBpNew::FAnimBlueprintGeneratedMutableData, __FloatProperty_0) == 0x000008, "Member 'GusAnimBpNew::FAnimBlueprintGeneratedMutableData::__FloatProperty_0' has a wrong offset!");

// ScriptStruct GusAnimBpNew.GusAnimBpNew_C.AnimBlueprintGeneratedConstantData
// 0x010F (0x0110 - 0x0001)
struct GusAnimBpNew::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendSpace*                            __BlendSpace_48;                                   // 0x0008(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FName                                   __NameProperty_49;                                 // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_50;                                  // 0x0018(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendSpace*                            __BlendSpace_51;                                   // 0x0020(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_52;                                 // 0x0028(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_53;                                // 0x002C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_54;                                // 0x0030(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_55;                                 // 0x0034(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_56;                                 // 0x0035(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_57;                                 // 0x0036(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37[0x1];                                       // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_58;                                 // 0x0038(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_59;                                  // 0x0040(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_60;                               // 0x0048(0x0020)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_61;                                 // 0x0068(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_62;                                 // 0x0070(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0078(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00F8(0x0018)()
};
static_assert(alignof(GusAnimBpNew::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on GusAnimBpNew::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(GusAnimBpNew::FAnimBlueprintGeneratedConstantData) == 0x000110, "Wrong size on GusAnimBpNew::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(GusAnimBpNew::FAnimBlueprintGeneratedConstantData, __BlendSpace_48) == 0x000008, "Member 'GusAnimBpNew::FAnimBlueprintGeneratedConstantData::__BlendSpace_48' has a wrong offset!");
static_assert(offsetof(GusAnimBpNew::FAnimBlueprintGeneratedConstantData, __NameProperty_49) == 0x000010, "Member 'GusAnimBpNew::FAnimBlueprintGeneratedConstantData::__NameProperty_49' has a wrong offset!");
static_assert(offsetof(GusAnimBpNew::FAnimBlueprintGeneratedConstantData, __IntProperty_50) == 0x000018, "Member 'GusAnimBpNew::FAnimBlueprintGeneratedConstantData::__IntProperty_50' has a wrong offset!");
static_assert(offsetof(GusAnimBpNew::FAnimBlueprintGeneratedConstantData, __BlendSpace_51) == 0x000020, "Member 'GusAnimBpNew::FAnimBlueprintGeneratedConstantData::__BlendSpace_51' has a wrong offset!");
static_assert(offsetof(GusAnimBpNew::FAnimBlueprintGeneratedConstantData, __BoolProperty_52) == 0x000028, "Member 'GusAnimBpNew::FAnimBlueprintGeneratedConstantData::__BoolProperty_52' has a wrong offset!");
static_assert(offsetof(GusAnimBpNew::FAnimBlueprintGeneratedConstantData, __FloatProperty_53) == 0x00002C, "Member 'GusAnimBpNew::FAnimBlueprintGeneratedConstantData::__FloatProperty_53' has a wrong offset!");
static_assert(offsetof(GusAnimBpNew::FAnimBlueprintGeneratedConstantData, __FloatProperty_54) == 0x000030, "Member 'GusAnimBpNew::FAnimBlueprintGeneratedConstantData::__FloatProperty_54' has a wrong offset!");
static_assert(offsetof(GusAnimBpNew::FAnimBlueprintGeneratedConstantData, __BoolProperty_55) == 0x000034, "Member 'GusAnimBpNew::FAnimBlueprintGeneratedConstantData::__BoolProperty_55' has a wrong offset!");
static_assert(offsetof(GusAnimBpNew::FAnimBlueprintGeneratedConstantData, __EnumProperty_56) == 0x000035, "Member 'GusAnimBpNew::FAnimBlueprintGeneratedConstantData::__EnumProperty_56' has a wrong offset!");
static_assert(offsetof(GusAnimBpNew::FAnimBlueprintGeneratedConstantData, __ByteProperty_57) == 0x000036, "Member 'GusAnimBpNew::FAnimBlueprintGeneratedConstantData::__ByteProperty_57' has a wrong offset!");
static_assert(offsetof(GusAnimBpNew::FAnimBlueprintGeneratedConstantData, __NameProperty_58) == 0x000038, "Member 'GusAnimBpNew::FAnimBlueprintGeneratedConstantData::__NameProperty_58' has a wrong offset!");
static_assert(offsetof(GusAnimBpNew::FAnimBlueprintGeneratedConstantData, __IntProperty_59) == 0x000040, "Member 'GusAnimBpNew::FAnimBlueprintGeneratedConstantData::__IntProperty_59' has a wrong offset!");
static_assert(offsetof(GusAnimBpNew::FAnimBlueprintGeneratedConstantData, __StructProperty_60) == 0x000048, "Member 'GusAnimBpNew::FAnimBlueprintGeneratedConstantData::__StructProperty_60' has a wrong offset!");
static_assert(offsetof(GusAnimBpNew::FAnimBlueprintGeneratedConstantData, __NameProperty_61) == 0x000068, "Member 'GusAnimBpNew::FAnimBlueprintGeneratedConstantData::__NameProperty_61' has a wrong offset!");
static_assert(offsetof(GusAnimBpNew::FAnimBlueprintGeneratedConstantData, __NameProperty_62) == 0x000070, "Member 'GusAnimBpNew::FAnimBlueprintGeneratedConstantData::__NameProperty_62' has a wrong offset!");
static_assert(offsetof(GusAnimBpNew::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000078, "Member 'GusAnimBpNew::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(GusAnimBpNew::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000F8, "Member 'GusAnimBpNew::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

