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
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	AMyPlayerState* MyPlayerState = Cast<AMyPlayerState>(PlayerState);

	if (MyPlayerState) {////set initial values (do not want persistence)
		MyPlayerState->Ammo = 10;
		MyPlayerState->Hit = 0;
		MyPlayerState->Fired = 0;
	}
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AMyPlayerState* MyPlayerState = Cast<AMyPlayerState>(PlayerState);

	FireRate -= DeltaTime;
	if (bIsFiring && FireRate <= 0.f) {
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.Instigator = this;

		if (MyPlayerState && MyPlayerState->Ammo > 0){

			GetWorld()->SpawnActor<AMyProjectile>(ProjectileClass,//spawn projectile, shifted a bit up, nudges a bit away from the player 
				(GetActorLocation() + FVector(0.f, 0.f, 50.f)),
				GetActorRotation(), SpawnParameters);//pass along your own params to the projectile as an extension of your playerstate

			MyPlayerState->SetFired();
			MyPlayerState->SetAmmo();
		}
		FireRate = 1.f;//reset firerate, thereby created a constant 1 second interval 
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