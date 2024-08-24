// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Food.h"
#include "FoodManager.generated.h"

UCLASS()
class SCREAMSECRETS2024_API AFoodManager : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	AFoodManager();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Food")
	TArray<AFood*> presentedFood{};

	/*UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Food")
	AFood* selectedFood{};*/
};
