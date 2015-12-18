// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "MyPlayerNameWidget.generated.h"

/**
 * 
 */
UCLASS()
class GAME2013_API UMyPlayerNameWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UFUNCTION(BlueprintCallable, Category = Information)
	FText GetPlayerName() const;
	
	
};
