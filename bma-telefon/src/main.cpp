#include <Controllino.h>
#include <Arduino.h>
#include "input.h"
#include "keyboard.h"
#include "player.h"
#include "wheel.h"

Input *lever_input;
Input *wheel_input;

Player *player;
Wheel *wheel;

void setup() 
{
    auto keyboard = std::make_shared<Keyboard>();
    player = new Player(keyboard);

    lever_input = new Input(CONTROLLINO_A0);
    wheel_input = new Input(CONTROLLINO_A1);

    wheel = new Wheel(wheel_input, player);
}

void loop() 
{
    if (!lever_input->readAnalog())
        wheel->update();

    if (player->isPlaying() && lever_input->readAnalog())
        player->stop();

    delay(10);
}