#ifndef UnlockBall_H
#define UnlockBall_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class UnlockBall: public Command
{
public:
	UnlockBall();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
