// Fill out your copyright notice in the Description page of Project Settings.


#include "PeticionObstaculoInertes.h"
#include "ObstaculoSatelite.h"
#include "ObstaculoPlaneta.h"
AObstaculo* APeticionObstaculoInertes::CrearObstaculo(FString NombreObstaculo)
{
	if (NombreObstaculo == "Obstaculo4")
	{
		return GetWorld()->SpawnActor<AObstaculoSatelite>(AObstaculoSatelite::StaticClass());
	}
	else if (NombreObstaculo == "Obstaculo5")
	{
		return GetWorld()->SpawnActor<AObstaculoPlaneta>(AObstaculoPlaneta::StaticClass());
	}
    return nullptr;
}
