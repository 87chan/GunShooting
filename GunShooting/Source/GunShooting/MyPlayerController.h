// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GUNSHOOTING_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay()				override;
	virtual void Tick(float DeltaSeconds)	override;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MyPlayerController")
	int32		ANIM_NUM = 5;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MyPlayerController")
	float		ANIM_COUNTUP_TIME = 0.02f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MyPlayerController")
	float		TRACE_LENGTH = 10000.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "MyPlayerController")
	bool		IsShot = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "MyPlayerController")
	float		Count = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "MyPlayerController")
	int32		AnimCount = 0;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "MyPlayerController")
	FVector2D	ShotPos = FVector2D::ZeroVector;
};
