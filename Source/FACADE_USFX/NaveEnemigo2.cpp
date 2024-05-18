// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigo2.h"

ANaveEnemigo2::ANaveEnemigo2()
{
	PrimaryActorTick.bCanEverTick = true;
	velocidad = 2.0f;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigocaza1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));

	NaveEnemigoMesh->SetStaticMesh(MeshNaveEnemigocaza1.Object);
}
