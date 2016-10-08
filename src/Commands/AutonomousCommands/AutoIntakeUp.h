#ifndef AutoIntakeUp_H
#define AutoIntakeUp_H

#include "Commands/Subsystem.h"
#include "../../Robot.h"

class AutoIntakeUp: public Command
{
public:
	AutoIntakeUp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
