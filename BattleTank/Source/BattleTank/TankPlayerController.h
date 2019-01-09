// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include <string>
#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"


/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	ATank* GetControlledTank() const;
	
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	// Start the tank moving the barrel to shoot where aiming

		void AimTowardsCrossHair();

		// Return an OUT parameter, true if hit landscape
		bool GetSightRayHitLocation(FVector& HitLocation) const;
	
	};

