// Fill out your copyright notice in the Description page of Project Settings.


#include "BarreraProtectora.h"
#include "ISuscriptor.h"
#include "Publicador.h"
#include "NaveEnemigo.h"
//ABarreraProtectora::ABarreraProtectora()
//{
//		PrimaryActorTick.bCanEverTick = true;
//	flags = 0;
//	PromedioNE = 0;
//	TimeObstaculo = 0;
//}
//
//void ABarreraProtectora::BeginPlay()
//{
//	Super::BeginPlay();
//}
//
//void ABarreraProtectora::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//}
//
//void ABarreraProtectora::VPromedioNE()
//{
//	float EnergiaTotalNavesEnemigas = 0;
//	for (AActor* Objetivo : Objetivos)
//	{
//		IISuscriptor* Suscriptor = Cast<IISuscriptor>(Objetivo);
//		if (Suscriptor)
//		{
//			ANaveEnemigo* Nave = Cast<ANaveEnemigo>(Objetivo);
//			if (Nave)
//			{
//				EnergiaTotalNavesEnemigas += Nave->GetEnergia();
//
//			}
//
//		}
//	}
//	PromedioNE = EnergiaTotalNavesEnemigas / contadorNavesEnemigas;
//}
//
//void ABarreraProtectora::IniBarrera()
//{
//	NotificadorSubscriptores();
//}
//
//void ABarreraProtectora::SetTimer(float NewTimeObstaculo)
//{
//	TimeObstaculo = NewTimeObstaculo;
//	if (TimeObstaculo > 1.0f)
//		IniBarrera();
//}
