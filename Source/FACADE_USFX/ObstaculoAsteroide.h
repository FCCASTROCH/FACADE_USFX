// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoAsteroide.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_USFX_API AObstaculoAsteroide : public AObstaculo
{
	GENERATED_BODY()
	public:
		AObstaculoAsteroide();
protected:
	virtual void BeginPlay()  override;
public:
	virtual void Tick(float DeltaTime) override;
	void Mover(float DeltaTime);
	float TiempoTranscurrido;
};
