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
static int tickerCount;
int fired = 0;
//int AMyCharacter::ammo = 10;
//int AMyCharacter::hit = 0;
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	tickerCount = 0;
	fired = 0;
	hit = 0;
	ammo = 10; 
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	if (ATarget::hitTarget){
		hit += 1;
		ATarget::hitTarget = false;
	}
	if (AMyPickUp::pickedUp){
		ammo += 5;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Woot! You got 5 more ammo Ammo: %i"), ammo));
		AMyPickUp::pickedUp = false;
	}
	Super::Tick(DeltaTime);

	tickerCount += 1;
	if (tickerCount >= 60) tickerCount = 60;
	
	if (bIsFiring && tickerCount >= 60 && ammo > 0) {
		if (ammo > 10) {
			ammo = 10;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Maximum 10 ammo allowed, sorry >:} Back down to 10 you go ha!")));
		}
		GetWorld()->SpawnActor<AMyProjectile>(ProjectileClass,
			GetActorLocation() + FVector(0.f, 0.f, 50.f),
			GetActorRotation());
		tickerCount = 0;
		fired += 1;
		ammo -= 1;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Rounds Fired: %i  Ammo: %i  Hit: %i"), fired, ammo, hit));
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