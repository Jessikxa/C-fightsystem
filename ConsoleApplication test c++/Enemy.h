#pragma once
#ifndef ENEMY_H
#define ENEMY_H
#include "Character.h"

class Enemy : public Character
{
public:
    Enemy();

    bool block() const;
    bool counter() const; 
};

#endif
