// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraCharacterEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacterEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

public:
	AAuraCharacterEnemy();
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	
};
