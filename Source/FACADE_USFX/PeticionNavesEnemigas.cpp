// Fill out your copyright notice in the Description page of Project Settings.
#include "PeticionNavesEnemigas.h"
#include "NaveEnemigo1.h"
#include "NaveEnemigo2.h"
#include "NaveEnemigo3.h"
#include "NaveEnemigo4.h"
#include "NaveEnemigo5.h"
#include "NaveEnemigo.h"
#include "Engine/World.h"

ANaveEnemigo* APeticionNavesEnemigas::CrearNaveEnemiga(FString NombreNave)
{

	if (NombreNave == "Nave1")
	{
		return GetWorld()->SpawnActor<ANaveEnemigo1>(ANaveEnemigo1::StaticClass());
	}
	else if (NombreNave == "Nave2")
	{
		return GetWorld()->SpawnActor<ANaveEnemigo2>(ANaveEnemigo2::StaticClass());
	}
	else if (NombreNave == "Nave3") {
		return GetWorld()->SpawnActor<ANaveEnemigo3>(ANaveEnemigo3::StaticClass());
	}
	else if (NombreNave == "Nave4") {
		return GetWorld()->SpawnActor<ANaveEnemigo4>(ANaveEnemigo4::StaticClass());
	}
	else if (NombreNave == "Nave5") {
		return GetWorld()->SpawnActor<ANaveEnemigo5>(ANaveEnemigo5::StaticClass());
	}
	return nullptr;
}