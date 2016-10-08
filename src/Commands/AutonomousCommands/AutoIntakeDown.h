#ifndef AutoIntakeDown_H
#define AutoIntakeDown_H


#include "Commands/Subsystem.h"
#include "../../Robot.h"

class AutoIntakeDown: public Command
{
public:
	AutoIntakeDown();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
