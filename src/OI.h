// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "JoystickAnalogButton.h"
#include "POVButton.h"
#include "ToggledPressedButtonScheduler.h"

class OI {
private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<Joystick> driveStick;
	std::shared_ptr<Joystick> shootStick;
	std::shared_ptr<JoystickButton> launchBoulder;
	std::shared_ptr<JoystickButton> fire;
	std::shared_ptr<JoystickButton> intakeUpButton;
	std::shared_ptr<JoystickButton> intakeDownButton;
	std::shared_ptr<JoystickButton> intakeWheel;
	std::shared_ptr<JoystickButton> intakeWheelReverse;
	JoystickButton* togButton;
	ToggledPressedButtonScheduler* togDistance;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	std::shared_ptr<JoystickAnalogButton> leftTrig;
	std::shared_ptr<JoystickAnalogButton> rightTrig;
	//std::shared_ptr<POVButton> povUp;
	//std::shared_ptr<POVButton> povDown;

public:
	OI();

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES

	std::shared_ptr<Joystick> getDriveStick();
	//std::shared_ptr<Joystick> getShootStick();

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
};

#endif
