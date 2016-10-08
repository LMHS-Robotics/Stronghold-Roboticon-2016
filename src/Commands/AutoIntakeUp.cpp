#include "AutoIntakeUp.h"

AutoIntakeUp::AutoIntakeUp()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::boulderIntake.get());
	SetTimeout(1);
}

// Called just before this Command runs the first time
void AutoIntakeUp::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void AutoIntakeUp::Execute()
{
	Robot::boulderIntake.get()->IntakeUp();
}

// Make this return true when this Command no longer needs to run execute()
bool AutoIntakeUp::IsFinished()
{
	return IsTimedOut();
}

// Called once after isFinished returns true
void AutoIntakeUp::End()
{
	Robot::boulderIntake.get()->StopIntake();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoIntakeUp::Interrupted()
{
	End();
}
