//
// Created by Heric on 21/04/2025.
//

#include "../include/RoomIII.h"
#include <iostream>

void RoomIII::enter(Player& player) {
    std::cout << "A Sala III está envolta em uma escuridão quase palpável. No centro, você vê um antigo amuleto brilhando com uma luz tênue.\n";
    std::cout << "Você pega o amuleto e sente uma estranha energia percorrer seu corpo. Este item pode ser a chave para sua escape!\n";
    player.obtainItem("amuleto");
}