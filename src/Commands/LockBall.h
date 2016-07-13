#ifndef LockBall_H
#define LockBall_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class LockBall: public Command
{
public:
	LockBall();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
