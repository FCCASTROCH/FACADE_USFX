// Fill out your copyright notice in the Description page of Project Settings.


#include "NivelMedio.h"
#include "Obstaculo.h"
#include "Kismet/GameplayStatics.h"
#include "NaveEnemigo.h"
#include "PeticionNaves.h"
#include "PeticionObstaculo.h"
#include "NaveEnemigo2.h"
#include "NaveEnemigo1.h"

ANivelMedio::ANivelMedio()
{
	PrimaryActorTick.bCanEverTick = true;
    // Carga el StaticMesh
 
}

void ANivelMedio::BeginPlay()
{
	Super::BeginPlay();
	// Instanciar las fábricas
	//FABRICA_NAVES_B = NewObject<AP_FM_FABRICA_NAVES_P>();
	//FABRICA_NAVES_B = GetWorld()->SpawnActor<APeticionNaves>(APeticionNaves::StaticClass());
	NAVE_ENEMIGA_B = GetWorld()->SpawnActor<ANaveEnemigo1>(FVector(0, 100, 214), FRotator(0, 0, 0));
	//FABRICA_OBSTACULOS_B = GetWorld->SpawnActor<APeticionObstaculo>(APeticionObstaculo::StaticClass());

	// Inicializar temporizadores
	TiempoDesdeUltimaNave = 0.0f;
	TiempoDesdeUltimoObstaculo = 0.0f;
	IntervaloNave = 3.0f;  // Intervalo más corto para más desafío
	IntervaloObstaculo = 8.0f;  // Obstáculos menos frecuentes que las naves
}

void ANivelMedio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Generación de naves basada en intervalos
	//TiempoDesdeUltimaNave += DeltaTime;
	//if (TiempoDesdeUltimaNave >= IntervaloNave) {
	//	TiempoDesdeUltimaNave = 0.0f;
	//	// Generar diferentes tipos de naves
	//	//NAVE_ENEMIGA_B = FABRICA_NAVES_B->Crear_Nave(FString::Printf(TEXT("Nave_Enemiga_%d"), FMath::RandRange(1, 5)));
	//	NAVE_ENEMIGA_B = FABRICA_NAVES_B->OrdenarNaveEnemiga(FString::Printf(TEXT("Nave_Enemiga_%d"), FMath::RandRange(1, 5)));
	//}

	//// Generación de obstáculos basada en intervalos
	//TiempoDesdeUltimoObstaculo += DeltaTime;
	//if (TiempoDesdeUltimoObstaculo >= IntervaloObstaculo) {
	//	TiempoDesdeUltimoObstaculo = 0.0f;
	//	// Generar uno de los tres tipos de obstáculos al azar
	//	FString TipoObstaculo;
	//	switch (FMath::RandRange(1, 3)) {
	//	case 1: TipoObstaculo = TEXT("Asteroide"); break;
	//	case 2: TipoObstaculo = TEXT("Cometa"); break;
	//	case 3: TipoObstaculo = TEXT("Mina_Galactica"); break;
	//	}
	//	//Arreglar
	//	//OBSTACULOS_ESPACIALES_B = FABRICA_OBSTACULOS_B->Crear_Obstaculos(TipoObstaculo);
	//}

}

void ANivelMedio::Configurar_Vida_Naves(float Vida)
{
	if (NAVE_ENEMIGA_B != nullptr)
	{
		NAVE_ENEMIGA_B->SetVidaMaxima(Vida);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se ha mando la vida de la nave"));
	}
}

void ANivelMedio::Configurar_Velocidad_Naves(float Velocidad)
{
	if (NAVE_ENEMIGA_B != nullptr)
	{
		NAVE_ENEMIGA_B->SetVelocidad(Velocidad);

	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se ha mando la velocidad de la nave"));
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

void ANivelMedio::PocisionNaves(FString forma)
{
}
