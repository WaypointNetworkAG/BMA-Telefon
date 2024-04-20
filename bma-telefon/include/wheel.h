/* Author: Noa Sendlhofer - noa.sendlhofer@wpn.ch
 * Desc: Wheel class header
 */

#ifndef BMA_TELEFON_WHEEL_H_
#define BMA_TELEFON_WHEEL_H_

#include "input.h"
#include "player.h"

#define TIMEOUT 500

class Wheel
{
public:
    Wheel(Input *input, Player *player);
    void update();

private:
    bool isTimeout();

    bool _wheeling = false;
    int _counter = 0;
    unsigned long _timestamp = millis();

    Input *_input;
    Player *_player;
};

#endif // BMA_TELEFON_WHEEL_H_