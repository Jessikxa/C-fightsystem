#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include "Attack.h"
#include <vector>

class Player : public Character
{
private:
	std::vector<Attack*> attacks; //vector to store available attacks

public:
    Player();
    ~Player();

    virtual int getHp() const ;
    virtual int getStamina() const ;
    virtual bool isAlive() const override; 
    virtual void takeDamage(int dmg) ;

    void addAttack(Attack* attack);
    Attack* getAttack();
    void showAttacks() const;
    Attack* chooseAttack();
};

#endif // PLAYER_H
