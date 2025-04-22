//
// Created by Heric on 21/04/2025.
//

#include "../include/RoomII.h"
#include <iostream>

#include "Player.h"

void RoomII::enter(Player& player) {
    std::cout << "Na Sala II, você encontra um antigo altar coberto de runas brilhantes...\n";
    std::cout << "Você perde 1 ponto de vida devido ao esforço de resistir à insanidade.\n";
    player.loseHealth(1);
}
