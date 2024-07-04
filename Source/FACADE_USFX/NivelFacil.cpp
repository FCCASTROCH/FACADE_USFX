// Fill out your copyright notice in the Description page of Project Settings.


#include "NivelFacil.h"
#include "NaveEnemigo.h"		
#include "Obstaculo.h"
#include "PeticionNaves.h"
#include "PeticionObstaculo.h"
#include "NaveEnemigo3.h"
#include "NaveEnemigo2.h"
#include "NaveEnemigo1.h"
#include "PeticionNavesEnemigas.h"
#include "Engine/World.h"

ANivelFacil::ANivelFacil()
{
	PrimaryActorTick.bCanEverTick = true;
	NivelActual = 1;
}

void ANivelFacil::BeginPlay()
{
	Super::BeginPlay();
	
	//NAVE_ENEMIGA_A = GetWorld()->SpawnActor<ANaveEnemigo1>(FVector(0, 400, 214), FRotator(0, 0, 0));
	//SpawnNaves();
	Posiciones("Redondo");
	SpawnNaves();
	// Inicializar temporizador para generación de naves
	
}

void ANivelFacil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ANivelFacil::Posiciones(FString forma)
{
	FVector UbicacionDeInicio = FVector(1800.0f, -1540.7f, 214.0f);
	FVector UbicacionDeInici = FVector(1750.0f, -1040.7f, 214.0f);
	FVector Centro = FVector(950.0f, -140.7f, 256.0f);
	float Radio = 600.0f;
	
	if (forma == "Cuadrado")
	{
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				FVector PosicionNaveActual = FVector(UbicacionDeInici.X - j * 600.0f, UbicacionDeInici.Y + i * 600.0f, UbicacionDeInici.Z);
				PosicionesNaves.Add(PosicionNaveActual);
			}
		}
	}
	else if (forma == "Triangulo") {

		for (int i = 0; i < 6; i++) {
			FVector PosicionNaveActualX = FVector(UbicacionDeInicio.X, UbicacionDeInicio.Y + i * 600.0f, UbicacionDeInicio.Z);

			for (int j = 0; j < 3; j++) {
				FVector PosicionNaveActualY = FVector(PosicionNaveActualX.X - j * 528.5f, PosicionNaveActualX.Y, PosicionNaveActualX.Z);
				if ((i == 0 || i == 5) && j == 0)
					PosicionesNaves.Add(PosicionNaveActualY);
				if ((i == 1 || i == 4) && (j == 0 || j == 1))
					PosicionesNaves.Add(PosicionNaveActualY);
				if (i == 2 || i == 3)
					PosicionesNaves.Add(PosicionNaveActualY);
			}
		}

	}
	else if (forma == "Redondo") {
		for (int i = 0; i < 12; i++) {
			float Angle = 2 * PI * i / 12;
			float X = Centro.X + Radio * FMath::Cos(Angle);
			float Y = Centro.Y + Radio * FMath::Sin(Angle);
			FVector PosicionNave = FVector(X, Y, Centro.Z-50.0f);
			PosicionesNaves.Add(PosicionNave);
		}

	}
}

void ANivelFacil::SpawnNaves()
{
	APeticionNavesEnemigas *navesApoyo = GetWorld()->SpawnActor<APeticionNavesEnemigas>(APeticionNavesEnemigas::StaticClass());
	//Aniadir los nombres al TArray
	Naves.Add("Nave1");
	Naves.Add("Nave2");
	Naves.Add("Nave3");
	Naves.Add("Nave4");
	Naves.Add("Nave5");
	
	//Spawnea las naves enemigas
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{

		for (int i = 0; i < PosicionesNaves.Num(); i++) {

			
				int32 RandomIndex = FMath::RandRange(0, Naves.Num() - 1);//Genera un numero aleatorio entre 0 y el tamaño del TArray - 1
				// Spawnea la nave aleatoria
			    NAVE_ENEMIGA_A = navesApoyo->OrdenarNaveEnemiga(Naves[RandomIndex]);
				
				NAVE_ENEMIGA_A->SetActorLocation(PosicionesNaves[i]);
				//lsoos
				NAVE_ENEMIGA_AC.Add(NAVE_ENEMIGA_A);

		
		}
	}
}

void ANivelFacil::Configurar_Vida_Naves(float Vida)
{

	for (ANaveEnemigo* Nave : NAVE_ENEMIGA_AC)
	{
		if (Nave)
		{
			Nave->SetVidaMaxima(Vida);
		}
	}
}

void ANivelFacil::Configurar_Velocidad_Naves(float Velocidad)
{

	for (ANaveEnemigo* Nave : NAVE_ENEMIGA_AC)
	{
		if (Nave)
		{
			Nave->SetVelocidad(Velocidad);
		}
	}
}

void ANivelFacil::Configurar_Danio_Disparo_Naves(float Danio_Disparo)
{
	for (ANaveEnemigo* Nave : NAVE_ENEMIGA_AC)
	{
		if (Nave)
		{
			Nave->SetDanoProducido(Danio_Disparo);
		}
	}
}

void ANivelFacil::Configurar_Vida_Obstaculos(float Vida)
{

	//GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, TEXT("No Existen Obstculo a que configurar vida"));

}

void ANivelFacil::Configurar_Danio_Obstaculos(float Velocidad)
{

	//GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Yellow, TEXT("No Existen Obstaculos a que configurar la velocidad"));
}

void ANivelFacil::Configurar_Velocidad_Obstaculos(float Danio)
{
	//GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Green, TEXT("No Existen Obstaculos a que configurar el daño"));
}

