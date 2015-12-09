// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "MyPlayerNameWidget.h"
#include "MyHUD.generated.h"

/**
 * 
 */
UCLASS()
class GAME2013_API AMyHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	AMyHUD();
	virtual void BeginPlay() override;

protected:
	TSubclassOf<UMyPlayerNameWidget> PlayerNameWidgetClass;

	UPROPERTY()
	UMyPlayerNameWidget* PlayerNameWidget;
	
	
};
