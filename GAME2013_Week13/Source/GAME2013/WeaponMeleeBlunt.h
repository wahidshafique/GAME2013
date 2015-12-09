// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "WeaponMelee.h"
#include "WeaponMeleeBlunt.generated.h"

/**
 * 
 */
UCLASS()
class GAME2013_API AWeaponMeleeBlunt : public AWeaponMelee
{
	GENERATED_BODY()

public:
	AWeaponMeleeBlunt();
	
protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;
	
	
};
