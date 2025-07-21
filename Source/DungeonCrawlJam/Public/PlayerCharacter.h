// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "DCJCharacterBase.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class DUNGEONCRAWLJAM_API APlayerCharacter : public ADCJCharacterBase
{
	GENERATED_BODY()
public:
    APlayerCharacter();
protected:
    void BeginPlay() override;
    void Tick(float dtSeconds) override;
};