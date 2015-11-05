// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "GameFramework/PlayerState.h"
#include "MyPlayerState.generated.h"


UCLASS()
class GAME2013_API AMyPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	int Hit;
	int Fired;
	int Ammo;
	//// setters, print outs moved here...makes things cleaner
	//debugs out on both sethit and setfired so that when you hit something you know immediately instead of firing again to see the score
	void SetHit(){
		Hit += 1;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Rounds Fired: %i  Ammo: %i  Hit: %i"), Fired, Ammo, Hit));
		if (Hit == 20 && Ammo == 0) 
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Perfect Score, you win")));
	}

	void SetFired(){
		Fired += 1;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Rounds Fired: %i  Ammo: %i  Hit: %i"), Fired, Ammo, Hit));
	}

	void SetAmmo(){
		Ammo -= 1;
	}
};


