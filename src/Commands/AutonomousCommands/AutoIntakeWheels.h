#ifndef AutoIntakeWheels_H
#define AutoIntakeWheels_H

#include "Commands/Subsystem.h"
#include "../../Robot.h"

class AutoIntakeWheels: public Command
{
public:
	AutoIntakeWheels();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
