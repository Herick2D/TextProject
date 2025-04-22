//
// Created by Heric on 21/04/2025.
//

#pragma once
#include <string>

class Player;

class Room {
public:
    virtual ~Room() = default;
    virtual void enter(Player& player) = 0;
};

