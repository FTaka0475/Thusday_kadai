#pragma once

#include "TimerController.h"
#include <UniDx/Time.h>

#include "MainGame.h"

using namespace DirectX;
using namespace UniDx;

void TimerController::OnEnable()
{
	Reset();
}

void TimerController::Update()
{
	//ŽžŠÔ’âŽ~‚©‚Ç‚¤‚©”»’è
	if (isStop) return;

	timer += Time::deltaTime;
}

float TimerController::GetTime()
{
	return timer;
}

void TimerController::TimerSwitch()
{
	isStop = !isStop;
}

void TimerController::Reset()
{
	timer = 0.0f;
	isStop = false;
}