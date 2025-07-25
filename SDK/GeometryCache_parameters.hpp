﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryCache

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GeometryCache_structs.hpp"


namespace SDK::Params
{

// Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
// 0x0008 (0x0008 - 0x0000)
struct GeometryCacheActor_GetGeometryCacheComponent final
{
public:
	class UGeometryCacheComponent*                ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheActor_GetGeometryCacheComponent) == 0x000008, "Wrong alignment on GeometryCacheActor_GetGeometryCacheComponent");
static_assert(sizeof(GeometryCacheActor_GetGeometryCacheComponent) == 0x000008, "Wrong size on GeometryCacheActor_GetGeometryCacheComponent");
static_assert(offsetof(GeometryCacheActor_GetGeometryCacheComponent, ReturnValue) == 0x000000, "Member 'GeometryCacheActor_GetGeometryCacheComponent::ReturnValue' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
// 0x0001 (0x0001 - 0x0000)
struct GeometryCacheComponent_SetExtrapolateFrames final
{
public:
	bool                                          bNewExtrapolating;                                 // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_SetExtrapolateFrames) == 0x000001, "Wrong alignment on GeometryCacheComponent_SetExtrapolateFrames");
static_assert(sizeof(GeometryCacheComponent_SetExtrapolateFrames) == 0x000001, "Wrong size on GeometryCacheComponent_SetExtrapolateFrames");
static_assert(offsetof(GeometryCacheComponent_SetExtrapolateFrames, bNewExtrapolating) == 0x000000, "Member 'GeometryCacheComponent_SetExtrapolateFrames::bNewExtrapolating' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.SetGeometryCache
// 0x0010 (0x0010 - 0x0000)
struct GeometryCacheComponent_SetGeometryCache final
{
public:
	class UGeometryCache*                         NewGeomCache;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GeometryCacheComponent_SetGeometryCache) == 0x000008, "Wrong alignment on GeometryCacheComponent_SetGeometryCache");
static_assert(sizeof(GeometryCacheComponent_SetGeometryCache) == 0x000010, "Wrong size on GeometryCacheComponent_SetGeometryCache");
static_assert(offsetof(GeometryCacheComponent_SetGeometryCache, NewGeomCache) == 0x000000, "Member 'GeometryCacheComponent_SetGeometryCache::NewGeomCache' has a wrong offset!");
static_assert(offsetof(GeometryCacheComponent_SetGeometryCache, ReturnValue) == 0x000008, "Member 'GeometryCacheComponent_SetGeometryCache::ReturnValue' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.SetLooping
// 0x0001 (0x0001 - 0x0000)
struct GeometryCacheComponent_SetLooping final
{
public:
	bool                                          bNewLooping;                                       // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_SetLooping) == 0x000001, "Wrong alignment on GeometryCacheComponent_SetLooping");
static_assert(sizeof(GeometryCacheComponent_SetLooping) == 0x000001, "Wrong size on GeometryCacheComponent_SetLooping");
static_assert(offsetof(GeometryCacheComponent_SetLooping, bNewLooping) == 0x000000, "Member 'GeometryCacheComponent_SetLooping::bNewLooping' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_SetMotionVectorScale final
{
public:
	float                                         NewMotionVectorScale;                              // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_SetMotionVectorScale) == 0x000004, "Wrong alignment on GeometryCacheComponent_SetMotionVectorScale");
static_assert(sizeof(GeometryCacheComponent_SetMotionVectorScale) == 0x000004, "Wrong size on GeometryCacheComponent_SetMotionVectorScale");
static_assert(offsetof(GeometryCacheComponent_SetMotionVectorScale, NewMotionVectorScale) == 0x000000, "Member 'GeometryCacheComponent_SetMotionVectorScale::NewMotionVectorScale' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.SetOverrideWireframeColor
// 0x0001 (0x0001 - 0x0000)
struct GeometryCacheComponent_SetOverrideWireframeColor final
{
public:
	bool                                          bOverride;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_SetOverrideWireframeColor) == 0x000001, "Wrong alignment on GeometryCacheComponent_SetOverrideWireframeColor");
static_assert(sizeof(GeometryCacheComponent_SetOverrideWireframeColor) == 0x000001, "Wrong size on GeometryCacheComponent_SetOverrideWireframeColor");
static_assert(offsetof(GeometryCacheComponent_SetOverrideWireframeColor, bOverride) == 0x000000, "Member 'GeometryCacheComponent_SetOverrideWireframeColor::bOverride' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_SetPlaybackSpeed final
{
public:
	float                                         NewPlaybackSpeed;                                  // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_SetPlaybackSpeed) == 0x000004, "Wrong alignment on GeometryCacheComponent_SetPlaybackSpeed");
static_assert(sizeof(GeometryCacheComponent_SetPlaybackSpeed) == 0x000004, "Wrong size on GeometryCacheComponent_SetPlaybackSpeed");
static_assert(offsetof(GeometryCacheComponent_SetPlaybackSpeed, NewPlaybackSpeed) == 0x000000, "Member 'GeometryCacheComponent_SetPlaybackSpeed::NewPlaybackSpeed' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_SetStartTimeOffset final
{
public:
	float                                         NewStartTimeOffset;                                // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_SetStartTimeOffset) == 0x000004, "Wrong alignment on GeometryCacheComponent_SetStartTimeOffset");
static_assert(sizeof(GeometryCacheComponent_SetStartTimeOffset) == 0x000004, "Wrong size on GeometryCacheComponent_SetStartTimeOffset");
static_assert(offsetof(GeometryCacheComponent_SetStartTimeOffset, NewStartTimeOffset) == 0x000000, "Member 'GeometryCacheComponent_SetStartTimeOffset::NewStartTimeOffset' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.SetWireframeOverrideColor
// 0x0010 (0x0010 - 0x0000)
struct GeometryCacheComponent_SetWireframeOverrideColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_SetWireframeOverrideColor) == 0x000004, "Wrong alignment on GeometryCacheComponent_SetWireframeOverrideColor");
static_assert(sizeof(GeometryCacheComponent_SetWireframeOverrideColor) == 0x000010, "Wrong size on GeometryCacheComponent_SetWireframeOverrideColor");
static_assert(offsetof(GeometryCacheComponent_SetWireframeOverrideColor, Color) == 0x000000, "Member 'GeometryCacheComponent_SetWireframeOverrideColor::Color' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.TickAtThisTime
// 0x0008 (0x0008 - 0x0000)
struct GeometryCacheComponent_TickAtThisTime final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInIsRunning;                                      // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInBackwards;                                      // 0x0005(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInIsLooping;                                      // 0x0006(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GeometryCacheComponent_TickAtThisTime) == 0x000004, "Wrong alignment on GeometryCacheComponent_TickAtThisTime");
static_assert(sizeof(GeometryCacheComponent_TickAtThisTime) == 0x000008, "Wrong size on GeometryCacheComponent_TickAtThisTime");
static_assert(offsetof(GeometryCacheComponent_TickAtThisTime, Time) == 0x000000, "Member 'GeometryCacheComponent_TickAtThisTime::Time' has a wrong offset!");
static_assert(offsetof(GeometryCacheComponent_TickAtThisTime, bInIsRunning) == 0x000004, "Member 'GeometryCacheComponent_TickAtThisTime::bInIsRunning' has a wrong offset!");
static_assert(offsetof(GeometryCacheComponent_TickAtThisTime, bInBackwards) == 0x000005, "Member 'GeometryCacheComponent_TickAtThisTime::bInBackwards' has a wrong offset!");
static_assert(offsetof(GeometryCacheComponent_TickAtThisTime, bInIsLooping) == 0x000006, "Member 'GeometryCacheComponent_TickAtThisTime::bInIsLooping' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.GetAnimationTime
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_GetAnimationTime final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_GetAnimationTime) == 0x000004, "Wrong alignment on GeometryCacheComponent_GetAnimationTime");
static_assert(sizeof(GeometryCacheComponent_GetAnimationTime) == 0x000004, "Wrong size on GeometryCacheComponent_GetAnimationTime");
static_assert(offsetof(GeometryCacheComponent_GetAnimationTime, ReturnValue) == 0x000000, "Member 'GeometryCacheComponent_GetAnimationTime::ReturnValue' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.GetDuration
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_GetDuration final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_GetDuration) == 0x000004, "Wrong alignment on GeometryCacheComponent_GetDuration");
static_assert(sizeof(GeometryCacheComponent_GetDuration) == 0x000004, "Wrong size on GeometryCacheComponent_GetDuration");
static_assert(offsetof(GeometryCacheComponent_GetDuration, ReturnValue) == 0x000000, "Member 'GeometryCacheComponent_GetDuration::ReturnValue' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_GetMotionVectorScale final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_GetMotionVectorScale) == 0x000004, "Wrong alignment on GeometryCacheComponent_GetMotionVectorScale");
static_assert(sizeof(GeometryCacheComponent_GetMotionVectorScale) == 0x000004, "Wrong size on GeometryCacheComponent_GetMotionVectorScale");
static_assert(offsetof(GeometryCacheComponent_GetMotionVectorScale, ReturnValue) == 0x000000, "Member 'GeometryCacheComponent_GetMotionVectorScale::ReturnValue' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_GetNumberOfFrames final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_GetNumberOfFrames) == 0x000004, "Wrong alignment on GeometryCacheComponent_GetNumberOfFrames");
static_assert(sizeof(GeometryCacheComponent_GetNumberOfFrames) == 0x000004, "Wrong size on GeometryCacheComponent_GetNumberOfFrames");
static_assert(offsetof(GeometryCacheComponent_GetNumberOfFrames, ReturnValue) == 0x000000, "Member 'GeometryCacheComponent_GetNumberOfFrames::ReturnValue' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.GetOverrideWireframeColor
// 0x0001 (0x0001 - 0x0000)
struct GeometryCacheComponent_GetOverrideWireframeColor final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_GetOverrideWireframeColor) == 0x000001, "Wrong alignment on GeometryCacheComponent_GetOverrideWireframeColor");
static_assert(sizeof(GeometryCacheComponent_GetOverrideWireframeColor) == 0x000001, "Wrong size on GeometryCacheComponent_GetOverrideWireframeColor");
static_assert(offsetof(GeometryCacheComponent_GetOverrideWireframeColor, ReturnValue) == 0x000000, "Member 'GeometryCacheComponent_GetOverrideWireframeColor::ReturnValue' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_GetPlaybackDirection final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_GetPlaybackDirection) == 0x000004, "Wrong alignment on GeometryCacheComponent_GetPlaybackDirection");
static_assert(sizeof(GeometryCacheComponent_GetPlaybackDirection) == 0x000004, "Wrong size on GeometryCacheComponent_GetPlaybackDirection");
static_assert(offsetof(GeometryCacheComponent_GetPlaybackDirection, ReturnValue) == 0x000000, "Member 'GeometryCacheComponent_GetPlaybackDirection::ReturnValue' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_GetPlaybackSpeed final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_GetPlaybackSpeed) == 0x000004, "Wrong alignment on GeometryCacheComponent_GetPlaybackSpeed");
static_assert(sizeof(GeometryCacheComponent_GetPlaybackSpeed) == 0x000004, "Wrong size on GeometryCacheComponent_GetPlaybackSpeed");
static_assert(offsetof(GeometryCacheComponent_GetPlaybackSpeed, ReturnValue) == 0x000000, "Member 'GeometryCacheComponent_GetPlaybackSpeed::ReturnValue' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_GetStartTimeOffset final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_GetStartTimeOffset) == 0x000004, "Wrong alignment on GeometryCacheComponent_GetStartTimeOffset");
static_assert(sizeof(GeometryCacheComponent_GetStartTimeOffset) == 0x000004, "Wrong size on GeometryCacheComponent_GetStartTimeOffset");
static_assert(offsetof(GeometryCacheComponent_GetStartTimeOffset, ReturnValue) == 0x000000, "Member 'GeometryCacheComponent_GetStartTimeOffset::ReturnValue' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.GetWireframeOverrideColor
// 0x0010 (0x0010 - 0x0000)
struct GeometryCacheComponent_GetWireframeOverrideColor final
{
public:
	struct FLinearColor                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_GetWireframeOverrideColor) == 0x000004, "Wrong alignment on GeometryCacheComponent_GetWireframeOverrideColor");
static_assert(sizeof(GeometryCacheComponent_GetWireframeOverrideColor) == 0x000010, "Wrong size on GeometryCacheComponent_GetWireframeOverrideColor");
static_assert(offsetof(GeometryCacheComponent_GetWireframeOverrideColor, ReturnValue) == 0x000000, "Member 'GeometryCacheComponent_GetWireframeOverrideColor::ReturnValue' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
// 0x0001 (0x0001 - 0x0000)
struct GeometryCacheComponent_IsExtrapolatingFrames final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_IsExtrapolatingFrames) == 0x000001, "Wrong alignment on GeometryCacheComponent_IsExtrapolatingFrames");
static_assert(sizeof(GeometryCacheComponent_IsExtrapolatingFrames) == 0x000001, "Wrong size on GeometryCacheComponent_IsExtrapolatingFrames");
static_assert(offsetof(GeometryCacheComponent_IsExtrapolatingFrames, ReturnValue) == 0x000000, "Member 'GeometryCacheComponent_IsExtrapolatingFrames::ReturnValue' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.IsLooping
// 0x0001 (0x0001 - 0x0000)
struct GeometryCacheComponent_IsLooping final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_IsLooping) == 0x000001, "Wrong alignment on GeometryCacheComponent_IsLooping");
static_assert(sizeof(GeometryCacheComponent_IsLooping) == 0x000001, "Wrong size on GeometryCacheComponent_IsLooping");
static_assert(offsetof(GeometryCacheComponent_IsLooping, ReturnValue) == 0x000000, "Member 'GeometryCacheComponent_IsLooping::ReturnValue' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.IsPlaying
// 0x0001 (0x0001 - 0x0000)
struct GeometryCacheComponent_IsPlaying final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_IsPlaying) == 0x000001, "Wrong alignment on GeometryCacheComponent_IsPlaying");
static_assert(sizeof(GeometryCacheComponent_IsPlaying) == 0x000001, "Wrong size on GeometryCacheComponent_IsPlaying");
static_assert(offsetof(GeometryCacheComponent_IsPlaying, ReturnValue) == 0x000000, "Member 'GeometryCacheComponent_IsPlaying::ReturnValue' has a wrong offset!");

// Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
// 0x0001 (0x0001 - 0x0000)
struct GeometryCacheComponent_IsPlayingReversed final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheComponent_IsPlayingReversed) == 0x000001, "Wrong alignment on GeometryCacheComponent_IsPlayingReversed");
static_assert(sizeof(GeometryCacheComponent_IsPlayingReversed) == 0x000001, "Wrong size on GeometryCacheComponent_IsPlayingReversed");
static_assert(offsetof(GeometryCacheComponent_IsPlayingReversed, ReturnValue) == 0x000000, "Member 'GeometryCacheComponent_IsPlayingReversed::ReturnValue' has a wrong offset!");

// Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
// 0x00D0 (0x00D0 - 0x0000)
struct GeometryCacheTrack_FlipbookAnimation_AddMeshSample final
{
public:
	struct FGeometryCacheMeshData                 MeshData;                                          // 0x0000(0x00C8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                         SampleTime;                                        // 0x00C8(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GeometryCacheTrack_FlipbookAnimation_AddMeshSample) == 0x000008, "Wrong alignment on GeometryCacheTrack_FlipbookAnimation_AddMeshSample");
static_assert(sizeof(GeometryCacheTrack_FlipbookAnimation_AddMeshSample) == 0x0000D0, "Wrong size on GeometryCacheTrack_FlipbookAnimation_AddMeshSample");
static_assert(offsetof(GeometryCacheTrack_FlipbookAnimation_AddMeshSample, MeshData) == 0x000000, "Member 'GeometryCacheTrack_FlipbookAnimation_AddMeshSample::MeshData' has a wrong offset!");
static_assert(offsetof(GeometryCacheTrack_FlipbookAnimation_AddMeshSample, SampleTime) == 0x0000C8, "Member 'GeometryCacheTrack_FlipbookAnimation_AddMeshSample::SampleTime' has a wrong offset!");

// Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
// 0x00C8 (0x00C8 - 0x0000)
struct GeometryCacheTrack_TransformAnimation_SetMesh final
{
public:
	struct FGeometryCacheMeshData                 NewMeshData;                                       // 0x0000(0x00C8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheTrack_TransformAnimation_SetMesh) == 0x000008, "Wrong alignment on GeometryCacheTrack_TransformAnimation_SetMesh");
static_assert(sizeof(GeometryCacheTrack_TransformAnimation_SetMesh) == 0x0000C8, "Wrong size on GeometryCacheTrack_TransformAnimation_SetMesh");
static_assert(offsetof(GeometryCacheTrack_TransformAnimation_SetMesh, NewMeshData) == 0x000000, "Member 'GeometryCacheTrack_TransformAnimation_SetMesh::NewMeshData' has a wrong offset!");

// Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
// 0x00C8 (0x00C8 - 0x0000)
struct GeometryCacheTrack_TransformGroupAnimation_SetMesh final
{
public:
	struct FGeometryCacheMeshData                 NewMeshData;                                       // 0x0000(0x00C8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(GeometryCacheTrack_TransformGroupAnimation_SetMesh) == 0x000008, "Wrong alignment on GeometryCacheTrack_TransformGroupAnimation_SetMesh");
static_assert(sizeof(GeometryCacheTrack_TransformGroupAnimation_SetMesh) == 0x0000C8, "Wrong size on GeometryCacheTrack_TransformGroupAnimation_SetMesh");
static_assert(offsetof(GeometryCacheTrack_TransformGroupAnimation_SetMesh, NewMeshData) == 0x000000, "Member 'GeometryCacheTrack_TransformGroupAnimation_SetMesh::NewMeshData' has a wrong offset!");

}

