﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CTF_Flag_Red

#include "Basic.hpp"

#include "CTF_Flag_Red_classes.hpp"
#include "CTF_Flag_Red_parameters.hpp"


namespace SDK
{

// Function CTF_Flag_Red.CTF_Flag_Red_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACTF_Flag_Red_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CTF_Flag_Red_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CTF_Flag_Red.CTF_Flag_Red_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACTF_Flag_Red_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CTF_Flag_Red_C", "ReceiveActorBeginOverlap");

	Params::CTF_Flag_Red_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CTF_Flag_Red.CTF_Flag_Red_C.ExecuteUbergraph_CTF_Flag_Red
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACTF_Flag_Red_C::ExecuteUbergraph_CTF_Flag_Red(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CTF_Flag_Red_C", "ExecuteUbergraph_CTF_Flag_Red");

	Params::CTF_Flag_Red_C_ExecuteUbergraph_CTF_Flag_Red Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

