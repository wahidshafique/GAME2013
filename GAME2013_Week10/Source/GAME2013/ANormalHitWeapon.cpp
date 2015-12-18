// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "ANormalHitWeapon.h"


void ANormalHitWeapon::Fire() {
	AMyCharacter *pba = new AMyCharacter;
	AMyCharacter* MyChar =
		Cast<AMyCharacter>(pba);
	MyChar->SetFiring(true);
	//if (bIsFiring && bIsFiringReady)
	//{
	//	FActorSpawnParameters SpawnParameters;
	//	SpawnParameters.Instigator = this;

	//	GetWorld()->SpawnActor<AMyProjectile>(ProjectileClass,
	//		GetActorLocation(),
	//		GetActorRotation(),
	//		SpawnParameters);
	//}
}
