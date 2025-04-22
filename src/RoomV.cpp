//
// Created by Heric on 21/04/2025.
//

#include "../include/RoomV.h"
#include "../include/Game.h"
#include <iostream>
#include <cstdlib>

void RoomV::enter(Player& player) {
    if (player.hasItem("amuleto")) {
        std::cout << "Você entra na Sala V. O amuleto em suas mãos brilha intensamente, e uma porta secreta se abre diante de você.\n";
        std::cout << "Você escapa do lugar, deixando para trás os horrores que testemunhou.\n";
        std::exit(0);
    } else {
        std::cout << "Você entra na Sala V, mas nada acontece. Parece que falta algo para ativar a saída.\n";
    }
}