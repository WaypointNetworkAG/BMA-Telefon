/* Author: Noa Sendlhofer - noa.sendlhofer@wpn.ch
 * Desc: Player class implementation
 */

#include "player.h"

Player::Player(std::shared_ptr<Keyboard> &keyboard)
{
    _keyboard = keyboard;
}

void Player::play(const int track)
{
    switch (track)
    {
    case 1:
        _keyboard->pressKey(KEY_1);
        break;
    case 2:
        _keyboard->pressKey(KEY_2);
        break;
    case 3:
        _keyboard->pressKey(KEY_3);
        break;
    case 4:
        _keyboard->pressKey(KEY_4);
        break;
    case 5:
        _keyboard->pressKey(KEY_5);
        break;
    case 6:
        _keyboard->pressKey(KEY_6);
        break;
    case 7:
        _keyboard->pressKey(KEY_7);
        break;
    case 8:
        _keyboard->pressKey(KEY_8);
        break;
    case 9:
        _keyboard->pressKey(KEY_9);
        break;

    default:
        break;
    }

    _isPlaying = true;
}

void Player::stop()
{
    _keyboard->pressKey(KEY_0);
    _isPlaying = false;
}

bool Player::isPlaying()
{
    return _isPlaying;
}