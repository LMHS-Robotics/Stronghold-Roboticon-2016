// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutoLaunch.h"
#include "Commands/AutoUltrasonicDrive.h"
#include "Commands/AutonomousDriveForward.h"
#include "Commands/Flipper.h"
#include "Commands/Launch.h"
#include "Commands/TankDrive.h"
#include "Commands/IntakeDownCommand.h"
#include "Commands/IntakeUpCommand.h"
#include "Commands/AutoDriveOverDefense.h"
#include "Commands/LowBar.h"
#include "Commands/LockBall.h"
#include "Commands/UnlockBall.h"

OI::OI() {
    // Process operator interface input here.

	//ps3 controller:
	joystickRight.reset(new Joystick(0));

		rightTrig.reset(new JoystickAnalogButton(joystickRight.get(), 3));
		rightTrig->WhileActive(new Launch());

		intakeUpButton.reset(new JoystickButton(joystickRight.get(), 4));
 	    intakeUpButton->WhileHeld(new IntakeUpCommand());

 	    intakeDownButton.reset(new JoystickButton(joystickRight.get(), 1));
	    intakeDownButton->WhileHeld(new IntakeDownCommand());

	    fire.reset(new JoystickButton(joystickRight.get(), 6));
		fire->WhenPressed(new Flipper());

		togButton = new JoystickButton(joystickRight.get(), 10);
		togLock = new ToggledPressedButtonScheduler(togButton->Grab(), togButton, new LockBall(), new UnlockBall());
 		togLock->Start();

	//two drivers:
				/*joystickLeft.reset(new Joystick(1));

			    joystickRight.reset(new Joystick(0));

			    shootStick.reset(new Joystick(2));

			  	    launchBoulder.reset(new JoystickButton(shootStick.get(), 4));
			  	    launchBoulder->WhileHeld(new Launch());

			  	    intakeUpButton.reset(new JoystickButton(shootStick.get(), 3));
			  	    intakeUpButton->WhileHeld(new IntakeUpCommand());

			  	    intakeDownButton.reset(new JoystickButton(shootStick.get(), 2));
			  	    intakeDownButton->WhileHeld(new IntakeDownCommand());

			  	    fire.reset(new JoystickButton(shootStick.get(), 1));
			  		fire->WhenPressed(new Flipper());

			  		togButton = new JoystickButton(shootStick.get(), 5);
			  		togLock = new ToggledPressedButtonScheduler(togButton->Grab(), togButton, new LockBall(), new UnlockBall());
			  		togLock->Start();*/

    // SmartDashboard Buttons
    SmartDashboard::PutData("AutoTurn", new AutoTurn());
    SmartDashboard::PutData("Low Bar", new LowBar());
    SmartDashboard::PutData("AutoLaunch", new AutoLaunch());
    SmartDashboard::PutData("AutoUltrasonicDriveToTower", new AutoDriveOverDefense());
    SmartDashboard::PutData("AutoUltrasonicDrive", new AutoUltrasonicDrive());
    SmartDashboard::PutData("AutonomousDriveForward", new AutonomousDriveForward());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<Joystick> OI::getJoystickRight() {
   return joystickRight;
}

std::shared_ptr<Joystick> OI::getJoystickLeft() {
   return joystickLeft;
}

std::shared_ptr<Joystick> OI::getShootStick() {
   return shootStick;
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
