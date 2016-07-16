#include "UnlockBall.h"

UnlockBall::UnlockBall()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::flipperSub.get());
	Requires(Robot::launcher.get());
	SetTimeout(1.0);
}

// Called just before this Command runs the first time
void UnlockBall::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void UnlockBall::Execute()
{
	//Robot::launcher.get()->unlock();//launcher is still unreliable with laocking ball, in testing mode still
}

// Make this return true when this Command no longer needs to run execute()
bool UnlockBall::IsFinished()
{
	return IsTimedOut();
}

// Called once after isFinished returns true
void UnlockBall::End()
{
	Robot::flipperSub.get()->fipDown();
	Robot::launcher.get()->stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void UnlockBall::Interrupted()
{
	Robot::flipperSub.get()->fipDown();
	Robot::launcher.get()->stop();
}
