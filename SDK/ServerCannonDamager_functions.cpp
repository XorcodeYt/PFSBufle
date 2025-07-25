﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ServerCannonDamager

#include "Basic.hpp"

#include "ServerCannonDamager_classes.hpp"
#include "ServerCannonDamager_parameters.hpp"


namespace SDK
{

// Function ServerCannonDamager.ServerCannonDamager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AServerCannonDamager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerCannonDamager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ServerCannonDamager.ServerCannonDamager_C.ExecuteUbergraph_ServerCannonDamager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AServerCannonDamager_C::ExecuteUbergraph_ServerCannonDamager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerCannonDamager_C", "ExecuteUbergraph_ServerCannonDamager");

	Params::ServerCannonDamager_C_ExecuteUbergraph_ServerCannonDamager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

