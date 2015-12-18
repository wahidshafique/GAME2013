// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "WeaponMelee.h"

AWeaponMelee::AWeaponMelee()
{
	Collider = CreateDefaultSubobject<UCapsuleComponent>(
		TEXT("Collider"));
	RootComponent = Collider;

	OnActorBeginOverlap.AddDynamic(this, 
		&AWeaponMelee::OnBeginOverlap);
}

void AWeaponMelee::OnBeginOverlap(AActor* OtherActor)
{
	UGameplayStatics::ApplyDamage(OtherActor,
		DamageDealt,
		Instigator->GetController(),
		this,
		UDamageType::StaticClass());
}
