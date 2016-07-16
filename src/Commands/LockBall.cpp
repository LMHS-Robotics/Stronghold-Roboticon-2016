#include "LockBall.h"

LockBall::LockBall()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::flipperSub.get());
	Requires(Robot::launcher.get());
	SetTimeout(2.0);
}

// Called just before this Command runs the first time
void LockBall::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void LockBall::Execute()
{
	Robot::flipperSub.get()->fipLock();
	//Robot::launcher.get()->lock();//uses flipper and launcher to lock ball, however currently its a little unreliable, so it is in testing phase still.
}

// Make this return true when this Command no longer needs to run execute()
bool LockBall::IsFinished()
{
	return IsTimedOut();
}

// Called once after isFinished returns true
void LockBall::End()
{
	Robot::flipperSub.get()->stop();
	Robot::launcher.get()->stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LockBall::Interrupted()
{
	Robot::flipperSub.get()->stop();
	Robot::launcher.get()->stop();
}
