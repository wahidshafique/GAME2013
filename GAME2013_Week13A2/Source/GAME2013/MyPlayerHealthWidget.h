// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "MyCharacter.h"
#include "MyPlayerHealthWidget.generated.h"

/**
 * 
 */
UCLASS()
class GAME2013_API UMyPlayerHealthWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UFUNCTION(BlueprintCallable, Category = Information)
		FText GetPlayerHealth() const;
	
	
};
