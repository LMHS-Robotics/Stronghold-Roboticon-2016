#include "IntakeDownCommand.h"

IntakeDownCommand::IntakeDownCommand()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::boulderIntake.get());
}

// Called just before this Command runs the first time
void IntakeDownCommand::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void IntakeDownCommand::Execute()
{
	Robot::boulderIntake.get()->down();//intake is being rebuilt, used to go down on the bell and runs belts to suck the ball in, will be reworked completely with new intake
}

// Make this return true when this Command no longer needs to run execute()
bool IntakeDownCommand::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void IntakeDownCommand::End()
{
	Robot::boulderIntake.get()->StopIntake();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeDownCommand::Interrupted()
{
	End();
}
