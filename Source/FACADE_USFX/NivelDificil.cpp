// Fill out your copyright notice in the Description page of Project Settings.


#include "NivelDificil.h"
#include "NaveEnemigo.h"
#include "Obstaculo.h"
#include "PeticionNaves.h"
#include "PeticionObstaculo.h"
#include "NaveEnemigo1.h"
ANivelDificil::ANivelDificil()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ANivelDificil::BeginPlay()
{
	Super::BeginPlay();

	NAVE_ENEMIGA_C = GetWorld()->SpawnActor<ANaveEnemigo1>(FVector(100, 0, 214), FRotator(0, 0, 0));
	// Instanciar las fábricas
	//FABRICA_NAVES_C = GetWorld()->SpawnActor<APeticionNaves>(APeticionNaves::StaticClass());
	//FABRICA_OBSTACULOS_C = GetWorld()->SpawnActor<APeticionObstaculo>(APeticionObstaculo::StaticClass());

	// Inicializar temporizadores
	TiempoDesdeUltimaNave = 0.0f;
	TiempoDesdeUltimoObstaculo = 0.0f;
	IntervaloNave = 2.0f;  // Intervalo más corto para más desafío
	IntervaloObstaculo = 5.0f;  // Generación más frecuente de obstáculos

}

void ANivelDificil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//// Generación de naves basada en intervalos
	//TiempoDesdeUltimaNave += DeltaTime;
	//if (TiempoDesdeUltimaNave >= IntervaloNave) {
	//	TiempoDesdeUltimaNave = 0.0f;
	//	// Generar una nave aleatoria entre los tipos disponibles
	//	NAVE_ENEMIGA_C = FABRICA_NAVES_C->OrdenarNaveEnemiga(FString::Printf(TEXT("Nave_Enemiga_%d"), FMath::RandRange(1, 5)));
	//}

	//// Generación de obstáculos basada en intervalos
	//TiempoDesdeUltimoObstaculo += DeltaTime;
	//if (TiempoDesdeUltimoObstaculo >= IntervaloObstaculo) {
	//	TiempoDesdeUltimoObstaculo = 0.0f;
	//	// Generar uno de los varios tipos de obstáculos al azar
	//	FString TipoObstaculo;
	//	switch (FMath::RandRange(1, 5)) {
	//	case 1: TipoObstaculo = TEXT("Asteroide"); break;
	//	case 2: TipoObstaculo = TEXT("Cometa"); break;
	//	case 3: TipoObstaculo = TEXT("Mina_Galactica"); break;
	//	case 4: TipoObstaculo = TEXT("Satelite"); break;
	//	case 5: TipoObstaculo = TEXT("Meteorito"); break;
	//	}
	//	//Arreglar
		//OBSTACULOS_ESPACIALES_C = FABRICA_OBSTACULOS_C->Crear_Obstaculos(TipoObstaculo);
	//}
}

void ANivelDificil::Configurar_Vida_Naves(float Vida)
{
	if (NAVE_ENEMIGA_C != nullptr)
	{
		NAVE_ENEMIGA_C->SetVidaMaxima(Vida);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando la vida de la nave"));
	}
}

void ANivelDificil::Configurar_Velocidad_Naves(float Velocidad)
{
	if (NAVE_ENEMIGA_C != nullptr)
	{
		NAVE_ENEMIGA_C->SetVelocidad(Velocidad);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando la velocidad de la nave"));
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

void ANivelDificil::PocisionNaves(FString forma)
{
}


