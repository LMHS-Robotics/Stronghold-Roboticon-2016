#include "IntakeWheelsReverse.h"

IntakeWheelsReverse::IntakeWheelsReverse()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::boulderIntake.get());
}

// Called just before this Command runs the first time
void IntakeWheelsReverse::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void IntakeWheelsReverse::Execute()
{
	Robot::boulderIntake.get()->belts(-1.0);
}

// Make this return true when this Command no longer needs to run execute()
bool IntakeWheelsReverse::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void IntakeWheelsReverse::End()
{
	Robot::boulderIntake.get()->StopIntake();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeWheelsReverse::Interrupted()
{
	End();
}
