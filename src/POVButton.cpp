/*
 * POVButton.cpp
 *
 *  Created on: Mar 10, 2016
 *      Author: NerdsOfPrey
 */

#include "POVButton.h"

//this class is used to convert POV angles into buttons to be used for command based programming. 

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
