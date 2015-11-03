// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "MyCharacter.h"
#include "MyPickUp.h"


// Sets default values
bool AMyPickUp::pickedUp = false;
AMyPickUp::AMyPickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Collider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	Collider->SetSphereRadius(55.f);
	RootComponent = Collider;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->AttachTo(Collider);

	OnActorBeginOverlap.AddDynamic(this, &AMyPickUp::OnBeginOverlap);
	//AMyCharacter *ammoptr = NULL;
	//ammoptr->ammo += 10;
}

void AMyPickUp::OnBeginOverlap(AActor* OtherActor)
{
	//AMyCharacter a;
	//a.ChangeAmmoHit();
	pickedUp = true;
	Destroy();
	
}