/* Author: Noa Sendlhofer - noa.sendlhofer@wpn.ch
 * Desc: Player class header
 */

#ifndef BMA_TELEFON_PLAYER_H_
#define BMA_TELEFON_PLAYER_H_

#include "keyboard.h"

class Player
{
public:
    Player(std::shared_ptr<Keyboard> &keyboard);
    void play(const int track);
    void stop();
    bool isPlaying();

private:
    bool _isPlaying = false;
    std::shared_ptr<Keyboard> _keyboard;
};

#endif // BMA_TELEFON_PLAYER_H_