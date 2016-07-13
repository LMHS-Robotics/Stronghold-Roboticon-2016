#include "AutoTurn.h"

AutoTurn::AutoTurn()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::driveTrain.get());
	SetTimeout(1);
}

// Called just before this Command runs the first time
void AutoTurn::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void AutoTurn::Execute()
{
	Robot::driveTrain.get()->Turn();
}

// Make this return true when this Command no longer needs to run execute()
bool AutoTurn::IsFinished()
{
	return IsTimedOut();
}

// Called once after isFinished returns true
void AutoTurn::End()
{
	Robot::driveTrain.get()->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoTurn::Interrupted()
{
	Robot::driveTrain.get()->Stop();
}
