// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "MyPlayerState.h"
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

}

void AMyCharacter::BeginDestroy()
{
	Super::BeginDestroy();
}

int AMyCharacter::Data(std::string foo){
	//get ammo or health
	AMyPlayerState* MyPlayerState =
		Cast<AMyPlayerState>(PlayerState);

	if (foo == "Ammo")
		return MyPlayerState->Ammo;
	if (foo == "Health")
		return MyPlayerState->health;
	else return 0;
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsFiring)
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.Instigator = this;

		GetWorld()->SpawnActor<AMyProjectile>(ProjectileClass,
			GetActorLocation(),
			GetActorRotation(),
			SpawnParameters);
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
	/*InputComponent->BindAction(TEXT("1"),
		IE_Released,
		this,
		&AMyCharacter::Inventory(0));
		InputComponent->BindAction(TEXT("2"),
		IE_Released,
		this,
		&AMyCharacter::Inventory(1));
		InputComponent->BindAction(TEXT("3"),
		IE_Released,
		this,
		&AMyCharacter::Inventory(1));
		InputComponent->BindAction(TEXT("4"),
		IE_Released,
		this,
		&AMyCharacter::Inventory);*/
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

void AMyCharacter::Inventory(int index){

}

//void AMyCharacter::FireWeapon()
//{
//	if (CurrentWeapon != NULL)
//	{
//		CurrentWeapon->Fire();
//	} else
//	{
//		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, "No Weapon in Hand");
//	}
//}
//
//void AMyCharacter::NextWeapon()
//{
//	if (Inventory[CurrentWeapon->WeaponConfig.Priority]->WeaponConfig.Priority != 2)
//	{
//		if (Inventory[CurrentWeapon->WeaponConfig.Priority + 1] == NULL)
//		{
//			for (int32 i = CurrentWeapon->WeaponConfig.Priority + 1; i < Inventory.Num(); i++)
//			{
//				if (Inventory[i] && Inventory[i]->IsA(AWeapon::StaticClass()))
//				{
//					EquipWeapon(Inventory[i]);
//				}
//			}
//		} else
//		{
//			EquipWeapon(Inventory[CurrentWeapon->WeaponConfig.Priority + 1]);
//		}
//	} else
//	{
//		EquipWeapon(Inventory[CurrentWeapon->WeaponConfig.Priority]);
//	}
//}
//
//void AMyCharacter::PrevWeapon()
//{
//	if (Inventory[CurrentWeapon->WeaponConfig.Priority]->WeaponConfig.Priority != 0)
//	{
//		if (Inventory[CurrentWeapon->WeaponConfig.Priority - 1] == NULL)
//		{
//			for (int32 i = CurrentWeapon->WeaponConfig.Priority - 1; i >= 0; i--)
//			{
//				if (Inventory[i] && Inventory[i]->IsA(AWeapon::StaticClass()))
//				{
//					EquipWeapon(Inventory[i]);
//				}
//			}
//		} else
//		{
//			EquipWeapon(Inventory[CurrentWeapon->WeaponConfig.Priority - 1]);
//		}
//	} else
//	{
//		EquipWeapon(Inventory[CurrentWeapon->WeaponConfig.Priority]);
//	}
//}
//
//void AMyCharacter::EquipWeapon(AWeapon *Weapon)
//{
//	if (CurrentWeapon != NULL)
//	{
//		CurrentWeapon = Inventory[CurrentWeapon->WeaponConfig.Priority];
//		CurrentWeapon->OnUnEquip();
//		CurrentWeapon = Weapon;
//		Weapon->SetOwningPawn(this);
//		Weapon->OnEquip();
//	} else
//	{
//		CurrentWeapon = Weapon;
//		CurrentWeapon = Inventory[CurrentWeapon->WeaponConfig.Priority];
//		CurrentWeapon->SetOwningPawn(this);
//		Weapon->OnEquip();
//	}
//}
