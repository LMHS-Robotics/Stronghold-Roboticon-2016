#include "ToggledPressedButtonScheduler.h"

ToggledPressedButtonScheduler::ToggledPressedButtonScheduler(bool last, Trigger *button, Command *firstCommand, Command *secondCommand) :
        PressedButtonScheduler(last, button, firstCommand)
{
        this->m_otherCommand = secondCommand;
        this->m_firstOrSecond = false;
}

void ToggledPressedButtonScheduler::Execute()
{
        if (m_button->Grab())
        {
                if (!m_pressedLast)
                {
                        m_pressedLast = true;

                        if (m_firstOrSecond)
                                m_otherCommand->Start();
                        else
                                m_command->Start();

                        m_firstOrSecond = !m_firstOrSecond;
                }
        }
        else
        {
                m_pressedLast = false;
        }
}
