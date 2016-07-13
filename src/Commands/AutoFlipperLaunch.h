#ifndef AutoFlipperLaunch_H
#define AutoFlipperLaunch_H

#include "../Robot.h"
#include "Commands/Subsystem.h"

class AutoFlipperLaunch: public Command
{
public:
	AutoFlipperLaunch();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
