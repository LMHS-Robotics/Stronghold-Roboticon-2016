#include "AutoFlipperLaunch.h"

AutoFlipperLaunch::AutoFlipperLaunch()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::flipperSub.get());
	SetTimeout(5);
}

// Called just before this Command runs the first time
void AutoFlipperLaunch::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void AutoFlipperLaunch::Execute()
{
	if(Robot::flipperSub.get()->x < 150){//waits about 3 seconds before flipper will work, so launcher wheels have time to spin up

		Robot::flipperSub.get()->x++;

	}else{
		Robot::flipperSub.get()->fipUp();//when added together with command timeout, flipper runs for 2 seconds
	}
}

// Make this return true when this Command no longer needs to run execute()
bool AutoFlipperLaunch::IsFinished()
{
	return IsTimedOut();
}

// Called once after isFinished returns true
void AutoFlipperLaunch::End()
{
	Robot::flipperSub.get()->fipDown();//resets the timer x variable and flipper goes down.
	Robot::flipperSub.get()->resetTimer();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoFlipperLaunch::Interrupted()
{
	Robot::flipperSub.get()->fipDown();
	Robot::flipperSub.get()->resetTimer();
}
