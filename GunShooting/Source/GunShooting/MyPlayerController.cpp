// Fill out your copyright notice in the Description page of Project Settings.

#include "GunShooting.h"
#include "MyPlayerController.h"

/**********************************************************
/* �Q�[���J�n��.
**********************************************************/
void AMyPlayerController::BeginPlay()
{
	// �f�o�b�O�\��.
	//ConsoleCommand("stat fps", true);
	//ConsoleCommand("stat unit", true);
}

/**********************************************************
/* �X�V����.
**********************************************************/
void AMyPlayerController::Tick(float DeltaSeconds)
{
	// �e���ˎ��̏���.
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