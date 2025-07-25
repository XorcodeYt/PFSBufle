﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Canonball_BP_Client

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Canonball_BP_Client.Canonball_BP_Client_C
// 0x0030 (0x02A8 - 0x0278)
class ACanonball_BP_Client_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Cannontrail;                                       // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   cannonball;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ACannon_C*                              Projectile_Belonger;                               // 0x02A0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Canonball_BP_Client(int32 EntryPoint);
	void Apply_Damage_on_Server(class AActor* DamagedActor, class AActor* DamageCauser);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Canonball_BP_Client_C">();
	}
	static class ACanonball_BP_Client_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACanonball_BP_Client_C>();
	}
};
static_assert(alignof(ACanonball_BP_Client_C) == 0x000008, "Wrong alignment on ACanonball_BP_Client_C");
static_assert(sizeof(ACanonball_BP_Client_C) == 0x0002A8, "Wrong size on ACanonball_BP_Client_C");
static_assert(offsetof(ACanonball_BP_Client_C, UberGraphFrame) == 0x000278, "Member 'ACanonball_BP_Client_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACanonball_BP_Client_C, RotatingMovement) == 0x000280, "Member 'ACanonball_BP_Client_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(ACanonball_BP_Client_C, Cannontrail) == 0x000288, "Member 'ACanonball_BP_Client_C::Cannontrail' has a wrong offset!");
static_assert(offsetof(ACanonball_BP_Client_C, ProjectileMovement) == 0x000290, "Member 'ACanonball_BP_Client_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ACanonball_BP_Client_C, cannonball) == 0x000298, "Member 'ACanonball_BP_Client_C::cannonball' has a wrong offset!");
static_assert(offsetof(ACanonball_BP_Client_C, Projectile_Belonger) == 0x0002A0, "Member 'ACanonball_BP_Client_C::Projectile_Belonger' has a wrong offset!");

}

