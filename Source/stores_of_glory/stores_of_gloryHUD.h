// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "stores_of_gloryHUD.generated.h"

UCLASS()
class Astores_of_gloryHUD : public AHUD
{
	GENERATED_BODY()

public:
	Astores_of_gloryHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

