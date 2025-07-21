// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DCJCharacterBase.generated.h"

UCLASS()
class DUNGEONCRAWLJAM_API ADCJCharacterBase : public ACharacter
{
    GENERATED_BODY()

public:
	ADCJCharacterBase();

protected:
    void BeginPlay() override;
    void Tick(float dtSeconds) override;
};