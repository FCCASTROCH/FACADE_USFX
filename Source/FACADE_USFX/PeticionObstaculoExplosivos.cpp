// Fill out your copyright notice in the Description page of Project Settings.


#include "PeticionObstaculoExplosivos.h"
#include "ObstaculoAsteroide.h"
#include "ObstaculoCometa.h"
#include "ObstaculoExplosivo.h"

AObstaculo* APeticionObstaculoExplosivos::CrearObstaculo(FString NombreObstaculo)
{
	if (NombreObstaculo == "Obstaculo1")
	{
		return GetWorld()->SpawnActor<AObstaculoAsteroide>(AObstaculoAsteroide::StaticClass());
	}
	else if (NombreObstaculo == "Obstaculo2")
	{
		return GetWorld()->SpawnActor<AObstaculoCometa>(AObstaculoCometa::StaticClass());
	}
	else if (NombreObstaculo == "Obstaculo3")
	{
		return GetWorld()->SpawnActor<AObstaculoExplosivo>(AObstaculoExplosivo::StaticClass());
	}
	return nullptr;
}
