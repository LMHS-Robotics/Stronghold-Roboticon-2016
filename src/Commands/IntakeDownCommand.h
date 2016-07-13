#ifndef IntakeDownCommand_H
#define IntakeDownCommand_H

#include "Commands/Subsystem.h"
#include "../Robot.h"


class IntakeDownCommand: public Command
{
public:
	IntakeDownCommand();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
