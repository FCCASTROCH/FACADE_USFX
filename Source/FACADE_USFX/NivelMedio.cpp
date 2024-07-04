// Fill out your copyright notice in the Description page of Project Settings.


#include "NivelMedio.h"
#include "Obstaculo.h"
#include "Kismet/GameplayStatics.h"
#include "NaveEnemigo.h"
#include "PeticionNaves.h"
#include "PeticionObstaculo.h"
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

	Posiciones("Cuadrado");
	SpawnNaves();
	//spawnwar Obstaculos
	Posicion();
	SpawnObstaculos();
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
	float CampoRadio = 1500.0f; // Radio para el campo de asteroides
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

	}if (forma == "CampoDeAsteroides") {
		int NumAsteroides = 20; // Número de asteroides en el campo

		for (int i = 0; i < NumAsteroides; i++) {
			float Angle = FMath::RandRange(0.0f, 2 * PI);
			float Distance = FMath::RandRange(0.0f, CampoRadio);
			float X = Centro.X + Distance * FMath::Cos(Angle);
			float Y = Centro.Y + Distance * FMath::Sin(Angle);
			FVector PosicionAsteroide = FVector(X, Y, Centro.Z);
			PosicionesNaves.Add(PosicionAsteroide);
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

void ANivelMedio::SpawnObstaculos()
{
	//3 obstaculos explosivos
	APeticionObstaculoExplosivos* obstaculoE = GetWorld()->SpawnActor<APeticionObstaculoExplosivos>(APeticionObstaculoExplosivos::StaticClass());
	//2 obstaculos inertes
	//APeticionObstaculoInertes* obstaculoI = GetWorld()->SpawnActor<APeticionObstaculoInertes>(APeticionObstaculoInertes::StaticClass());
	//Aniadir los nombres al TArray
	ObstaculoF.Add("Obstaculo1");
	ObstaculoF.Add("Obstaculo2");
	ObstaculoF.Add("Obstaculo3");
	//Tarray Obstaculos Inertes
	//ObstaculoE.Add("Obstaculo4");
	//ObstaculoE.Add("Obstaculo5");
	//Spawnea las naves enemigas
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		for (int i = 0; i < PosicionesObstaculos.Num(); i++) {

				int32 RandomIndex = FMath::RandRange(0, ObstaculoF.Num() - 1);//Genera un numero aleatorio entre 0 y el tamaño del TArray - 1
				// Spawnea la nave aleatoria
				OBSTACULOS_ESPACIALES_B = obstaculoE->OrdenarObstaculo(ObstaculoF[RandomIndex]);
				OBSTACULOS_ESPACIALES_B->SetActorLocation(PosicionesObstaculos[i]);
				OBSTACULOS_ESPACIALES_BC.Add(OBSTACULOS_ESPACIALES_B);
			}
		}
	
}

void ANivelMedio::Posicion()
{
	FVector UbicacionDeInicio = FVector(1850.0f, -1540.7f, 214.0f);
	FVector UbicacionDeInici = FVector(1750.0f, -1040.7f, 214.0f);
	FVector Centro = FVector(950.0f, -140.7f, 214.0f);
	float Radio = 600.0f;
	float CampoRadio = 1500.0f; // Radio para el campo de asteroides
	int NumAsteroides = 20; // Número de asteroides en el campo

	for (int i = 0; i < NumAsteroides; i++) {
		float Angle = FMath::RandRange(0.0f, 2 * PI);
		float Distance = FMath::RandRange(0.0f, CampoRadio);
		float X = Centro.X + Distance * FMath::Cos(Angle);
		float Y = Centro.Y + Distance * FMath::Sin(Angle);
		FVector PosicionAsteroide = FVector(X, Y, Centro.Z);
		PosicionesObstaculos.Add(PosicionAsteroide);
	}
}

void ANivelMedio::Configurar_Vida_Naves(float Vida)
{
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
	for (ANaveEnemigo* Nave : NAVE_ENEMIGA_BC) {
		if (Nave) {
			NAVE_ENEMIGA_B->SetDanoProducido(Danio_Disparo);
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se ha mando el danio de disparo de la nave"));
		}
	}
}

void ANivelMedio::Configurar_Vida_Obstaculos(float Vida)
{
	for (AObstaculo* Obsta : OBSTACULOS_ESPACIALES_BC) {
		if (Obsta) {
			Obsta->SetVida(Vida);
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando la vida del obstaculo"));
		}
	}
	/*if (OBSTACULOS_ESPACIALES_B != nullptr)
	{
		OBSTACULOS_ESPACIALES_B->SetVida(Vida);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando la vida del obstaculo"));
	}*/
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

