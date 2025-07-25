﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioCapture

#include "Basic.hpp"

#include "AudioMixer_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class AudioCapture.AudioCapture
// 0x0008 (0x00B0 - 0x00A8)
class UAudioCapture final : public UAudioGenerator
{
public:
	uint8                                         Pad_A8[0x8];                                       // 0x00A8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo* OutInfo);
	bool IsCapturingAudio();
	void StartCapturingAudio();
	void StopCapturingAudio();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioCapture">();
	}
	static class UAudioCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioCapture>();
	}
};
static_assert(alignof(UAudioCapture) == 0x000008, "Wrong alignment on UAudioCapture");
static_assert(sizeof(UAudioCapture) == 0x0000B0, "Wrong size on UAudioCapture");

// Class AudioCapture.AudioCaptureFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioCaptureFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UAudioCapture* CreateAudioCapture();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioCaptureFunctionLibrary">();
	}
	static class UAudioCaptureFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioCaptureFunctionLibrary>();
	}
};
static_assert(alignof(UAudioCaptureFunctionLibrary) == 0x000008, "Wrong alignment on UAudioCaptureFunctionLibrary");
static_assert(sizeof(UAudioCaptureFunctionLibrary) == 0x000028, "Wrong size on UAudioCaptureFunctionLibrary");

// Class AudioCapture.AudioCaptureBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioCaptureBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class FString Conv_AudioInputDeviceInfoToString(const struct FAudioInputDeviceInfo& Info);
	static void GetAvailableAudioInputDevices(const class UObject* WorldContextObject, const TDelegate<void(const TArray<struct FAudioInputDeviceInfo>& AvailableDevices)>& OnObtainDevicesEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioCaptureBlueprintLibrary">();
	}
	static class UAudioCaptureBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioCaptureBlueprintLibrary>();
	}
};
static_assert(alignof(UAudioCaptureBlueprintLibrary) == 0x000008, "Wrong alignment on UAudioCaptureBlueprintLibrary");
static_assert(sizeof(UAudioCaptureBlueprintLibrary) == 0x000028, "Wrong size on UAudioCaptureBlueprintLibrary");

// Class AudioCapture.AudioCaptureComponent
// 0x00C0 (0x0860 - 0x07A0)
class UAudioCaptureComponent final : public USynthComponent
{
public:
	int32                                         JitterLatencyFrames;                               // 0x07A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_7A4[0xBC];                                     // 0x07A4(0x00BC)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioCaptureComponent">();
	}
	static class UAudioCaptureComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioCaptureComponent>();
	}
};
static_assert(alignof(UAudioCaptureComponent) == 0x000010, "Wrong alignment on UAudioCaptureComponent");
static_assert(sizeof(UAudioCaptureComponent) == 0x000860, "Wrong size on UAudioCaptureComponent");
static_assert(offsetof(UAudioCaptureComponent, JitterLatencyFrames) == 0x0007A0, "Member 'UAudioCaptureComponent::JitterLatencyFrames' has a wrong offset!");

}

