/* Author: Noa Sendlhofer - noa.sendlhofer@wpn.ch
 * Desc: Wheel class implementation
 */

#include "wheel.h"

Wheel::Wheel(Input *input, Player *player)
{
    _input = input;
    _player = player;
}

void Wheel::update()
{
    if (!isTimeout() || !_wheeling)
    {
        if (_input->readButton())
        {
            _counter++;
            _wheeling = true;
            _timestamp = millis();
        }
    }
    
    if (isTimeout() && _counter > 0)
    {
        _player->play(_counter);
        _wheeling = false;
        _counter = 0;
    }
}

bool Wheel::isTimeout()
{
    if (millis() - _timestamp > TIMEOUT)
        return true;
    
    return false;
}