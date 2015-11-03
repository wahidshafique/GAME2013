// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "MyProjectile.h"


// Sets default values
AMyProjectile::AMyProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Collider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	Collider->SetSphereRadius(5.f);
	RootComponent = Collider;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->AttachTo(Collider);

	MovementComponent = 
		CreateDefaultSubobject<UProjectileMovementComponent>(
		TEXT("MovementComponent"));
	MovementComponent->InitialSpeed = 50.f;
	MovementComponent->MaxSpeed = 500.f;
	InitialLifeSpan = 2.0f;

}

// Called when the game starts or when spawned
void AMyProjectile::BeginPlay()
{
	Super::BeginPlay();
	//Destroy();
	
}

// Called every frame
void AMyProjectile::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

