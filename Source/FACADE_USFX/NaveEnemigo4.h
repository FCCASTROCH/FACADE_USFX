// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigo.h"
#include "NaveEnemigo4.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_USFX_API ANaveEnemigo4 : public ANaveEnemigo
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	ANaveEnemigo4();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void Mover(float DeltaTime) override;

};
