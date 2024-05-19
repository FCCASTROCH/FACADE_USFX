// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigo1.h"
#include "Components/StaticMeshComponent.h"
#include "DisparoComponent.h"


ANaveEnemigo1::ANaveEnemigo1()
{
	PrimaryActorTick.bCanEverTick = true;
	//velocidad = 2.0f;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigocaza1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));

	NaveEnemigoMesh->SetStaticMesh(MeshNaveEnemigocaza1.Object);
}
void ANaveEnemigo1::BeginPlay()
{
	Super::BeginPlay();

}
void ANaveEnemigo1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}
void ANaveEnemigo1::Mover(float DeltaTime) {
    // Obtiene la posición actual del actor
    FVector PosicionActual = GetActorLocation();
    float NewY; //Declara la nueva posición en Y
    float PendienteActual = -100; //Declara la pendiente actual
    //float Velocidad = 200.0f; //Declara la velocidad de la nave 
    float NewX; //Declara la nueva posición en X    

    // Si han pasado más de 5 segundos, cambia la pendiente
    if (Timer <= 1.0f && Timer >= 0)
    {
        NewY = PosicionActual.Y + PendienteActual * DeltaTime;
        // Reinicia el temporizador
        NewX = PosicionActual.X - Velocidad * DeltaTime;

    }
    else
    {
        NewY = PosicionActual.Y - PendienteActual * DeltaTime;
        NewX = PosicionActual.X;
    }
    TiempoTranscurrido += PI / 2 * DeltaTime;
    Timer = FMath::Sin(TiempoTranscurrido); //Alternando para que sea positivo y negativo
    // Actualiza la posición del actor
    SetActorLocation(FVector(NewX, NewY, PosicionActual.Z));

    if (GetActorLocation().X <= -1800.0f)
    {

        SetActorLocation(FVector(1850.0f, NewY, PosicionActual.Z));


    }
    if (GetActorLocation().Y >= 1850)
    {
        SetActorLocation(FVector(NewX, -1850.0f, PosicionActual.Z));
    }

    if (GetActorLocation().Y <= -1850)
    {
        SetActorLocation(FVector(NewX, 1850.0f, PosicionActual.Z));
    }
}