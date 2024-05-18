// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigo3.h"

ANaveEnemigo3::ANaveEnemigo3()
{

	PrimaryActorTick.bCanEverTick = true;
	velocidad = 2.0f;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigocaza1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveEnemigocaza1.Object);
}
