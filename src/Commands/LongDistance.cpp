#include "LongDistance.h"

LongDistance::LongDistance()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::launcher.get());
}

// Called just before this Command runs the first time
void LongDistance::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void LongDistance::Execute()
{
	Robot::launcher.get()->changeDistance(false);
}

// Make this return true when this Command no longer needs to run execute()
bool LongDistance::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void LongDistance::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LongDistance::Interrupted()
{

}
