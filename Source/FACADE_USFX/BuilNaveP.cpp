// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilNaveP.h"
#include "NaveEnemigoPrincipal.h"
// Sets default values
ABuilNaveP::ABuilNaveP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilNaveP::BeginPlay()
{
	Super::BeginPlay();
	naveNodriza = GetWorld()->SpawnActor<ANaveEnemigoPrincipal>(ANaveEnemigoPrincipal::StaticClass(), FVector(-900, 1250, 255), FRotator(0, 0, 0));
	naveNodriza->SetActorScale3D(FVector(1.5, 1.5, 1.5));
	naveNodriza->SetTipoMovimiento("Movimiento 1");
	naveNodriza->SetBarrera("Barrera 1");
}

// Called every frame
void ABuilNaveP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABuilNaveP::ConstruirMovimientoDeNave()
{
	naveNodriza->MovimientoDeNave();
}

void ABuilNaveP::ConstruirPocisionNaves()
{
	naveNodriza->PocisionNaves("Cuadrado");
}

void ABuilNaveP::ConstruirSpawnNaves()
{
	naveNodriza->SpawnNaves();
}

class ANaveEnemigoPrincipal* ABuilNaveP::getNaveNodriza()
{
	return naveNodriza;
}


//class ABuilNaveP* ABNaveNodrizaConcreto::getNaveNodriza()
//{
//	return naveNodriza;
//}
