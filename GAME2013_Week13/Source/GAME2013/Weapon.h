// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

UCLASS(Abstract)
class GAME2013_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	void StartAttack();
	void EndAttack();

	FORCEINLINE bool IsAttacking() { return bIsAttacking; }
	FORCEINLINE virtual bool CanAttack() { return TimeToNextAttack <= 0.f; }

	virtual void PickUp();
	virtual void Drop();

protected:
	UPROPERTY(EditDefaultsOnly)
	float AttackSpeed;

	float TimeToNextAttack;

protected:
	virtual void Attack();

private:
	bool bIsAttacking;
	
};
