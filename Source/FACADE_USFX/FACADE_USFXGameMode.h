// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NaveEnemigo.h"
#include "PeticionNaves.h"
#include "PeticionNavesEnemigas.h"
#include "FACADE_USFXGameMode.generated.h"

UCLASS(MinimalAPI)
class AFACADE_USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFACADE_USFXGameMode();
	//class AFacade* Facad;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//ANaveEnemigo* NaveEnemig;
private:
	// Referencia al objeto Facade de dificultad
	//class AFacade* DifficultyFacade;

	//	DifficultyFacade = GetWorld()->SpawnActor<AFacade>();

public:
	// Función para cambiar la dificultad del juego
	//void ChangeDifficulty(int DifficultyLevel);

};



