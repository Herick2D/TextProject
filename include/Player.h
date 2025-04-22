//
// Created by Heric on 21/04/2025.
//

#pragma once
#include <string>
#include <unordered_set>

class Player {
public:
    Player();

    int getHealth() const;
    void loseHealth(int amount);
    bool isAlive() const;

    void obtainItem(const std::string& item);
    bool hasItem(const std::string& item) const;

private:
    int health;
    std::unordered_set<std::string> inventory;
};
