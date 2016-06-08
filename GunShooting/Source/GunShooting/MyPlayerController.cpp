// Fill out your copyright notice in the Description page of Project Settings.

#include "GunShooting.h"
#include "MyPlayerController.h"

/**********************************************************
/* ゲーム開始時.
**********************************************************/
void AMyPlayerController::BeginPlay()
{
	// デバッグ表示.
	//ConsoleCommand("stat fps", true);
	//ConsoleCommand("stat unit", true);
}

/**********************************************************
/* 更新処理.
**********************************************************/
void AMyPlayerController::Tick(float DeltaSeconds)
{
	// 弾発射時の処理.
	if (IsShot)
	{
		Count += DeltaSeconds;
		if (ANIM_COUNTUP_TIME <= Count)
		{
			Count = 0.0f;
			++AnimCount;
			if (ANIM_NUM <= AnimCount)
			{
				AnimCount = 0;
				IsShot = false;
			}
		}
	}
}