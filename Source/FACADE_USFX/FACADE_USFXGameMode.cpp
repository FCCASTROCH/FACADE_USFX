// Copyright Epic Games, Inc. All Rights Reserved.

#include "FACADE_USFXGameMode.h"
#include "FACADE_USFXPawn.h"
#include "NaveEnemigo1.h"
#include "NaveEnemigo.h"
#include "NaveEnemigo2.h"
#include "NaveEnemigo3.h"
#include "NaveEnemigo4.h"
#include "NaveEnemigo5.h"
#include "MenuHUD.h"
#include "MenuPlayerController.h"
#include "UObject/ConstructorHelpers.h"
#include "Facade.h"

AFACADE_USFXGameMode::AFACADE_USFXGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AFACADE_USFXPawn::StaticClass();
	//DefaultPawnClass = ATodo_InterfacesPawn::StaticClass();

	//Para controlar las entradas del jugador con la interfaz del menu
	PlayerControllerClass = AMenuPlayerController::StaticClass();

	// Para que se llegue a mostrar el menu
	HUDClass = AMenuHUD::StaticClass();
}

void AFACADE_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();
	/*Facad = GetWorld()->SpawnActor<AFacade>();
	Facad->ConfigurarNaveEnemiga();
	Facad->spawn();*/
	if (!DifficultyFacade)
	{
		DifficultyFacade = GetWorld()->SpawnActor<AFacade>();
		if (DifficultyFacade)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("[GameMode] Facade creado y configurado correctamente."));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[GameMode] Error al crear el Facade."));
		}
	}
}

void AFACADE_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFACADE_USFXGameMode::ChangeDifficulty(int DifficultyLevel)
{
	if (!DifficultyFacade)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[GameMode] DifficultyFacade no está inicializado."));
		return;
	}

	switch (DifficultyLevel)
	{
	case 1:
		DifficultyFacade->ActivateFacilMode();
		break;
	case 2:
		DifficultyFacade->ActivateNormalMode();
		break;
	case 3:
		DifficultyFacade->ActivateDificilMode();
		break;
	default:
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("[GameMode] Nivel de dificultad inválido: %d"), DifficultyLevel));
		break;
	}
}

