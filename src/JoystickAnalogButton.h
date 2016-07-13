/*
 * JoystickAnalogButton.h
 *
 *  Created on: Mar 10, 2016
 *      Author: NerdsOfPrey
 */

#ifndef SRC_JOYSTICKANALOGBUTTON_H_
#define SRC_JOYSTICKANALOGBUTTON_H_

#include "Buttons/Trigger.h"
#include "Joystick.h"

class JoystickAnalogButton: public Trigger {

public:
	JoystickAnalogButton(GenericHID* joystick, int axisNumber);

		  bool Get();
private:
		  GenericHID* m_joystick;
		  int m_axisNumber;
		  double THRESHOLD;
};


#endif /* SRC_JOYSTICKANALOGBUTTON_H_ */
