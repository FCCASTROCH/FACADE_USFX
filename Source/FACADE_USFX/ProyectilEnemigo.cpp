// Fill out your copyright notice in the Description page of Project Settings.
//

#include "ProyectilEnemigo.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "FACADE_USFXPawn.h"

// Sets default values
AProyectilEnemigo::AProyectilEnemigo()
{
    // Establece este actor para llamar a Tick() en cada cuadro
    PrimaryActorTick.bCanEverTick = true;

    // Creando la malla del proyectil
    Projectil_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectil_Mesh"));
    RootComponent = Projectil_Mesh;

    static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
    if (MeshAsset.Succeeded())
    {
        Projectil_Mesh->SetStaticMesh(MeshAsset.Object);

        //// Modificar la escala del componente de malla
        FVector NewScale(0.5f, 0.5f, 0.5f); // Escala modificada
        Projectil_Mesh->SetWorldScale3D(NewScale);
    }
    // Controlando el movimiento del proyectil
    Projectil_Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectil_Movement"));
    Projectil_Movement->InitialSpeed = 750.0f;
    Projectil_Movement->MaxSpeed = 850.0f;
    Projectil_Movement->bRotationFollowsVelocity = true;
    Projectil_Movement->bShouldBounce = false;
    Projectil_Movement->ProjectileGravityScale = 0.0f;

    // Creando el componente de colisión del proyectil
    Projectil_Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Projectil_Collision"));
    Projectil_Collision->SetupAttachment(RootComponent);

    // Estableciendo el tiempo de vida inicial del proyectil
    InitialLifeSpan = 5.f;

    // Daño predeterminado del proyectil
    DanioProvocado = 0.f;
    //Configurando el proyectil para que genere eventos de colision
    Projectil_Collision->SetCapsuleHalfHeight(160.0f);
    Projectil_Collision->SetCapsuleRadius(160.0f);
}

// Called when the game starts or when spawned
void AProyectilEnemigo::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AProyectilEnemigo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AProyectilEnemigo::Set_Danio(float Danio)
{
    Danio_D_B = Danio;
}

void AProyectilEnemigo::NotifyActorBeginOverlap(AActor* OtherActor)
{
    Super::NotifyActorBeginOverlap(OtherActor);

    AFACADE_USFXPawn* Jugador = Cast<AFACADE_USFXPawn>(OtherActor);

    if (Jugador)
    {
        Jugador->Damage(Danio_D_B);
        //Jugador->Destroy();
    }
    //Destroy();
}

void AProyectilEnemigo::FireInDiagonal()
{
    if (Projectil_Movement)
    {
        // Establecer la velocidad inicial para moverse diagonalmente hacia arriba
        FVector DiagonalVelocity = FVector(1.0f, 0.0f, 1.0f).GetSafeNormal() * Projectil_Movement->InitialSpeed;
        Projectil_Movement->Velocity = DiagonalVelocity;
    }
}

//#include "ProyectilEnemigo.h"
//#include "UObject/ConstructorHelpers.h"
//#include "Components/CapsuleComponent.h"
//#include "Components/CapsuleComponent.h"
//#include "Particles/ParticleSystem.h"
//#include "Components/StaticMeshComponent.h"
//#include "Particles/ParticleSystem.h"
//#include "Components/ShapeComponent.h"
//#include "Kismet/GameplayStatics.h"
//#include "Sound/SoundBase.h"
//#include "FACADE_USFXPawn.h"
//// Sets default values
//AProyectilEnemigo::AProyectilEnemigo()
//{
//	// Establece este actor para llamar a Tick() en cada cuadro
//	PrimaryActorTick.bCanEverTick = true;
//
//	// Creando la malla del proyectil
//	Projectil_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectil_Mesh"));
//	RootComponent = Projectil_Mesh;
//
//	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
//	if (MeshAsset.Succeeded())
//	{
//		Projectil_Mesh->SetStaticMesh(MeshAsset.Object);
//
//		//// Modificar la escala del componente de malla
//		FVector NewScale(0.5f, 0.5f, 0.5f); // Escala modificada
//		Projectil_Mesh->SetWorldScale3D(NewScale);
//	}
//	// Controlando el movimiento del proyectil
//	Projectil_Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectil_Movement"));
//	Projectil_Movement->InitialSpeed = 750.0f;
//	Projectil_Movement->MaxSpeed = 850.0f;
//	Projectil_Movement->bRotationFollowsVelocity = true;
//	Projectil_Movement->bShouldBounce = false;
//	Projectil_Movement->ProjectileGravityScale = 0.0f;
//
//	// Creando el componente de colisión del proyectil
//	Projectil_Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Projectil_Collision"));
//	Projectil_Collision->SetupAttachment(RootComponent);
//
//	// Estableciendo el tiempo de vida inicial del proyectil
//	InitialLifeSpan = 5.f;
//
//	// Daño predeterminado del proyectil
//	DanioProvocado = 0.f;
//	//Configurando el proyectil para que genere eventos de colision
//	Projectil_Collision->SetCapsuleHalfHeight(160.0f);
//	Projectil_Collision->SetCapsuleRadius(160.0f);
//}
//
//// Called when the game starts or when spawned
//void AProyectilEnemigo::BeginPlay()
//{
//	Super::BeginPlay();
//}
//
//// Called every frame
//void AProyectilEnemigo::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}
//
//void AProyectilEnemigo::Set_Danio(float Danio)
//{
//	Danio_D_B = Danio;
//}
//
//void AProyectilEnemigo::NotifyActorBeginOverlap(AActor* OtherActor)
//{
//	Super::NotifyActorBeginOverlap(OtherActor);
//
//	AFACADE_USFXPawn* Jugador = Cast<AFACADE_USFXPawn>(OtherActor);
//
//	if (Jugador)
//	{
//		Jugador->Damage(Danio_D_B);
//		//Jugador->Destroy();
//	}
//	//Destroy();
//}
////void AProyectilEnemigo::FireInDiagonal()
////{
////	if (AProyectilEnemigo::Projectil_Movement != nullptr)
////	{
////		// Establecer la velocidad inicial para moverse diagonalmente hacia arriba
////		FVector DiagonalVelocity = FVector(1.0f, 0.0f, 1.0f).GetSafeNormal() * ProjectileMovement->InitialSpeed;
////		ProjectileMovement->Velocity = DiagonalVelocity;
////	}
////}
//void AProyectilEnemigo::FireInDiagonal()
//{
//	if (Projectil_Movement)
//	{
//		// Establecer la velocidad inicial para moverse diagonalmente hacia arriba
//		FVector DiagonalVelocity = FVector(1.0f, 0.0f, 1.0f).GetSafeNormal() * Projectil_Movement->InitialSpeed;
//		Projectil_Movement->Velocity = DiagonalVelocity;
//	}
//}