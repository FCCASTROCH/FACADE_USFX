// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IBNEnemiga.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIBNEnemiga : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class FACADE_USFX_API IIBNEnemiga
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void ConstruirMovimientoDeNave() = 0;
	virtual void ConstruirPocisionNaves() = 0;
	//virtual void ConstruirBarreraEscudo() = 0;
	virtual void ConstruirSpawnNaves() = 0;
	//virtual void ConstruirDestruirNave() = 0;
	virtual class ANaveEnemigoPrincipal* getNaveNodriza() = 0;

};
