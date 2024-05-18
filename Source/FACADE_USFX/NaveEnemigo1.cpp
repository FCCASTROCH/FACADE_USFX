// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigo1.h"
#include "Components/StaticMeshComponent.h"
#include "DisparoComponent.h"


ANaveEnemigo1::ANaveEnemigo1()
{
	PrimaryActorTick.bCanEverTick = true;
	velocidad = 2.0f;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigocaza1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));

	NaveEnemigoMesh->SetStaticMesh(MeshNaveEnemigocaza1.Object);
}
