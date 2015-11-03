// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
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

public:
	// Sets default values for this character's properties
	AMyCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

protected:
	UFUNCTION(BlueprintCallable, Category = "1")//func 1
	virtual void MoveForward(float Scale);
	UFUNCTION(BlueprintCallable, Category = "2")// func 2
	virtual void Strafe(float Scale);
	UFUNCTION(BlueprintCallable, Category = "3")// func 3
	virtual void JumpUp();
	UFUNCTION(BlueprintCallable, Category = "4")// func 4
	virtual void doSomething();
	UFUNCTION(BlueprintCallable, Category = "5")// func 5
	virtual void doSomethingElse();
};



