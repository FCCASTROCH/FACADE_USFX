// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PeticionObstaculo.h"

#include "PeticionObstaculoExplosivos.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_USFX_API APeticionObstaculoExplosivos : public APeticionObstaculo
{
	GENERATED_BODY()
public:
	//APeticionObstaculoExplosivos();
	virtual AObstaculo* CrearObstaculo(FString NombreObstaculo) override;
	
};
