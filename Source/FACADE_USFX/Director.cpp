// Fill out your copyright notice in the Description page of Project Settings.


#include "Director.h"

// Sets default values
ADirector::ADirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
// Called when the game starts or when spawned
void ADirector::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ADirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ADirector::construirNaveNodriza()
{

	ConstruyendoND->ConstruirMovimientoDeNave();
	ConstruyendoND->ConstruirPocisionNaves();
	//ConstruyendoND->ConstruirBarreraEscudo();
	ConstruyendoND->ConstruirSpawnNaves();
}

void ADirector::Construyendo(AActor* constructor)
{
	ConstruyendoND = Cast<IIBNEnemiga>(constructor);
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Construyendo......"));
	GEngine->AddOnScreenDebugMessage(-1, 4.f, FColor::Green, TEXT("Construyendo Escudos....."));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Construyendo Naves....."));
	GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Green, TEXT("Nave Se Retira ....."));

	//otro nave
}

class ANaveEnemigoPrincipal* ADirector::obtenerNave()
{
	return ConstruyendoND->getNaveNodriza();
}
//
//ANaveEnemigoPrincipal* ADefensaDirector::obtenerNave()
//{
//	return ConstruyendoND->getNaveNodriza();
//}
