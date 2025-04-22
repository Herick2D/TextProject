//
// Created by Heric on 21/04/2025.
//

// Game.cpp
#include "../include/Game.h"
#include "../include/RoomI.h"
#include "../include/RoomII.h"
#include "../include/RoomIII.h"
#include "../include/RoomIV.h"
#include "../include/RoomV.h"
#include <iostream>

Game::Game() {
    initializeRooms();
}

void Game::initializeRooms() {
    rooms["I"] = std::make_unique<RoomI>();
    rooms["II"] = std::make_unique<RoomII>();
    rooms["III"] = std::make_unique<RoomIII>();
    rooms["IV"] = std::make_unique<RoomIV>();
    rooms["V"] = std::make_unique<RoomV>();
}

void Game::run() {
    std::cout << "Você acaba de acordar, um cheiro nauseante de salmoura e podridão invade suas narinas.\n";
    std::cout << "Suas roupas estão molhadas, e sua mente está envolta em uma névoa de confusão.\n";

    while (player.isAlive()) {
        displayStatus();
        chooseRoom();
    }

    std::cout << "Sua jornada termina aqui. Os horrores deste lugar consumiram sua mente e corpo.\n";
    std::cout << "Você se torna mais uma vítima dos Mitos de Cthulhu.\n";

    std::cout << "\nPressione Enter para sair...";
    std::cin.ignore();
    std::cin.get();
}

void Game::displayStatus() const {
    std::cout << "\nPontos de vida restantes: " << player.getHealth() << "\n";
    std::cout << "Para onde deseja ir? [I, II, III, IV, V]\n";
}

void Game::chooseRoom() {
    std::string choice;
    std::getline(std::cin, choice);

    if (auto it = rooms.find(choice); it != rooms.end()) {
        it->second->enter(player);
    } else {
        std::cout << "Tenho certeza de que sua confusão não fez com que você esquecesse de como se lê. Tente novamente.\n";
    }
}

