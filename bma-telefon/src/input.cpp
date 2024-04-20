/* Author: Noa Sendlhofer - noa.sendlhofer@wpn.ch
 * Desc: Input class implementation
 */

#include "input.h"
#include <Controllino.h>

Input::Input(PORT port)
{
    this->port = port;

    pinMode(this->port, INPUT);
}

bool Input::readButton()
{
    int status = digitalRead(this->port);

    if (status == LOW && this->_pressed)
    {
        this->_pressed = false;
        return true;
    }
    else if (status == HIGH && !this->_pressed)
    {
        this->_pressed = true;
        return false;
    }

    return false;
}

bool Input::readAnalog()
{
    return digitalRead(this->port);
}