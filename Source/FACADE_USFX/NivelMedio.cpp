// Fill out your copyright notice in the Description page of Project Settings.


#include "NivelMedio.h"
#include "Obstaculo.h"
#include "Kismet/GameplayStatics.h"
#include "NaveEnemigo.h"
#include "PeticionNaves.h"
#include "PeticionObstaculo.h"
#include "NaveEnemigo2.h"
#include "NaveEnemigo1.h"
#include "NaveEnemigo3.h"
#include "PeticionNavesEnemigas.h"
#include "PeticionObstaculoExplosivos.h"
#include "PeticionObstaculoInertes.h"
ANivelMedio::ANivelMedio()
{
	PrimaryActorTick.bCanEverTick = true;
    // Carga el StaticMesh
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshObstaculo(TEXT("/Game/Meshes/SM_Obstaculo.SM_Obstaculo"));							
	NivelActual = 2;
}

void ANivelMedio::BeginPlay()
{
	Super::BeginPlay();
	// Instanciar las fábricas
	//FABRICA_NAVES_B = NewObject<AP_FM_FABRICA_NAVES_P>();
	//FABRICA_NAVES_B = GetWorld()->SpawnActor<APeticionNaves>(APeticionNaves::StaticClass());
	//NAVE_ENEMIGA_B = GetWorld()->SpawnActor<ANaveEnemigo1>(FVector(0, 100, 214), FRotator(0, 0, 0));
	//FABRICA_OBSTACULOS_B = GetWorld->SpawnActor<APeticionObstaculo>(APeticionObstaculo::StaticClass());
	Posiciones("Cuadrado");
	SpawnNaves();
	// Inicializar temporizadores
	TiempoDesdeUltimaNave = 0.0f;
	TiempoDesdeUltimoObstaculo = 0.0f;
	IntervaloNave = 3.0f;  // Intervalo más corto para más desafío
	IntervaloObstaculo = 8.0f;  // Obstáculos menos frecuentes que las naves
}

void ANivelMedio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANivelMedio::Posiciones(FString forma)
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
			FVector PosicionNave = FVector(X, Y, Centro.Z);
			PosicionesNaves.Add(PosicionNave);
		}

	}
}

void ANivelMedio::SpawnNaves()
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
			NAVE_ENEMIGA_B = navesApoyo->OrdenarNaveEnemiga(PNaveLogistica[RandomIndex]);
			NAVE_ENEMIGA_B->SetActorLocation(PosicionesNaves[i]);
			NAVE_ENEMIGA_BC.Add(NAVE_ENEMIGA_B);


		}
	}
}

void ANivelMedio::SpawnObstaculo()
{
	APeticionObstaculoExplosivos* obstaculoApoyo = GetWorld()->SpawnActor<APeticionObstaculoExplosivos>(APeticionObstaculoExplosivos::StaticClass());
	APeticionObstaculoInertes* obstaculoApoyo2 = GetWorld()->SpawnActor<APeticionObstaculoInertes>(APeticionObstaculoInertes::StaticClass());
	//Aniadir los nombres al TArray
	ObstaculoF.Add("Obstaculo1");
	ObstaculoF.Add("Obstaculo2");
	ObstaculoF.Add("Obstaculo3");
	//Tarray Obstaculos Inertes
	ObstaculoE.Add("Obstaculo4");
	ObstaculoE.Add("Obstaculo5");
	
}

void ANivelMedio::Configurar_Vida_Naves(float Vida)
{
	/*if (NAVE_ENEMIGA_B != nullptr)
	{
		NAVE_ENEMIGA_B->SetVidaMaxima(Vida);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se ha mando la vida de la nave"));
	}*/
	for (ANaveEnemigo* Nave : NAVE_ENEMIGA_BC)
	{
		if (Nave)
		{
			Nave->SetVidaMaxima(Vida);
		}
	}
}

void ANivelMedio::Configurar_Velocidad_Naves(float Velocidad)
{
	/*if (NAVE_ENEMIGA_B != nullptr)
	{
		NAVE_ENEMIGA_B->SetVelocidad(Velocidad);

	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se ha mando la velocidad de la nave"));
	}*/
	for (ANaveEnemigo* Nave : NAVE_ENEMIGA_BC)
	{
		if (Nave)
		{
			Nave->SetVelocidad(Velocidad);
		}
	
	}
}

void ANivelMedio::Configurar_Danio_Disparo_Naves(float Danio_Disparo)
{
	if (NAVE_ENEMIGA_B != nullptr)
	{
		NAVE_ENEMIGA_B->SetDanoProducido(Danio_Disparo);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se ha mando el danio de disparo de la nave"));
	}
}

void ANivelMedio::Configurar_Vida_Obstaculos(float Vida)
{
	if (OBSTACULOS_ESPACIALES_B != nullptr)
	{
		OBSTACULOS_ESPACIALES_B->SetVida(Vida);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando la vida del obstaculo"));
	}
}

void ANivelMedio::Configurar_Danio_Obstaculos(float Danio)
{
	if (OBSTACULOS_ESPACIALES_B != nullptr)
	{
		OBSTACULOS_ESPACIALES_B->SetVelocidadObs(Danio);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando la velocidad del obstaculo"));
	}
}

void ANivelMedio::Configurar_Velocidad_Obstaculos(float Velocidad)
{
	if (OBSTACULOS_ESPACIALES_B != nullptr)
	{
		OBSTACULOS_ESPACIALES_B->SetVelocidadObs(Velocidad);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando el danio del obstaculo"));
	}
}

