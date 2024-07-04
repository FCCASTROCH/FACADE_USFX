// Fill out your copyright notice in the Description page of Project Settings.


#include "Publicador.h"
#include "ISuscriptor.h"
// Sets default values
//APublicador::APublicador()
//{
// 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
//	Subscriptores = TArray<AActor*>();
//
//
//}
//
//// Called when the game starts or when spawned
//void APublicador::BeginPlay()
//{
//	Super::BeginPlay();
//	
//}
//
//// Called every frame
//void APublicador::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}
//
//void APublicador::Subscribirse(AActor* _Subscriptor)
//{
//	Subscriptores.Add(_Subscriptor);
//}
//
//void APublicador::DeSubscribirse(AActor* _Subscriptor)
//{
//	Subscriptores.Remove(_Subscriptor);
//
//}
//
//void APublicador::NotificadorSubscriptores()
//{
//	for (AActor* Subscriptor : Subscriptores)
//	{
//		IISuscriptor *ISuscriptor = Cast<IISuscriptor>(Subscriptor);
//		if (ISuscriptor)
//		{
//			ISuscriptor->Actualizar();
//			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Notificando a los subscriptores"));
//		}
//		else
//		{
//			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se pudo notificar a los subscriptores"));
//		}
//	}
//}
//void APublicador::Actualizar()
//{
//	NotificadorSubscriptores();
//}
