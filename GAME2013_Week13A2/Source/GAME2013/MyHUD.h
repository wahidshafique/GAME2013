// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "MyPlayerNameWidget.h"
#include "MyPlayerAmmoWidget.h"
#include "MyPlayerHealthWidget.h"
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
	//created the rest based on this example
	TSubclassOf<UMyPlayerAmmoWidget> PlayerAmmoWidgetClass;
	TSubclassOf<UMyPlayerHealthWidget> PlayerHealthWidgetClass;

	UPROPERTY()
		UMyPlayerNameWidget* PlayerNameWidget;
	UPROPERTY()
		UMyPlayerAmmoWidget* PlayerAmmoWidget;
	UPROPERTY()
		UMyPlayerHealthWidget* PlayerHealthWidget;


};
