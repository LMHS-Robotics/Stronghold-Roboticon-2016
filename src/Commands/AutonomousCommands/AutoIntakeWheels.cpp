#include "AutoIntakeWheels.h"

AutoIntakeWheels::AutoIntakeWheels()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::boulderIntake.get());
	SetTimeout(3);
}

// Called just before this Command runs the first time
void AutoIntakeWheels::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void AutoIntakeWheels::Execute()
{
	Robot::boulderIntake.get()->belts(1.0);
}

// Make this return true when this Command no longer needs to run execute()
bool AutoIntakeWheels::IsFinished()
{
	return IsTimedOut();
}

// Called once after isFinished returns true
void AutoIntakeWheels::End()
{
	Robot::boulderIntake.get()->StopIntake();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoIntakeWheels::Interrupted()
{
	End();
}
