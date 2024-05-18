// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigo4.h"
ANaveEnemigo4::ANaveEnemigo4()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	velocidad = 2.0f;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigocaza1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveEnemigocaza1.Object);
}
