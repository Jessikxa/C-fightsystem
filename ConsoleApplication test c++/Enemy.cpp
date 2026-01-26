#include "Enemy.h"
#include <cstdlib>

Enemy::Enemy() : Character(100, 100) {}

bool Enemy::block() const {
    return (std::rand() % 100) < 30; // 30% chance to block
}

bool Enemy::counter() const { 
    return (std::rand() % 100) < 20; // 20% chance to counter
}