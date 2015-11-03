// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "MyProjectile.h"
#include "MyPickUp.h"
#include "Target.h"
#include "MyCharacter.generated.h"

UCLASS()
class GAME2013_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UCameraComponent* Camera;

	FTimerHandle Handle;

public:
	int ammo;
	int hit;

	//void ChangeAmmoHit(){
	// ammo += 5;
		//hit += 1; 
	//}
	// Sets default values for this character's properties
	AMyCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	bool bIsFiring;

protected:
	UPROPERTY(EditAnywhere)
	float RotationSpeed;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AMyProjectile> ProjectileClass;

protected:
	virtual void MoveForward(float Scale);

	virtual void RotateX(float Scale);

	virtual void StartFire();

	virtual void StopFire();

private:
	
	
};
