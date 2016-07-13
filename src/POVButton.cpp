/*
 * POVButton.cpp
 *
 *  Created on: Mar 10, 2016
 *      Author: NerdsOfPrey
 */

#include "POVButton.h"

POVButton::POVButton(GenericHID* joystick, int povangle) {

	m_joystick = joystick;
	povAngle = povangle;

}

bool POVButton::Get(){

	if(m_joystick->GetPOV() == povAngle){
		return true;
	}else{
		return false;
	}



}
