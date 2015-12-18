// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "Weapon.h"


// Sets default values
AWeapon::AWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	AMyCharacter *pba = new AMyCharacter;
	AMyCharacter* MyChar =
		Cast<AMyCharacter>(pba);
	MyChar->SetFiring(true);
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TimeToNextAttack -= DeltaTime;
	if (CanAttack() && IsAttacking())
	{
		Attack();
	}
}

void AWeapon::StartAttack()
{
	bIsAttacking = true;
}

void AWeapon::EndAttack()
{
	bIsAttacking = false;
}

void AWeapon::PickUp()
{

}

void AWeapon::Drop()
{

}

void AWeapon::Attack()
{
	TimeToNextAttack = AttackSpeed;
}

//FHitResult AWeapon::WeaponTrace(const FVector &TraceFrom, const FVector &TractTo) const{
//
//}
//
//
//void AWeapon::ProcessInstantHit(const FHitResult &Impact, const FVector &Origin, const FVector &ShootDir){
//
//}