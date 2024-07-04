// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SlateBasics.h"    
#include "SlateExtras.h"
/**
 * 
 */
class FACADE_USFX_API MainMenuWidget : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(MainMenuWidget)
        : _OwningHUD(nullptr)
        {}

        SLATE_ARGUMENT(TWeakObjectPtr<class AMenuHUD>, OwningHUD)

    SLATE_END_ARGS()

    // Construye los elementos del menu, ( BOTONES )
    void Construct(const FArguments& InArgs);
    FReply OnFacilClicked() const;
    virtual bool SupportsKeyboardFocus() const override { return true; }


    TWeakObjectPtr<class AMenuHUD> OwningHUD;
};
