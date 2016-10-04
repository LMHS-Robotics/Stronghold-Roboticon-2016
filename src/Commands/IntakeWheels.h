#ifndef IntakeWheels_H
#define IntakeWheels_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class IntakeWheels: public Command
{
public:
	IntakeWheels();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
