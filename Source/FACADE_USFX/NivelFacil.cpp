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
ANivelFacil::ANivelFacil()
{
	PrimaryActorTick.bCanEverTick = true;
	NivelActual = 1;
}

void ANivelFacil::BeginPlay()
{
	Super::BeginPlay();
	// Instanciar la fábrica
	//FABRICA_NAVES = GetWorld()->SpawnActor<APeticionNaves>(APeticionNaves::StaticClass());	
	//APeticionNaves* NaveEnemiga = GetWorld()->SpawnActor<APeticionNaves>(APeticionNaves::StaticClass());
	//APeticionNavesEnemigas* FabricaNavesAtaque = GetWorld()->SpawnActor<APeticionNavesEnemigas>(FVector(0, 0, 214), FRotator(0, 0, 0));
	//ANaveEnemigo* Nave = FabricaNavesAtaque->CrearNaveEnemiga("Nave1")
	//fabrica de naves
	//pocicion de las APeticionNavesEnemigas

	//NaveEnemiga = GetWorld()->SpawnActor<APeticionNavesEnemigas>(APeticionNavesEnemigas::StaticClass());
	//NaveEnemiga->CrearNaveEnemiga("Nave1");
	//NaveEnemiga->OrdenarNaveEnemiga("Nave1");

	NAVE_ENEMIGA_A = GetWorld()->SpawnActor<ANaveEnemigo1>(FVector(0, 400, 214), FRotator(0, 0, 0));
	
	// Inicializar temporizador para generación de naves
	TiempoDesdeUltimaNave = 0.0f;
	IntervaloNave = 5.0f;  // Intervalo en segundos para generar una nueva nave

}

void ANivelFacil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//TiempoDesdeUltimaNave += DeltaTime;
	//if (TiempoDesdeUltimaNave >= IntervaloNave && NivelActual <= 3) {
	//	TiempoDesdeUltimaNave = 0.0f;

	//	FString NaveID;
	//	switch (NivelActual) {
	//	case 1:
	//		NaveID = TEXT("Nave_Enemiga_01");
	//		break;
	//	case 2:
	//		NaveID = TEXT("Nave_Enemiga_02");
	//		break;
	//	case 3:
	//		NaveID = TEXT("Nave_Enemiga_03");
	//		break;
	//	}

	//	// Generar la nave correspondiente al nivel actual
	//	//NAVE_ENEMIGA_A = FABRICA_NAVES->GenerarNave(NaveID);
	//	TiempoNivel += DeltaTime;
	//	if (NivelActual < 3 && TiempoNivel >= 20.0f) {  // Incrementar nivel cada 60 segundos hasta el nivel 3
	//		NivelActual++;
	//		TiempoNivel = 0;  // Resetear contador de tiempo para el siguiente nivel
	//	}
	//}
}

void ANivelFacil::PocisionNaves(FString forma)
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

void ANivelFacil::SpawnNaves()
{
	APeticionNaves* FABRICA_NAVES = GetWorld()->SpawnActor<APeticionNavesEnemigas>(APeticionNavesEnemigas::StaticClass());
	//Aniadir los nombres al TArray
	Naves.Add("Nave1");
	Naves.Add("Nave2");
	Naves.Add("Nave3");
	Naves.Add("Nave4");
	Naves.Add("Nave5");

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{

		for (int i = 0; i < PosicionesNaves.Num(); i++) {

			int32 CategoriaNave = FMath::RandRange(0, 2);
			if (CategoriaNave == 0)
			{
				int32 RandomIndex = FMath::RandRange(0, Naves.Num() - 1);//Genera un numero aleatorio entre 0 y el tamaño del TArray - 1
				// Spawnea la nave aleatoria
				ANaveEnemigo* NaveEnemigaAtaque = FABRICA_NAVES->OrdenarNaveEnemiga(Naves[RandomIndex]);

				NavesEnemigas.Add(NaveEnemigaAtaque);

			}
			else if (CategoriaNave == 1)
			{
				// Spawnea la nave aleatoria
				int32 RandomIndex = FMath::RandRange(0, Naves.Num() - 1);//Genera un numero aleatorio entre 0 y el tamaño del TArray - 1
				// Spawnea la nave aleatoria
				ANaveEnemigo* NaveEnemigaAtaqu = FABRICA_NAVES->OrdenarNaveEnemiga(Naves[RandomIndex]);

				NavesEnemigas.Add(NaveEnemigaAtaqu);
			}
			else if (CategoriaNave == 2)
			{
				// Spawnea la nave aleatoria
				int32 RandomIndex = FMath::RandRange(0, Naves.Num() - 1);//Genera un numero aleatorio entre 0 y el tamaño del TArray - 1
				// Spawnea la nave aleatoria
				ANaveEnemigo* NaveEnemigaAta = FABRICA_NAVES->OrdenarNaveEnemiga(Naves[RandomIndex]);

				NavesEnemigas.Add(NaveEnemigaAta);
			}

		}
	}
	
}

void ANivelFacil::Configurar_Vida_Naves(float Vida)
{
	if (NAVE_ENEMIGA_A != nullptr)
	{
		//configurar la vida de la naveenemiga
		NAVE_ENEMIGA_A->SetVidaMaxima(Vida);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Cyan, TEXT("No se mando la vida de la nave"));
	}
}

void ANivelFacil::Configurar_Velocidad_Naves(float Velocidad)
{
	if (NAVE_ENEMIGA_A != nullptr)
	{
		NAVE_ENEMIGA_A->SetVelocidad(Velocidad);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Cyan, TEXT("No se mando la velocidad de la nave"));
	}
}

void ANivelFacil::Configurar_Danio_Disparo_Naves(float Danio_Disparo)
{
	if (NAVE_ENEMIGA_A != nullptr)
	{
		NAVE_ENEMIGA_A->SetDanoProducido(Danio_Disparo);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Cyan, TEXT("No se mando el daño de la nave"));
	}
}

void ANivelFacil::Configurar_Vida_Obstaculos(float Vida)
{
	if (OBSTACULOS_ESPACIALES_A != nullptr)
	{
		OBSTACULOS_ESPACIALES_A->SetVida(Vida);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Cyan, TEXT("No se mando la vida del obstaculo"));
	}
}

void ANivelFacil::Configurar_Danio_Obstaculos(float Velocidad)
{
	if (OBSTACULOS_ESPACIALES_A != nullptr)
	{
		OBSTACULOS_ESPACIALES_A->SetDanioObs(Velocidad);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Cyan, TEXT("No se mando el daño del obstaculo"));
	}

}

void ANivelFacil::Configurar_Velocidad_Obstaculos(float Danio)
{
	if (OBSTACULOS_ESPACIALES_A != nullptr) {
		OBSTACULOS_ESPACIALES_A->SetVelocidadObs(Danio);
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Cyan, TEXT("No se mando la velocidad del obstaculo"));
	}
}

