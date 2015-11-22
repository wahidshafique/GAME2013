// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "WeaponMeleeBlunt.h"

AWeaponMeleeBlunt::AWeaponMeleeBlunt()
	:Super()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(
		TEXT("Mesh"));
	Mesh->AttachTo(RootComponent);
}