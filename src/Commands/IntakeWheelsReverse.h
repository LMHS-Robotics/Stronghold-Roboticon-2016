#ifndef IntakeWheelsReverse_H
#define IntakeWheelsReverse_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class IntakeWheelsReverse: public Command
{
public:
	IntakeWheelsReverse();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
