﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KilledBy

#include "Basic.hpp"

#include "KilledBy_classes.hpp"
#include "KilledBy_parameters.hpp"


namespace SDK
{

// Function KilledBy.KilledBy_C.Get Killer Team
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateColor UKilledBy_C::Get_Killer_Team()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KilledBy_C", "Get Killer Team");

	Params::KilledBy_C_Get_Killer_Team Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function KilledBy.KilledBy_C.Get Killer name
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UKilledBy_C::Get_Killer_name()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KilledBy_C", "Get Killer name");

	Params::KilledBy_C_Get_Killer_name Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function KilledBy.KilledBy_C.ExecuteUbergraph_KilledBy
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKilledBy_C::ExecuteUbergraph_KilledBy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KilledBy_C", "ExecuteUbergraph_KilledBy");

	Params::KilledBy_C_ExecuteUbergraph_KilledBy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KilledBy.KilledBy_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKilledBy_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KilledBy_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

