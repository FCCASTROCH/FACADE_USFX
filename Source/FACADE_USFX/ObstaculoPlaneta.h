// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoPlaneta.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_USFX_API AObstaculoPlaneta : public AObstaculo
{
	GENERATED_BODY()
public:
	AObstaculoPlaneta();
	protected:
		virtual void BeginPlay()  override;
		public:
			virtual void Tick(float DeltaTime) override;
			void Mover(float DeltaTime);
			float TiempoTranscurrido;
};
