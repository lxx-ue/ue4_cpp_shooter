// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "STUGameDataWidget.generated.h"

class ASTUGameModeBase;
class ASTUPlayerState;

UCLASS()
class SHOOTTHEMUP_API USTUGameDataWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
    UFUNCTION(BlueprintCallable, Category = "UI")
    int32 GetCurrentRoundNum() const;
    UFUNCTION(BlueprintCallable, Category = "UI")
    int32 GetTotalRoundNum() const;
    UFUNCTION(BlueprintCallable, Category = "UI")
    int32 GetRoundSecondsRemaining() const;
    UFUNCTION(BlueprintCallable, Category = "UI")
    int32 GetPlayerTeamPoints() const;
    UFUNCTION(BlueprintCallable, Category = "UI")
    int32 GetEnemiesTeamPoints() const;

private:
    ASTUGameModeBase* GetSTUGameMode() const;
    ASTUPlayerState* GetSTUPlayerState() const;
};
