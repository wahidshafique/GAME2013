// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Weapon.h"
#include "ANormalHitWeapon.generated.h"

/**
 *
 */
UCLASS()
class GAME2013_API ANormalHitWeapon : public AWeapon
{
	GENERATED_BODY()
public:
	void Fire();
};

//UCLASS()
//class GAME2013_API AInstantHitFire : public AMyCharacter
//{
//	GENERATED_BODY()
//public:
//	void fire();
//};
