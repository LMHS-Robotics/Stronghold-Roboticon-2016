#ifndef IntakeUpCommand_H
#define IntakeUpCommand_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class IntakeUpCommand: public Command
{
public:
	IntakeUpCommand();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
