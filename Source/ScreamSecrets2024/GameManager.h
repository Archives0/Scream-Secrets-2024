// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameManager.generated.h"

UENUM(BlueprintType)
enum class EGameState : uint8
{
	Wandering,
	Eating
};

/**
 * 
 */
UCLASS()
class SCREAMSECRETS2024_API UGameManager : public UGameInstance
{
	GENERATED_BODY()
	
public:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Game State")
	EGameState CurrentState = EGameState::Wandering;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Game State")
	int Day = 1;
};
