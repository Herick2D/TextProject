//
// Created by Heric on 21/04/2025.
//

// RoomI.cpp
#include "../include/RoomI.h"
#include "../include/Player.h"
#include <iostream>

void RoomI::enter(Player& player) {
    std::cout << "Você entra na Sala I. O ar é pesado, e o chão está coberto por uma substância viscosa e brilhante.\n";
    std::cout << "De repente, tentáculos emergem das sombras, tentando agarrá-lo!\n";
    std::cout << "Você consegue se esquivar do agarrão dos tentáculos, mas eles te expulsam da sala com uma força desumana.\n";
    player.loseHealth(1);
}
