// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "MyCharacter.h"
#include "MyPlayerAmmoWidget.generated.h"

/**
 * 
 */
UCLASS()
class GAME2013_API UMyPlayerAmmoWidget : public UUserWidget
{
	GENERATED_BODY()
	//as shown in default playernamewidget
public:
	UFUNCTION(BlueprintCallable, Category = Information)
	FText GetAmmo() const;
	
	
};
