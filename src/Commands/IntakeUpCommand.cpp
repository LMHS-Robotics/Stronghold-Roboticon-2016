#include "IntakeUpCommand.h"

IntakeUpCommand::IntakeUpCommand()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::boulderIntake.get());
}

// Called just before this Command runs the first time
void IntakeUpCommand::Initialize()
{
	//shrek
}

// Called repeatedly when this Command is scheduled to run
void IntakeUpCommand::Execute()
{
	Robot::boulderIntake.get()->IntakeUp();//pulls intake up, will be changed in future patches
}

// Make this return true when this Command no longer needs to run execute()
bool IntakeUpCommand::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void IntakeUpCommand::End()
{
	Robot::boulderIntake.get()->StopIntake();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeUpCommand::Interrupted()
{
	End();
}
