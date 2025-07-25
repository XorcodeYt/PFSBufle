﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IKRig

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "IKRig_structs.hpp"


namespace SDK::Params
{

// Function IKRig.IKRigComponent.SetIKRigGoal
// 0x00A0 (0x00A0 - 0x0000)
struct IKRigComponent_SetIKRigGoal final
{
public:
	struct FIKRigGoal                             Goal;                                              // 0x0000(0x00A0)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(IKRigComponent_SetIKRigGoal) == 0x000010, "Wrong alignment on IKRigComponent_SetIKRigGoal");
static_assert(sizeof(IKRigComponent_SetIKRigGoal) == 0x0000A0, "Wrong size on IKRigComponent_SetIKRigGoal");
static_assert(offsetof(IKRigComponent_SetIKRigGoal, Goal) == 0x000000, "Member 'IKRigComponent_SetIKRigGoal::Goal' has a wrong offset!");

// Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
// 0x0050 (0x0050 - 0x0000)
struct IKRigComponent_SetIKRigGoalPositionAndRotation final
{
public:
	class FName                                   GoalName;                                          // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Position;                                          // 0x0008(0x0018)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                  Rotation;                                          // 0x0020(0x0020)(ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                         PositionAlpha;                                     // 0x0040(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationAlpha;                                     // 0x0044(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_48[0x8];                                       // 0x0048(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(IKRigComponent_SetIKRigGoalPositionAndRotation) == 0x000010, "Wrong alignment on IKRigComponent_SetIKRigGoalPositionAndRotation");
static_assert(sizeof(IKRigComponent_SetIKRigGoalPositionAndRotation) == 0x000050, "Wrong size on IKRigComponent_SetIKRigGoalPositionAndRotation");
static_assert(offsetof(IKRigComponent_SetIKRigGoalPositionAndRotation, GoalName) == 0x000000, "Member 'IKRigComponent_SetIKRigGoalPositionAndRotation::GoalName' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalPositionAndRotation, Position) == 0x000008, "Member 'IKRigComponent_SetIKRigGoalPositionAndRotation::Position' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalPositionAndRotation, Rotation) == 0x000020, "Member 'IKRigComponent_SetIKRigGoalPositionAndRotation::Rotation' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalPositionAndRotation, PositionAlpha) == 0x000040, "Member 'IKRigComponent_SetIKRigGoalPositionAndRotation::PositionAlpha' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalPositionAndRotation, RotationAlpha) == 0x000044, "Member 'IKRigComponent_SetIKRigGoalPositionAndRotation::RotationAlpha' has a wrong offset!");

// Function IKRig.IKRigComponent.SetIKRigGoalTransform
// 0x0080 (0x0080 - 0x0000)
struct IKRigComponent_SetIKRigGoalTransform final
{
public:
	class FName                                   GoalName;                                          // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Transform;                                         // 0x0010(0x0060)(ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                         PositionAlpha;                                     // 0x0070(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationAlpha;                                     // 0x0074(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_78[0x8];                                       // 0x0078(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(IKRigComponent_SetIKRigGoalTransform) == 0x000010, "Wrong alignment on IKRigComponent_SetIKRigGoalTransform");
static_assert(sizeof(IKRigComponent_SetIKRigGoalTransform) == 0x000080, "Wrong size on IKRigComponent_SetIKRigGoalTransform");
static_assert(offsetof(IKRigComponent_SetIKRigGoalTransform, GoalName) == 0x000000, "Member 'IKRigComponent_SetIKRigGoalTransform::GoalName' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalTransform, Transform) == 0x000010, "Member 'IKRigComponent_SetIKRigGoalTransform::Transform' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalTransform, PositionAlpha) == 0x000070, "Member 'IKRigComponent_SetIKRigGoalTransform::PositionAlpha' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalTransform, RotationAlpha) == 0x000074, "Member 'IKRigComponent_SetIKRigGoalTransform::RotationAlpha' has a wrong offset!");

// Function IKRig.IKGoalCreatorInterface.AddIKGoals
// 0x0050 (0x0050 - 0x0000)
struct IKGoalCreatorInterface_AddIKGoals final
{
public:
	TMap<class FName, struct FIKRigGoal>          OutGoals;                                          // 0x0000(0x0050)(Parm, OutParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(IKGoalCreatorInterface_AddIKGoals) == 0x000008, "Wrong alignment on IKGoalCreatorInterface_AddIKGoals");
static_assert(sizeof(IKGoalCreatorInterface_AddIKGoals) == 0x000050, "Wrong size on IKGoalCreatorInterface_AddIKGoals");
static_assert(offsetof(IKGoalCreatorInterface_AddIKGoals, OutGoals) == 0x000000, "Member 'IKGoalCreatorInterface_AddIKGoals::OutGoals' has a wrong offset!");

}

