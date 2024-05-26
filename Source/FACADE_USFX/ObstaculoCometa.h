// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoCometa.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_USFX_API AObstaculoCometa : public AObstaculo
{
	GENERATED_BODY()
public:
	AObstaculoCometa();
protected:
	virtual void BeginPlay()  override;
public:
	virtual void Tick(float DeltaTime) override;
	void Mover(float DeltaTime);
	float TiempoTranscurrido;
	
};
