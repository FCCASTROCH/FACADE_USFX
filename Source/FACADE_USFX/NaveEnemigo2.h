// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigo.h"
#include "NaveEnemigo2.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_USFX_API ANaveEnemigo2 : public ANaveEnemigo
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	ANaveEnemigo2();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Mover(float DeltaTime) override;
};
