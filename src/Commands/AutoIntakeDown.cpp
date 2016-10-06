#include "AutoIntakeDown.h"

AutoIntakeDown::AutoIntakeDown()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::boulderIntake.get());
	SetTimeout(1);
}

// Called just before this Command runs the first time
void AutoIntakeDown::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void AutoIntakeDown::Execute()
{
	Robot::boulderIntake.get()->down();
}

// Make this return true when this Command no longer needs to run execute()
bool AutoIntakeDown::IsFinished()
{
	return IsTimedOut();
}

// Called once after isFinished returns true
void AutoIntakeDown::End()
{
	Robot::boulderIntake.get()->StopIntake();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoIntakeDown::Interrupted()
{
	End();
}
