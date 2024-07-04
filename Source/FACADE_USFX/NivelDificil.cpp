// Fill out your copyright notice in the Description page of Project Settings.


#include "NivelDificil.h"
#include "NaveEnemigo.h"
#include "Obstaculo.h"
#include "PeticionNaves.h"
#include "PeticionObstaculo.h"
#include "NaveEnemigo1.h"
#include "NaveEnemigo2.h"
#include "NaveEnemigo3.h"
#include "NaveEnemigo4.h"
#include "NaveEnemigo5.h"
#include "ObstaculoPlaneta.h"
#include "ObstaculoSatelite.h"
#include "Director.h"
#include "NaveEnemigoPrincipal.h"
#include "PeticionNavesEnemigas.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "BuilNaveP.h"
ANivelDificil::ANivelDificil()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	NivelActual = 3;
	
}

void ANivelDificil::BeginPlay()
{
	Super::BeginPlay();
	DirectorP = GetWorld()->SpawnActor<ADirector>(ADirector::StaticClass());
	//builder
	NaveP = GetWorld()->SpawnActor<ABuilNaveP>(ABuilNaveP::StaticClass());
	//builder2
	//BNave = GetWorld()->SpawnActor<AConstructorNave>(AConstructorNave::StaticClass());
	//crea primer builder
	DirectorP->Construyendo(NaveP);
	DirectorP->construirNaveNodriza();
	ANaveEnemigoPrincipal* Nave = DirectorP->obtenerNave();
	//crea segundo bulder
	//Posiciones("Triangulo");
	//SpawnNaves();
}

void ANivelDificil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ANivelDificil::Posiciones(FString forma)
{
	FVector UbicacionDeInicio = FVector(1850.0f, -1540.7f, 216.0f);
	FVector UbicacionDeInici = FVector(1750.0f, -1040.7f, 216.0f);
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

		for (int i = 0; i < 2; i++) {
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
			FVector PosicionNave = FVector(X, Y, Centro.Z);
			PosicionesNaves.Add(PosicionNave);
		}

	}
}

void ANivelDificil::SpawnNaves()
{
	APeticionNavesEnemigas* navesApoyo = GetWorld()->SpawnActor<APeticionNavesEnemigas>(APeticionNavesEnemigas::StaticClass());
	//Aniadir los nombres al TArray
	PNaveLogistica.Add("Nave1");
	PNaveLogistica.Add("Nave2");
	PNaveLogistica.Add("Nave3");
	PNaveLogistica.Add("Nave4");
	PNaveLogistica.Add("Nave5");

	//Spawnea las naves enemigas
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{

		for (int i = 0; i < PosicionesNaves.Num(); i++) {


			int32 RandomIndex = FMath::RandRange(0, PNaveLogistica.Num() - 1);//Genera un numero aleatorio entre 0 y el tamaño del TArray - 1
			// Spawnea la nave aleatoria
			NAVE_ENEMIGA_C = navesApoyo->OrdenarNaveEnemiga(PNaveLogistica[RandomIndex]);
			NAVE_ENEMIGA_C->SetActorLocation(PosicionesNaves[i]);
			NAVE_ENEMIGA_DC.Add(NAVE_ENEMIGA_C);


		}
	}
}

void ANivelDificil::CrearBarrera()
{
	FVector ubicacionDeObjetosInventario = FVector(0.0f, 0.0f, 215.0f);
	TArray<AObstaculo*> BarreraProteccion;
	for (int i = 0; i < 2; i++) {
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			//Generar un número aleatorio entre 0 y 2
			int RandomNumber = FMath::FRandRange(0, 2);
			if (RandomNumber == 0)
			{
				AObstaculo*Barrera = GetWorld()->SpawnActor<AObstaculoPlaneta>(AObstaculoPlaneta::StaticClass());
				Barrera->SetActorLocation(ubicacionDeObjetosInventario);
				BarreraProteccion.Add(Barrera);
			}
			else if (RandomNumber == 1)
			{
				AObstaculo*	Barrer = GetWorld()->SpawnActor<AObstaculo>(AObstaculoSatelite::StaticClass());
				Barrer->SetActorLocation(ubicacionDeObjetosInventario);
				BarreraProteccion.Add(Barrer);
			}
		}
		ubicacionDeObjetosInventario = ubicacionDeObjetosInventario + FVector(0.0f, 300.0f, 0.0f);

	}
}



void ANivelDificil::RetornarPosicion()
{
}
//
//void ANivelDificil::Actualizar()
//{
//	CrearBarrera();
//}

void ANivelDificil::Configurar_Vida_Naves(float Vida)
{

	for (ANaveEnemigo* Nave : NAVE_ENEMIGA_DC)
	{
		if (Nave)
		{
			Nave->SetVidaMaxima(Vida);
		}
	}
}

void ANivelDificil::Configurar_Velocidad_Naves(float Velocidad)
{

	for (ANaveEnemigo* Nave : NAVE_ENEMIGA_DC)
	{
		if (Nave)
		{
			Nave->SetVelocidad(Velocidad);
		}
	}
}

void ANivelDificil::Configurar_Danio_Disparo_Naves(float Danio_Disparo)
{
	if (NAVE_ENEMIGA_C != nullptr)
	{
		NAVE_ENEMIGA_C->SetDanoProducido(Danio_Disparo);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando el danio de disparo de la nave"));
	}
}

void ANivelDificil::Configurar_Vida_Obstaculos(float Vida)
{
	if (OBSTACULOS_ESPACIALES_C != nullptr)
	{
		OBSTACULOS_ESPACIALES_C->SetVida(Vida);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando la vida del obstaculo"));
	}
}

void ANivelDificil::Configurar_Danio_Obstaculos(float Danio)
{
	if (OBSTACULOS_ESPACIALES_C != nullptr)
	{
		OBSTACULOS_ESPACIALES_C->SetDanioObs(Danio);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando el danio del obstaculo"));
	}
}

void ANivelDificil::Configurar_Velocidad_Obstaculos(float Velocidad)
{
	if (OBSTACULOS_ESPACIALES_C != nullptr)
	{
		OBSTACULOS_ESPACIALES_C->SetVelocidadObs(Velocidad);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando la velocidad del obstaculo"));
	}
}
//
//void ANivelDificil::Posiciones()
//{
//}


