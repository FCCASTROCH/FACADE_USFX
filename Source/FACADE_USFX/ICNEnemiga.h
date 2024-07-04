// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ICNEnemiga.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UICNEnemiga : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class FACADE_USFX_API IICNEnemiga
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void MovimientoDeNave() = 0;
	virtual void PocisionNaves(FString forma) = 0;
	//virtual void BarreraEscudo() = 0;
	virtual void SpawnNaves() = 0;
	virtual void DestruirNave() = 0;
};
