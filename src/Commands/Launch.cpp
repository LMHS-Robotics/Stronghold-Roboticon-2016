// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Launch.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

Launch::Launch(): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::launcher.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::boulderIntake.get());
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void Launch::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void Launch::Execute() {

	if(Robot::boulderIntake.get()->limitBottom.get()->Get() == 0){
		Robot::boulderIntake.get()->IntakeUp();
		Wait(1);
	}else{
		Robot::boulderIntake.get()->StopIntake();
		Robot::launcher.get()->launchRight();//runs the launcher as button is held
		Robot::launcher.get()->launchLeft();
	}

}

// Make this return true when this Command no longer needs to run execute()
bool Launch::IsFinished() {
	return false;

}

// Called once after isFinished returns true
void Launch::End() {
	Robot::boulderIntake.get()->StopIntake();
	Robot::launcher.get()->stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Launch::Interrupted() {
	Robot::boulderIntake.get()->StopIntake();
	Robot::launcher.get()->stop();
}
