// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "MyCharacter.h"


// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(
		TEXT("CameraBoom")
		);
	CameraBoom->SetRelativeRotation(FRotator(-35.f, 0.f, 0.f));
	CameraBoom->AttachTo(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(
		TEXT("Camera")
		);
	Camera->AttachTo(CameraBoom);
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

	InputComponent->BindAxis(TEXT("Forward"),
		this,
		&AMyCharacter::MoveForward
		);

	InputComponent->BindAxis(TEXT("Strafe"),
		this,
		&AMyCharacter::Strafe
		);
}

void AMyCharacter::MoveForward(float Scale)
{
	FString Message = FString::Printf(TEXT("Scale = %f"), Scale);

	GEngine->AddOnScreenDebugMessage(
		1,
		5.f,
		FColor::Yellow,
		Message);

	CharacterMovement->AddInputVector(GetActorForwardVector() * Scale * 10);
}

void AMyCharacter::Strafe(float Scale)
{
	FString Message = FString::Printf(TEXT("Scale = %f"), Scale);

	GEngine->AddOnScreenDebugMessage(
		1,
		5.f,
		FColor::Red,
		Message);
	CharacterMovement->AddInputVector(GetActorRightVector() * Scale * 10);
}