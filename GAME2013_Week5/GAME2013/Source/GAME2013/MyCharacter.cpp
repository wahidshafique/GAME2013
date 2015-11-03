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
	CameraBoom->SetRelativeRotation(FRotator(-15.f, 0.f, 0.f));
	CameraBoom->AttachTo(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(
		TEXT("Camera")
		);
	Camera->AttachTo(CameraBoom);

	RotationSpeed = 10.f;
	bUseControllerRotationYaw = true;
}

// Called when the game starts or when spawned
static int TickerCount;
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	TickerCount = 0;
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TickerCount += 1;
	if (TickerCount >= 60) TickerCount = 60;
	
	if (bIsFiring && TickerCount >= 60) {
		GetWorld()->SpawnActor<AMyProjectile>(ProjectileClass,
			GetActorLocation(),
			GetActorRotation());
		TickerCount = 0;
	}
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

	InputComponent->BindAxis(TEXT("Forward"),
		this,
		&AMyCharacter::MoveForward
		);

	InputComponent->BindAxis(TEXT("RotateX"),
		this,
		&AMyCharacter::RotateX);

	InputComponent->BindAction(TEXT("Fire"),
		IE_Pressed,
		this,
		&AMyCharacter::StartFire);

	InputComponent->BindAction(TEXT("Fire"),
		IE_Released,
		this,
		&AMyCharacter::StopFire);
}

void AMyCharacter::MoveForward(float Scale)
{
	GetMovementComponent()->AddInputVector(GetActorForwardVector() * Scale * 10);
}

void AMyCharacter::RotateX(float Scale)
{
	AddControllerYawInput(Scale * RotationSpeed);
}

void AMyCharacter::StartFire()
{
	bIsFiring = true;
}

void AMyCharacter::StopFire()
{
	bIsFiring = false;
}