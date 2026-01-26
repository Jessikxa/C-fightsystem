#pragma once
#include <string>

class Attack {
    std::string name;
    int damage;
    int staminaCost;
public:
    Attack(const std::string& n, int d, int s);
    const std::string& getName() const;
    int getDamageCost() const;
    int getStaminaCost() const;
};

