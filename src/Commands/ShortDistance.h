#ifndef ShortDistance_H
#define ShortDistance_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class ShortDistance: public Command
{
public:
	ShortDistance();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
