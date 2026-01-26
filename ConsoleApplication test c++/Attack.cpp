#include "Attack.h"

Attack::Attack(const std::string& n, int d, int s)
    : name(n), damage(d), staminaCost(s) {}

const std::string& Attack::getName() const { return name; }
int Attack::getDamageCost() const { return damage; }
int Attack::getStaminaCost() const { return staminaCost; }