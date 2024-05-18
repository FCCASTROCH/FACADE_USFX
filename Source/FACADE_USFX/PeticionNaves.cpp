// Fill out your copyright notice in the Description page of Project Settings.


#include "PeticionNaves.h"
#include "NaveEnemigo.h"
// Sets default values
APeticionNaves::APeticionNaves()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APeticionNaves::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APeticionNaves::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ANaveEnemigo* APeticionNaves::OrdenarNaveEnemiga(FString Categoria)
{
	//crear una nave enemiga
	ANaveEnemigo* NaveEnemiga = CrearNaveEnemiga(Categoria);
	return NaveEnemiga;
}


