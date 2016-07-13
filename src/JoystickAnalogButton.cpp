/*
 * JoystickAnalogButton.cpp
 *
 *  Created on: Mar 10, 2016
 *      Author: NerdsOfPrey
 */

#include "JoystickAnalogButton.h"

//This class is inherited from the Trigger class. This converts an axis into a button, useful for using the triggers on controllers as buttons.


JoystickAnalogButton::JoystickAnalogButton(GenericHID* joystick, int axisNumber){
	// TODO Auto-generated constructor stub
		  THRESHOLD = 0.1;

	      m_joystick = joystick;
	      m_axisNumber = axisNumber;

}


bool JoystickAnalogButton::Get() {
    if(m_joystick->GetRawAxis(m_axisNumber) > THRESHOLD){
      return m_joystick->GetRawAxis(m_axisNumber) > THRESHOLD;    //Return true if axis value is less than negative threshold
    } else {
      return m_joystick->GetRawAxis(m_axisNumber) > THRESHOLD;    //Return false if axis value is greater than positive threshold
    }
}



