// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "HenchmenPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class HENCHMEN_API AHenchmenPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	UPROPERTY()
		FString PlayerSessionId;

	UPROPERTY()
		FString MatchmakingPlayerId;

	UPROPERTY(Replicated)
		FString Team;
};
