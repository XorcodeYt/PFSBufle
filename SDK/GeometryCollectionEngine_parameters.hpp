﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryCollectionEngine

#include "Basic.hpp"

#include "GeometryCollectionEngine_structs.hpp"
#include "Engine_structs.hpp"
#include "Chaos_structs.hpp"
#include "ChaosSolverEngine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
// 0x0008 (0x0008 - 0x0000)
struct ChaosDestructionListener_AddChaosSolverActor final
{
public:
	class AChaosSolverActor*                      ChaosSolverActor;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosDestructionListener_AddChaosSolverActor) == 0x000008, "Wrong alignment on ChaosDestructionListener_AddChaosSolverActor");
static_assert(sizeof(ChaosDestructionListener_AddChaosSolverActor) == 0x000008, "Wrong size on ChaosDestructionListener_AddChaosSolverActor");
static_assert(offsetof(ChaosDestructionListener_AddChaosSolverActor, ChaosSolverActor) == 0x000000, "Member 'ChaosDestructionListener_AddChaosSolverActor::ChaosSolverActor' has a wrong offset!");

// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
// 0x0008 (0x0008 - 0x0000)
struct ChaosDestructionListener_AddGeometryCollectionActor final
{
public:
	class AGeometryCollectionActor*               GeometryCollectionActor;                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosDestructionListener_AddGeometryCollectionActor) == 0x000008, "Wrong alignment on ChaosDestructionListener_AddGeometryCollectionActor");
static_assert(sizeof(ChaosDestructionListener_AddGeometryCollectionActor) == 0x000008, "Wrong size on ChaosDestructionListener_AddGeometryCollectionActor");
static_assert(offsetof(ChaosDestructionListener_AddGeometryCollectionActor, GeometryCollectionActor) == 0x000000, "Member 'ChaosDestructionListener_AddGeometryCollectionActor::GeometryCollectionActor' has a wrong offset!");

// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
// 0x0008 (0x0008 - 0x0000)
struct ChaosDestructionListener_RemoveChaosSolverActor final
{
public:
	class AChaosSolverActor*                      ChaosSolverActor;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosDestructionListener_RemoveChaosSolverActor) == 0x000008, "Wrong alignment on ChaosDestructionListener_RemoveChaosSolverActor");
static_assert(sizeof(ChaosDestructionListener_RemoveChaosSolverActor) == 0x000008, "Wrong size on ChaosDestructionListener_RemoveChaosSolverActor");
static_assert(offsetof(ChaosDestructionListener_RemoveChaosSolverActor, ChaosSolverActor) == 0x000000, "Member 'ChaosDestructionListener_RemoveChaosSolverActor::ChaosSolverActor' has a wrong offset!");

// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
// 0x0008 (0x0008 - 0x0000)
struct ChaosDestructionListener_RemoveGeometryCollectionActor final
{
public:
	class AGeometryCollectionActor*               GeometryCollectionActor;                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosDestructionListener_RemoveGeometryCollectionActor) == 0x000008, "Wrong alignment on ChaosDestructionListener_RemoveGeometryCollectionActor");
static_assert(sizeof(ChaosDestructionListener_RemoveGeometryCollectionActor) == 0x000008, "Wrong size on ChaosDestructionListener_RemoveGeometryCollectionActor");
static_assert(offsetof(ChaosDestructionListener_RemoveGeometryCollectionActor, GeometryCollectionActor) == 0x000000, "Member 'ChaosDestructionListener_RemoveGeometryCollectionActor::GeometryCollectionActor' has a wrong offset!");

// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
// 0x0001 (0x0001 - 0x0000)
struct ChaosDestructionListener_SetBreakingEventEnabled final
{
public:
	bool                                          bIsEnabled;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosDestructionListener_SetBreakingEventEnabled) == 0x000001, "Wrong alignment on ChaosDestructionListener_SetBreakingEventEnabled");
static_assert(sizeof(ChaosDestructionListener_SetBreakingEventEnabled) == 0x000001, "Wrong size on ChaosDestructionListener_SetBreakingEventEnabled");
static_assert(offsetof(ChaosDestructionListener_SetBreakingEventEnabled, bIsEnabled) == 0x000000, "Member 'ChaosDestructionListener_SetBreakingEventEnabled::bIsEnabled' has a wrong offset!");

// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
// 0x0018 (0x0018 - 0x0000)
struct ChaosDestructionListener_SetBreakingEventRequestSettings final
{
public:
	struct FChaosBreakingEventRequestSettings     InSettings;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosDestructionListener_SetBreakingEventRequestSettings) == 0x000004, "Wrong alignment on ChaosDestructionListener_SetBreakingEventRequestSettings");
static_assert(sizeof(ChaosDestructionListener_SetBreakingEventRequestSettings) == 0x000018, "Wrong size on ChaosDestructionListener_SetBreakingEventRequestSettings");
static_assert(offsetof(ChaosDestructionListener_SetBreakingEventRequestSettings, InSettings) == 0x000000, "Member 'ChaosDestructionListener_SetBreakingEventRequestSettings::InSettings' has a wrong offset!");

// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
// 0x0001 (0x0001 - 0x0000)
struct ChaosDestructionListener_SetCollisionEventEnabled final
{
public:
	bool                                          bIsEnabled;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosDestructionListener_SetCollisionEventEnabled) == 0x000001, "Wrong alignment on ChaosDestructionListener_SetCollisionEventEnabled");
static_assert(sizeof(ChaosDestructionListener_SetCollisionEventEnabled) == 0x000001, "Wrong size on ChaosDestructionListener_SetCollisionEventEnabled");
static_assert(offsetof(ChaosDestructionListener_SetCollisionEventEnabled, bIsEnabled) == 0x000000, "Member 'ChaosDestructionListener_SetCollisionEventEnabled::bIsEnabled' has a wrong offset!");

// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
// 0x0018 (0x0018 - 0x0000)
struct ChaosDestructionListener_SetCollisionEventRequestSettings final
{
public:
	struct FChaosCollisionEventRequestSettings    InSettings;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosDestructionListener_SetCollisionEventRequestSettings) == 0x000004, "Wrong alignment on ChaosDestructionListener_SetCollisionEventRequestSettings");
static_assert(sizeof(ChaosDestructionListener_SetCollisionEventRequestSettings) == 0x000018, "Wrong size on ChaosDestructionListener_SetCollisionEventRequestSettings");
static_assert(offsetof(ChaosDestructionListener_SetCollisionEventRequestSettings, InSettings) == 0x000000, "Member 'ChaosDestructionListener_SetCollisionEventRequestSettings::InSettings' has a wrong offset!");

// Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
// 0x0001 (0x0001 - 0x0000)
struct ChaosDestructionListener_SetRemovalEventEnabled final
{
public:
	bool                                          bIsEnabled;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosDestructionListener_SetRemovalEventEnabled) == 0x000001, "Wrong alignment on ChaosDestructionListener_SetRemovalEventEnabled");
static_assert(sizeof(ChaosDestructionListener_SetRemovalEventEnabled) == 0x000001, "Wrong size on ChaosDestructionListener_SetRemovalEventEnabled");
static_assert(offsetof(ChaosDestructionListener_SetRemovalEventEnabled, bIsEnabled) == 0x000000, "Member 'ChaosDestructionListener_SetRemovalEventEnabled::bIsEnabled' has a wrong offset!");

// Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
// 0x0010 (0x0010 - 0x0000)
struct ChaosDestructionListener_SetRemovalEventRequestSettings final
{
public:
	struct FChaosRemovalEventRequestSettings      InSettings;                                        // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosDestructionListener_SetRemovalEventRequestSettings) == 0x000004, "Wrong alignment on ChaosDestructionListener_SetRemovalEventRequestSettings");
static_assert(sizeof(ChaosDestructionListener_SetRemovalEventRequestSettings) == 0x000010, "Wrong size on ChaosDestructionListener_SetRemovalEventRequestSettings");
static_assert(offsetof(ChaosDestructionListener_SetRemovalEventRequestSettings, InSettings) == 0x000000, "Member 'ChaosDestructionListener_SetRemovalEventRequestSettings::InSettings' has a wrong offset!");

// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
// 0x0001 (0x0001 - 0x0000)
struct ChaosDestructionListener_SetTrailingEventEnabled final
{
public:
	bool                                          bIsEnabled;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosDestructionListener_SetTrailingEventEnabled) == 0x000001, "Wrong alignment on ChaosDestructionListener_SetTrailingEventEnabled");
static_assert(sizeof(ChaosDestructionListener_SetTrailingEventEnabled) == 0x000001, "Wrong size on ChaosDestructionListener_SetTrailingEventEnabled");
static_assert(offsetof(ChaosDestructionListener_SetTrailingEventEnabled, bIsEnabled) == 0x000000, "Member 'ChaosDestructionListener_SetTrailingEventEnabled::bIsEnabled' has a wrong offset!");

// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
// 0x0018 (0x0018 - 0x0000)
struct ChaosDestructionListener_SetTrailingEventRequestSettings final
{
public:
	struct FChaosTrailingEventRequestSettings     InSettings;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosDestructionListener_SetTrailingEventRequestSettings) == 0x000004, "Wrong alignment on ChaosDestructionListener_SetTrailingEventRequestSettings");
static_assert(sizeof(ChaosDestructionListener_SetTrailingEventRequestSettings) == 0x000018, "Wrong size on ChaosDestructionListener_SetTrailingEventRequestSettings");
static_assert(offsetof(ChaosDestructionListener_SetTrailingEventRequestSettings, InSettings) == 0x000000, "Member 'ChaosDestructionListener_SetTrailingEventRequestSettings::InSettings' has a wrong offset!");

// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
// 0x0018 (0x0018 - 0x0000)
struct ChaosDestructionListener_SortBreakingEvents final
{
public:
	TArray<struct FChaosBreakingEventData>        BreakingEvents;                                    // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	EChaosBreakingSortMethod                      SortMethod;                                        // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ChaosDestructionListener_SortBreakingEvents) == 0x000008, "Wrong alignment on ChaosDestructionListener_SortBreakingEvents");
static_assert(sizeof(ChaosDestructionListener_SortBreakingEvents) == 0x000018, "Wrong size on ChaosDestructionListener_SortBreakingEvents");
static_assert(offsetof(ChaosDestructionListener_SortBreakingEvents, BreakingEvents) == 0x000000, "Member 'ChaosDestructionListener_SortBreakingEvents::BreakingEvents' has a wrong offset!");
static_assert(offsetof(ChaosDestructionListener_SortBreakingEvents, SortMethod) == 0x000010, "Member 'ChaosDestructionListener_SortBreakingEvents::SortMethod' has a wrong offset!");

// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
// 0x0018 (0x0018 - 0x0000)
struct ChaosDestructionListener_SortCollisionEvents final
{
public:
	TArray<struct FChaosCollisionEventData>       CollisionEvents;                                   // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	EChaosCollisionSortMethod                     SortMethod;                                        // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ChaosDestructionListener_SortCollisionEvents) == 0x000008, "Wrong alignment on ChaosDestructionListener_SortCollisionEvents");
static_assert(sizeof(ChaosDestructionListener_SortCollisionEvents) == 0x000018, "Wrong size on ChaosDestructionListener_SortCollisionEvents");
static_assert(offsetof(ChaosDestructionListener_SortCollisionEvents, CollisionEvents) == 0x000000, "Member 'ChaosDestructionListener_SortCollisionEvents::CollisionEvents' has a wrong offset!");
static_assert(offsetof(ChaosDestructionListener_SortCollisionEvents, SortMethod) == 0x000010, "Member 'ChaosDestructionListener_SortCollisionEvents::SortMethod' has a wrong offset!");

// Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
// 0x0018 (0x0018 - 0x0000)
struct ChaosDestructionListener_SortRemovalEvents final
{
public:
	TArray<struct FChaosRemovalEventData>         RemovalEvents;                                     // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	EChaosRemovalSortMethod                       SortMethod;                                        // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ChaosDestructionListener_SortRemovalEvents) == 0x000008, "Wrong alignment on ChaosDestructionListener_SortRemovalEvents");
static_assert(sizeof(ChaosDestructionListener_SortRemovalEvents) == 0x000018, "Wrong size on ChaosDestructionListener_SortRemovalEvents");
static_assert(offsetof(ChaosDestructionListener_SortRemovalEvents, RemovalEvents) == 0x000000, "Member 'ChaosDestructionListener_SortRemovalEvents::RemovalEvents' has a wrong offset!");
static_assert(offsetof(ChaosDestructionListener_SortRemovalEvents, SortMethod) == 0x000010, "Member 'ChaosDestructionListener_SortRemovalEvents::SortMethod' has a wrong offset!");

// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
// 0x0018 (0x0018 - 0x0000)
struct ChaosDestructionListener_SortTrailingEvents final
{
public:
	TArray<struct FChaosTrailingEventData>        TrailingEvents;                                    // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	EChaosTrailingSortMethod                      SortMethod;                                        // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ChaosDestructionListener_SortTrailingEvents) == 0x000008, "Wrong alignment on ChaosDestructionListener_SortTrailingEvents");
static_assert(sizeof(ChaosDestructionListener_SortTrailingEvents) == 0x000018, "Wrong size on ChaosDestructionListener_SortTrailingEvents");
static_assert(offsetof(ChaosDestructionListener_SortTrailingEvents, TrailingEvents) == 0x000000, "Member 'ChaosDestructionListener_SortTrailingEvents::TrailingEvents' has a wrong offset!");
static_assert(offsetof(ChaosDestructionListener_SortTrailingEvents, SortMethod) == 0x000010, "Member 'ChaosDestructionListener_SortTrailingEvents::SortMethod' has a wrong offset!");

// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
// 0x0001 (0x0001 - 0x0000)
struct ChaosDestructionListener_IsEventListening final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosDestructionListener_IsEventListening) == 0x000001, "Wrong alignment on ChaosDestructionListener_IsEventListening");
static_assert(sizeof(ChaosDestructionListener_IsEventListening) == 0x000001, "Wrong size on ChaosDestructionListener_IsEventListening");
static_assert(offsetof(ChaosDestructionListener_IsEventListening, ReturnValue) == 0x000000, "Member 'ChaosDestructionListener_IsEventListening::ReturnValue' has a wrong offset!");

// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
// 0x0120 (0x0120 - 0x0000)
struct GeometryCollectionActor_RaycastSingle final
{
public:
	struct FVector                                Start;                                             // 0x0000(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                End;                                               // 0x0018(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                             OutHit;                                            // 0x0030(0x00E8)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0118(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GeometryCollectionActor_RaycastSingle) == 0x000008, "Wrong alignment on GeometryCollectionActor_RaycastSingle");
static_assert(sizeof(GeometryCollectionActor_RaycastSingle) == 0x000120, "Wrong size on GeometryCollectionActor_RaycastSingle");
static_assert(offsetof(GeometryCollectionActor_RaycastSingle, Start) == 0x000000, "Member 'GeometryCollectionActor_RaycastSingle::Start' has a wrong offset!");
static_assert(offsetof(GeometryCollectionActor_RaycastSingle, End) == 0x000018, "Member 'GeometryCollectionActor_RaycastSingle::End' has a wrong offset!");
static_assert(offsetof(GeometryCollectionActor_RaycastSingle, OutHit) == 0x000030, "Member 'GeometryCollectionActor_RaycastSingle::OutHit' has a wrong offset!");
static_assert(offsetof(GeometryCollectionActor_RaycastSingle, ReturnValue) == 0x000118, "Member 'GeometryCollectionActor_RaycastSingle::ReturnValue' has a wrong offset!");

// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
// 0x0020 (0x0020 - 0x0000)
struct GeometryCollectionComponent_ApplyKinematicField final
{
public:
	float                                         Radius;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Position;                                          // 0x0008(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCollectionComponent_ApplyKinematicField) == 0x000008, "Wrong alignment on GeometryCollectionComponent_ApplyKinematicField");
static_assert(sizeof(GeometryCollectionComponent_ApplyKinematicField) == 0x000020, "Wrong size on GeometryCollectionComponent_ApplyKinematicField");
static_assert(offsetof(GeometryCollectionComponent_ApplyKinematicField, Radius) == 0x000000, "Member 'GeometryCollectionComponent_ApplyKinematicField::Radius' has a wrong offset!");
static_assert(offsetof(GeometryCollectionComponent_ApplyKinematicField, Position) == 0x000008, "Member 'GeometryCollectionComponent_ApplyKinematicField::Position' has a wrong offset!");

// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
// 0x0018 (0x0018 - 0x0000)
struct GeometryCollectionComponent_ApplyPhysicsField final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGeometryCollectionPhysicsTypeEnum            Target;                                            // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFieldSystemMetaData*                   MetaData;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFieldNodeBase*                         Field;                                             // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCollectionComponent_ApplyPhysicsField) == 0x000008, "Wrong alignment on GeometryCollectionComponent_ApplyPhysicsField");
static_assert(sizeof(GeometryCollectionComponent_ApplyPhysicsField) == 0x000018, "Wrong size on GeometryCollectionComponent_ApplyPhysicsField");
static_assert(offsetof(GeometryCollectionComponent_ApplyPhysicsField, Enabled) == 0x000000, "Member 'GeometryCollectionComponent_ApplyPhysicsField::Enabled' has a wrong offset!");
static_assert(offsetof(GeometryCollectionComponent_ApplyPhysicsField, Target) == 0x000001, "Member 'GeometryCollectionComponent_ApplyPhysicsField::Target' has a wrong offset!");
static_assert(offsetof(GeometryCollectionComponent_ApplyPhysicsField, MetaData) == 0x000008, "Member 'GeometryCollectionComponent_ApplyPhysicsField::MetaData' has a wrong offset!");
static_assert(offsetof(GeometryCollectionComponent_ApplyPhysicsField, Field) == 0x000010, "Member 'GeometryCollectionComponent_ApplyPhysicsField::Field' has a wrong offset!");

// Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster
// 0x0004 (0x0004 - 0x0000)
struct GeometryCollectionComponent_NetAbandonCluster final
{
public:
	int32                                         TransformIndex;                                    // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCollectionComponent_NetAbandonCluster) == 0x000004, "Wrong alignment on GeometryCollectionComponent_NetAbandonCluster");
static_assert(sizeof(GeometryCollectionComponent_NetAbandonCluster) == 0x000004, "Wrong size on GeometryCollectionComponent_NetAbandonCluster");
static_assert(offsetof(GeometryCollectionComponent_NetAbandonCluster, TransformIndex) == 0x000000, "Member 'GeometryCollectionComponent_NetAbandonCluster::TransformIndex' has a wrong offset!");

// Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
// 0x0018 (0x0018 - 0x0000)
struct GeometryCollectionComponent_OnRep_RepData final
{
public:
	struct FGeometryCollectionRepData             OldData;                                           // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCollectionComponent_OnRep_RepData) == 0x000008, "Wrong alignment on GeometryCollectionComponent_OnRep_RepData");
static_assert(sizeof(GeometryCollectionComponent_OnRep_RepData) == 0x000018, "Wrong size on GeometryCollectionComponent_OnRep_RepData");
static_assert(offsetof(GeometryCollectionComponent_OnRep_RepData, OldData) == 0x000000, "Member 'GeometryCollectionComponent_OnRep_RepData::OldData' has a wrong offset!");

// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
// 0x00C0 (0x00C0 - 0x0000)
struct GeometryCollectionComponent_ReceivePhysicsCollision final
{
public:
	struct FChaosPhysicsCollisionInfo             CollisionInfo;                                     // 0x0000(0x00C0)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCollectionComponent_ReceivePhysicsCollision) == 0x000008, "Wrong alignment on GeometryCollectionComponent_ReceivePhysicsCollision");
static_assert(sizeof(GeometryCollectionComponent_ReceivePhysicsCollision) == 0x0000C0, "Wrong size on GeometryCollectionComponent_ReceivePhysicsCollision");
static_assert(offsetof(GeometryCollectionComponent_ReceivePhysicsCollision, CollisionInfo) == 0x000000, "Member 'GeometryCollectionComponent_ReceivePhysicsCollision::CollisionInfo' has a wrong offset!");

// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
// 0x0001 (0x0001 - 0x0000)
struct GeometryCollectionComponent_SetNotifyBreaks final
{
public:
	bool                                          bNewNotifyBreaks;                                  // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCollectionComponent_SetNotifyBreaks) == 0x000001, "Wrong alignment on GeometryCollectionComponent_SetNotifyBreaks");
static_assert(sizeof(GeometryCollectionComponent_SetNotifyBreaks) == 0x000001, "Wrong size on GeometryCollectionComponent_SetNotifyBreaks");
static_assert(offsetof(GeometryCollectionComponent_SetNotifyBreaks, bNewNotifyBreaks) == 0x000000, "Member 'GeometryCollectionComponent_SetNotifyBreaks::bNewNotifyBreaks' has a wrong offset!");

// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
// 0x0001 (0x0001 - 0x0000)
struct GeometryCollectionComponent_SetNotifyRemovals final
{
public:
	bool                                          bNewNotifyRemovals;                                // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCollectionComponent_SetNotifyRemovals) == 0x000001, "Wrong alignment on GeometryCollectionComponent_SetNotifyRemovals");
static_assert(sizeof(GeometryCollectionComponent_SetNotifyRemovals) == 0x000001, "Wrong size on GeometryCollectionComponent_SetNotifyRemovals");
static_assert(offsetof(GeometryCollectionComponent_SetNotifyRemovals, bNewNotifyRemovals) == 0x000000, "Member 'GeometryCollectionComponent_SetNotifyRemovals::bNewNotifyRemovals' has a wrong offset!");

}

