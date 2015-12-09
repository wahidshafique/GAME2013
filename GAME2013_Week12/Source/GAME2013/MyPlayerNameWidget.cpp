// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "MyPlayerNameWidget.h"

FText UMyPlayerNameWidget::GetPlayerName() const
{
	return FText::FromString(GetOwningPlayer()->PlayerState->PlayerName);
}
