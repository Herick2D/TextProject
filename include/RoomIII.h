//
// Created by Heric on 21/04/2025.
//

#pragma once
#include "Room.h"
#include "Player.h"

class RoomIII : public Room {
public:
    void enter(Player& player) override;
};