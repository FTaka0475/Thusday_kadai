#pragma once

#include <UniDx/Behaviour.h>
class TimerController : public UniDx::Behaviour
{

public:

	virtual void OnEnable() override;
	virtual void Update() override;

	float GetTime();
	void TimerSwitch();
	void Reset();

private:
	float timer;
	bool isStop;
};
