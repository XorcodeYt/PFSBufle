﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Circle_Bar

#include "Basic.hpp"

#include "Circle_Bar_classes.hpp"
#include "Circle_Bar_parameters.hpp"


namespace SDK
{

// Function Circle_Bar.Circle_Bar_C.Set percent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Percent_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCircle_Bar_C::Set_percent(double Percent_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Circle_Bar_C", "Set percent");

	Params::Circle_Bar_C_Set_percent Parms{};

	Parms.Percent_0 = Percent_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Circle_Bar.Circle_Bar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCircle_Bar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Circle_Bar_C", "PreConstruct");

	Params::Circle_Bar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Circle_Bar.Circle_Bar_C.GetBrush_0
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UCircle_Bar_C::GetBrush_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Circle_Bar_C", "GetBrush_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Circle_Bar.Circle_Bar_C.ExecuteUbergraph_Circle_Bar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCircle_Bar_C::ExecuteUbergraph_Circle_Bar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Circle_Bar_C", "ExecuteUbergraph_Circle_Bar");

	Params::Circle_Bar_C_ExecuteUbergraph_Circle_Bar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Circle_Bar.Circle_Bar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCircle_Bar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Circle_Bar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

