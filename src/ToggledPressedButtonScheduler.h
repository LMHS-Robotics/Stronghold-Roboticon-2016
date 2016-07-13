/*
 * ToggledPressedButtonScheduler.h
 *
 *  Created on: May 23, 2016
 *      Author: NerdsOfPrey
 */

#ifndef SRC_TOGGLEDPRESSEDBUTTONSCHEDULER_H_
#define SRC_TOGGLEDPRESSEDBUTTONSCHEDULER_H_

#include "WPILib.h"
#include "Buttons/PressedButtonScheduler.h"

class ToggledPressedButtonScheduler : public PressedButtonScheduler
{
protected:
        Command *m_otherCommand;
        bool m_firstOrSecond;
public:
        ToggledPressedButtonScheduler(bool last, Trigger *button, Command *firstCommand, Command *secondCommand);
        virtual ~ToggledPressedButtonScheduler() {}
        virtual void Execute();
};

#endif
