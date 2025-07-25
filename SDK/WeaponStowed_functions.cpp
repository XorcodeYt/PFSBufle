﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponStowed

#include "Basic.hpp"

#include "WeaponStowed_classes.hpp"
#include "WeaponStowed_parameters.hpp"


namespace SDK
{

// Function WeaponStowed.WeaponStowed_C.ExecuteUbergraph_WeaponStowed
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponStowed_C::ExecuteUbergraph_WeaponStowed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponStowed_C", "ExecuteUbergraph_WeaponStowed");

	Params::WeaponStowed_C_ExecuteUbergraph_WeaponStowed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponStowed.WeaponStowed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponStowed_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponStowed_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

