#include "IntakeWheels.h"

IntakeWheels::IntakeWheels()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::boulderIntake.get());
}

// Called just before this Command runs the first time
void IntakeWheels::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void IntakeWheels::Execute()
{
	Robot::boulderIntake.get()->belts(1.0);
}

// Make this return true when this Command no longer needs to run execute()
bool IntakeWheels::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void IntakeWheels::End()
{
	Robot::boulderIntake.get()->StopIntake();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeWheels::Interrupted()
{
	End();
}
