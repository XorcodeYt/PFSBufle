﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cannon

#include "Basic.hpp"

#include "Cannon_classes.hpp"
#include "Cannon_parameters.hpp"


namespace SDK
{

// Function Cannon.Cannon_C.Up Down server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  A                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FRotator&                  NewRotation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*                  Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACannon_C::Up_Down_server(double A, const struct FRotator& NewRotation, class USceneComponent* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "Up Down server");

	Params::Cannon_C_Up_Down_server Parms{};

	Parms.A = A;
	Parms.NewRotation = std::move(NewRotation);
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C.Un possess cannon Server
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ACannon_C::Un_possess_cannon_Server()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "Un possess cannon Server");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Cannon.Cannon_C.Turn Left Server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  A                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FRotator&                  NewRotation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*                  Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACannon_C::Turn_Left_Server(double A, const struct FRotator& NewRotation, class USceneComponent* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "Turn Left Server");

	Params::Cannon_C_Turn_Left_Server Parms{};

	Parms.A = A;
	Parms.NewRotation = std::move(NewRotation);
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C.Sound fart
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACannon_C::Sound_fart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "Sound fart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Cannon.Cannon_C.Server Spawn cannonball
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Spawn_Transform_Location_0                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FRotator&                  Spawn_Transform_Rotation_0                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           Owner_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACannon_C::Server_Spawn_cannonball(const struct FVector& Spawn_Transform_Location_0, const struct FRotator& Spawn_Transform_Rotation_0, class AActor* Owner_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "Server Spawn cannonball");

	Params::Cannon_C_Server_Spawn_cannonball Parms{};

	Parms.Spawn_Transform_Location_0 = std::move(Spawn_Transform_Location_0);
	Parms.Spawn_Transform_Rotation_0 = std::move(Spawn_Transform_Rotation_0);
	Parms.Owner_0 = Owner_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C.Server particles
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ACannon_C::Server_particles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "Server particles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Cannon.Cannon_C.Server hitmarker
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                OwningPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACannon_C::Server_hitmarker(class APlayerController* OwningPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "Server hitmarker");

	Params::Cannon_C_Server_hitmarker Parms{};

	Parms.OwningPlayer = OwningPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C.Reload Timeline__UpdateFunc
// (BlueprintEvent)

void ACannon_C::Reload_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "Reload Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Cannon.Cannon_C.Reload Timeline__FinishedFunc
// (BlueprintEvent)

void ACannon_C::Reload_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "Reload Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Cannon.Cannon_C.Recoil__UpdateFunc
// (BlueprintEvent)

void ACannon_C::Recoil__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "Recoil__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Cannon.Cannon_C.Recoil__FinishedFunc
// (BlueprintEvent)

void ACannon_C::Recoil__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "Recoil__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Cannon.Cannon_C.ReceivePossessed
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      NewController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACannon_C::ReceivePossessed(class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "ReceivePossessed");

	Params::Cannon_C_ReceivePossessed Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ACannon_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Cannon.Cannon_C.On Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATrainGusPlayer_C*                User_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Inside_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACannon_C::On_Interact(class ATrainGusPlayer_C* User_0, bool Inside_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "On Interact");

	Params::Cannon_C_On_Interact Parms{};

	Parms.User_0 = User_0;
	Parms.Inside_ = Inside_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C.Launch
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                       Character_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   A                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACannon_C::Launch(class AActor* Actor, class ACharacter* Character_0, class AController* Target, const struct FVector& A)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "Launch");

	Params::Cannon_C_Launch Parms{};

	Parms.Actor = Actor;
	Parms.Character_0 = Character_0;
	Parms.Target = Target;
	Parms.A = std::move(A);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C.Interact Server
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATrainGusPlayer_C*                Recent_gus_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACannon_C::Interact_Server(class ATrainGusPlayer_C* Recent_gus_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "Interact Server");

	Params::Cannon_C_Interact_Server Parms{};

	Parms.Recent_gus_0 = Recent_gus_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C.Inside Cannon Exit
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   DestLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FRotator&                  DestRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                      Target2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            InPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACannon_C::Inside_Cannon_Exit(class AActor* Target, const struct FVector& DestLocation, const struct FRotator& DestRotation, class AController* Target2, class APawn* InPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "Inside Cannon Exit");

	Params::Cannon_C_Inside_Cannon_Exit Parms{};

	Parms.Target = Target;
	Parms.DestLocation = std::move(DestLocation);
	Parms.DestRotation = std::move(DestRotation);
	Parms.Target2 = Target2;
	Parms.InPawn = InPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C. Left Mouse_K2Node_InputAxisEvent_3
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACannon_C::_Left_Mouse_K2Node_InputAxisEvent_3(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", " Left Mouse_K2Node_InputAxisEvent_3");

	Params::Cannon_C__Left_Mouse_K2Node_InputAxisEvent_3 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C. Down Mouse_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACannon_C::_Down_Mouse_K2Node_InputAxisEvent_2(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", " Down Mouse_K2Node_InputAxisEvent_2");

	Params::Cannon_C__Down_Mouse_K2Node_InputAxisEvent_2 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C.InpActEvt_V_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACannon_C::InpActEvt_V_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "InpActEvt_V_K2Node_InputKeyEvent_0");

	Params::Cannon_C_InpActEvt_V_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C.InpActEvt_R_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACannon_C::InpActEvt_R_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "InpActEvt_R_K2Node_InputKeyEvent_2");

	Params::Cannon_C_InpActEvt_R_K2Node_InputKeyEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C.InpActEvt_R_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACannon_C::InpActEvt_R_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "InpActEvt_R_K2Node_InputKeyEvent_1");

	Params::Cannon_C_InpActEvt_R_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C.InpActEvt_Interact key_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACannon_C::InpActEvt_Interact_key_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "InpActEvt_Interact key_K2Node_InputActionEvent_0");

	Params::Cannon_C_InpActEvt_Interact_key_K2Node_InputActionEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C.InpActEvt_Fire weapon_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACannon_C::InpActEvt_Fire_weapon_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "InpActEvt_Fire weapon_K2Node_InputActionEvent_1");

	Params::Cannon_C_InpActEvt_Fire_weapon_K2Node_InputActionEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C.Get off cannon server
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            InPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACannon_C::Get_off_cannon_server(class AController* Target, class APawn* InPawn, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "Get off cannon server");

	Params::Cannon_C_Get_off_cannon_server Parms{};

	Parms.Target = Target;
	Parms.InPawn = InPawn;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C.Get in cannon
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACannon_C::Get_in_cannon(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "Get in cannon");

	Params::Cannon_C_Get_in_cannon Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C.ExecuteUbergraph_Cannon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACannon_C::ExecuteUbergraph_Cannon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "ExecuteUbergraph_Cannon");

	Params::Cannon_C_ExecuteUbergraph_Cannon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C.Cannonball Server Damage
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Hit_bloke                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACannon_C::Cannonball_Server_Damage(class AActor* Hit_bloke)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "Cannonball Server Damage");

	Params::Cannon_C_Cannonball_Server_Damage Parms{};

	Parms.Hit_bloke = Hit_bloke;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Cannon.Cannon_C.Cannon Interact
// (Public, BlueprintCallable, BlueprintEvent)

void ACannon_C::Cannon_Interact()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "Cannon Interact");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Cannon.Cannon_C.Cannon Bunger
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FTransform&                SpawnTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class ACharacter*                       Real                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACannon_C::Cannon_Bunger(const struct FTransform& SpawnTransform, class ACharacter* Real)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cannon_C", "Cannon Bunger");

	Params::Cannon_C_Cannon_Bunger Parms{};

	Parms.SpawnTransform = std::move(SpawnTransform);
	Parms.Real = Real;

	UObject::ProcessEvent(Func, &Parms);
}

}

