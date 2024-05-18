// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigo5.h"
ANaveEnemigo5::ANaveEnemigo5()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	velocidad = 2.0f;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigocaza1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_A.Shape_Wedge_A'"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveEnemigocaza1.Object);
}
