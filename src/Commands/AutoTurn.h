#ifndef AutoTurn_H
#define AutoTurn_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class AutoTurn: public Command
{
public:
	AutoTurn();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
