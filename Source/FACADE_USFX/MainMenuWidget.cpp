// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"
#include "MenuHUD.h"
#include "SlateBasics.h"
#include "SlateExtras.h"
#include "MenuHUD.h"
#include "Widgets/SWeakWidget.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"
#include "Engine/Texture2D.h"
// Define el namespace de texto LOCTEXT_NAMESPACE como "MainMenu"
#define LOCTEXT_NAMESPACE "MainMenu"

// Define la funci�n Construct para construir la interfaz de usuario del men� principal
void MainMenuWidget::Construct(const FArguments& InArgs)
{
    // Habilita el soporte de enfoque de teclado para el widget
    bCanSupportFocus = true;

    // Asigna el HUD propietario pasado como argumento
    OwningHUD = InArgs._OwningHUD;

    // Define los textos de los botones y el t�tulo
    const FText TitleText = LOCTEXT("GameTitle", "");
    const FText PlayText = LOCTEXT("PlayGame", "FACIL");
    const FText SettingsText = LOCTEXT("Settings", "NORMAL");
    const FText QuitText = LOCTEXT("QuitGame", "DIFICIL");

    // Define el estilo de fuente para los botones y el t�tulo
    FSlateFontInfo ButtonTextStyle = FCoreStyle::Get().GetFontStyle("Power_Smurf");
    ButtonTextStyle.Size = 40.0f;

    // Define el estilo de fuente para el t�tulo
    FSlateFontInfo TitleTextStyle = ButtonTextStyle;
    TitleTextStyle.Size = 60.0f;

    // Cargar la textura de dise�o para los botones
    UTexture2D* ButtonDesignTexture = LoadObject<UTexture2D>(nullptr, TEXT("Texture2D'/Game/StarterContent/fuera/2.2'"));
    if (ButtonDesignTexture != nullptr)
    {
        FSlateBrush* ButtonDesignBrush = new FSlateBrush();
        ButtonDesignBrush->SetResourceObject(ButtonDesignTexture);

        // Define el estilo para los botones
        const FButtonStyle& ButtonStyle = FCoreStyle::Get().GetWidgetStyle<FButtonStyle>("Button.Friendly");
        FSlateBrush ButtonBrush = ButtonStyle.Normal;

        // Cambia el color de fondo de los botones
        ButtonBrush.TintColor = FSlateColor(FLinearColor(0.2f, 1469789798.3f, 5866665.4f)); // Cambia el color aqu�

        // Cargar la textura de fondo para el fondo del men�
        UTexture2D* BackgroundTexture = LoadObject<UTexture2D>(nullptr, TEXT("Texture2D'/Game/StarterContent/fuera/2.2'"));
        if (BackgroundTexture != nullptr)
        {
            FSlateBrush* BackgroundBrush = new FSlateBrush();
            BackgroundBrush->SetResourceObject(BackgroundTexture);

            // Agregar la imagen de fondo y el dise�o de los botones al overlay
            ChildSlot
                [
                    SNew(SOverlay)

                        // Fondo de imagen
                        + SOverlay::Slot()
                        [
                            SNew(SImage)
                                .Image(BackgroundBrush)
                        ]

                        // Resto del contenido del men�
                        + SOverlay::Slot()
                        .HAlign(HAlign_Fill)
                        .VAlign(VAlign_Fill)
                        [
                            SNew(SVerticalBox)

                                // T�tulo
                                + SVerticalBox::Slot()
                                .HAlign(HAlign_Center)
                                .VAlign(VAlign_Center)
                                .Padding(FMargin(0.f, 50.f))
                                [
                                    SNew(STextBlock)
                                        .Font(TitleTextStyle)
                                        .ColorAndOpacity(FLinearColor::White)
                                        .Text(TitleText)
                                ]

                                // Bot�n de "Continuar"
                                + SVerticalBox::Slot()
                                .HAlign(HAlign_Center)
                                .VAlign(VAlign_Center)
                                .Padding(FMargin(0.f, 20.f))
                                [
                                    SNew(SButton)
                                        .ButtonStyle(&ButtonStyle) // Usa el estilo de bot�n modificado
                                        .OnClicked(this, &MainMenuWidget::OnFacilClicked)
                                        .ContentPadding(FMargin(50.f))
                                        [
                                            SNew(STextBlock)
                                                .Font(ButtonTextStyle)  // Cambi� la fuente a "Arial" y ajust� el tama�o del texto
                                                .ColorAndOpacity(FLinearColor::Green)  // Cambi� el color del texto a blanco
                                                .Text(PlayText)
                                        ]

                                ]  
                ]
                ];


        }
    }
}

FReply MainMenuWidget::OnFacilClicked() const
{
    if (OwningHUD.IsValid())
    {
        OwningHUD->StartGameplayFacil();
    }
    return FReply::Handled();
}

// Se deshace de la definici�n del namespace de texto LOCTEXT_NAMESPACE
#undef LOCTEXT_NAMESPACE
