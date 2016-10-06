#include "ShortDistance.h"

ShortDistance::ShortDistance()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::launcher.get());
}

// Called just before this Command runs the first time
void ShortDistance::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ShortDistance::Execute()
{
	Robot::launcher.get()->changeDistance(true);
}

// Make this return true when this Command no longer needs to run execute()
bool ShortDistance::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void ShortDistance::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShortDistance::Interrupted()
{

}
