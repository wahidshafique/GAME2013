// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "Weapon.h"


// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeapon::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	TimeToNextAttack -= DeltaTime;
	if (CanAttack() && IsAttacking())
	{
		Attack();
	}
}

void AWeapon::StartAttack()
{
	bIsAttacking = true;
}

void AWeapon::EndAttack()
{
	bIsAttacking = false;
}

void AWeapon::PickUp()
{

}

void AWeapon::Drop()
{

}

void AWeapon::Attack()
{
	TimeToNextAttack = AttackSpeed;
}


//have functionality inside weapon, w/ raytracing, TODO
//void AWeapon::Instant_Fire()
//{
//
//	const int32 RandomSeed = FMath::Rand();
//	FRandomStream WeaponRandomStream(RandomSeed);
//	const float CurrentSpread = WeaponConfig.WeaponSpread;
//	const float SpreadCone = FMath::DegreesToRadians(WeaponConfig.WeaponSpread * 0.5);
//	const FVector AimDir = WeaponMesh->GetSocketRotation("MF").Vector();
//	const FVector StartTrace = WeaponMesh->GetSocketLocation("MF");
//	const FVector ShootDir = WeaponRandomStream.VRandCone(AimDir, SpreadCone, SpreadCone);
//	const FVector EndTrace = StartTrace + ShootDir * WeaponConfig.WeaponRange;
//	const FHitResult Impact = WeaponTrace(StartTrace, EndTrace);
//
//	ProcessInstantHit(Impact, StartTrace, ShootDir, RandomSeed, CurrentSpread);
//}
//
//FHitResult AWeapon::WeaponTrace(const FVector &TraceFrom, const FVector &TraceTo) const
//{
//	static FName WeaponFireTag = FName(TEXT("WeaponTrace"));
//
//	FCollisionQueryParams TraceParams(WeaponFireTag, true, Instigator);
//	TraceParams.bTraceAsyncScene = true;
//	TraceParams.bReturnPhysicalMaterial = true;
//	TraceParams.AddIgnoredActor(this);
//
//	FHitResult Hit(ForceInit);
//
//	GetWorld()->LineTraceSingle(Hit, TraceFrom, TraceTo, TRACE_WEAPON, TraceParams);
//
//	return Hit;
//}
//
//void AWeapon::ProcessInstantHit(const FHitResult &Impact, const FVector &Origin, const FVector &ShootDir, int32 RandomSeed, float ReticleSpread)
//{
//	const FVector EndTrace = Origin + ShootDir * WeaponConfig.WeaponRange;
//	const FVector EndPoint = Impact.GetActor() ? Impact.ImpactPoint : EndTrace;
//	DrawDebugLine(this->GetWorld(), Origin, Impact.TraceEnd, FColor::Black, true, 10000, 10.f);
//
//	AEnemy *Enemy = Cast<AEnemy>(Impact.GetActor());
//	if (Enemy)
//	{
//		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, "YOU HIT AN ENEMY!!");
//		Enemy->Destroy();
//	}
//}