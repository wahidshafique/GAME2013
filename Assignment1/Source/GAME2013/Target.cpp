// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "Target.h"


// Sets default values
bool ATarget::hitTarget = false;
ATarget::ATarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Collider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	Collider->SetSphereRadius(55.f);
	RootComponent = Collider;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->AttachTo(Collider);

	OnActorBeginOverlap.AddDynamic(this, &ATarget::OnBeginOverlap);
}

void ATarget::OnBeginOverlap(AActor* OtherActor)
{
	if (OtherActor->GetName().Contains("ExampleProjectile")){
		hitTarget = true;
		Destroy();
	}
}

