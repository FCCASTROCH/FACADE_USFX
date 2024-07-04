// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MenuHUD.generated.h"

UCLASS()
class FACADE_USFX_API AMenuHUD : public AHUD
{
	GENERATED_BODY()
public:
    // Prepara la interfaz para ser mostrada
    void ShowMenu();
    void StartGameplayFacil();
    void RemoveMenu();

protected:

    TSharedPtr<class MainMenuWidget> MenuWidget;
    TSharedPtr<class SWidget> MenuWidgetContainer;
    class AFacade* Facade;
    virtual void BeginPlay() override;
};
