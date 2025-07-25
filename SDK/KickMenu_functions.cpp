﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KickMenu

#include "Basic.hpp"

#include "KickMenu_classes.hpp"
#include "KickMenu_parameters.hpp"


namespace SDK
{

// Function KickMenu.KickMenu_C.ExecuteUbergraph_KickMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKickMenu_C::ExecuteUbergraph_KickMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KickMenu_C", "ExecuteUbergraph_KickMenu");

	Params::KickMenu_C_ExecuteUbergraph_KickMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KickMenu.KickMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKickMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KickMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

