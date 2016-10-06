#ifndef LongDistance_H
#define LongDistance_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class LongDistance: public Command
{
public:
	LongDistance();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
