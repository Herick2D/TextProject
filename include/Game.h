//
// Created by Heric on 21/04/2025.
//

#pragma once
#include "Player.h"
#include "Room.h"
#include <memory>
#include <unordered_map>
#include <string>

class Room;

class Game {
public:
    Game();
    void run();

private:
    void initializeRooms();
    void displayStatus() const;
    void chooseRoom();

    Player player;
    std::unordered_map<std::string, std::unique_ptr<Room>> rooms;
};

