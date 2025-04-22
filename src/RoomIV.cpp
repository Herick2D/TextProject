//
// Created by Heric on 21/04/2025.
//

#include "../include/RoomIV.h"
#include <iostream>

void RoomIV::enter(Player& player) {
    std::cout << "Ao entrar na Sala IV, você é recebido por uma criatura grotesca, semelhante a um peixe humanoide. Ele avança em sua direção!\n";
    std::cout << "Você tenta lutar, mas a criatura é forte demais. Seus golpes são ineficazes, e você é jogado contra a parede.\n";
    std::cout << "A criatura te expulsa da sala com um rugido ensurdecedor, e você perde 2 pontos de vida devido aos ferimentos.\n";
    player.loseHealth(2);
}