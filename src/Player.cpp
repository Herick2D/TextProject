//
// Created by Heric on 21/04/2025.
//

#include "../include/Player.h"

Player::Player()
    : health(3)
{}

bool Player::isAlive() const {
    return health > 0;
}

int Player::getHealth() const {
    return health;
}

void Player::loseHealth(int amount) {
    health -= amount;
    if (health < 0) health = 0;
}

void Player::obtainItem(const std::string& item) {
    inventory.insert(item);
}

bool Player::hasItem(const std::string& item) const {
    return inventory.find(item) != inventory.end();
}

