// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Weapon.h"
#include "WeaponMelee.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class GAME2013_API AWeaponMelee : public AWeapon
{
	GENERATED_BODY()

public:
	AWeaponMelee();
	
protected:
	UPROPERTY(VisibleAnywhere)
	UCapsuleComponent* Collider;

	UPROPERTY(EditDefaultsOnly)
	float DamageDealt;
	
protected:
	UFUNCTION()
	virtual void OnBeginOverlap(AActor* OtherActor);
};
