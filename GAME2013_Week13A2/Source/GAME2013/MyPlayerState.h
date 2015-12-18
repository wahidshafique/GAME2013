// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerState.h"
#include "MyPlayerState.generated.h"

/**
 *
 */
UCLASS()
class GAME2013_API AMyPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	int Ammo = 20;
	int health = 100;
};
