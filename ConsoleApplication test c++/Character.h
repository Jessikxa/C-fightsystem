#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H
class Character
{
protected:
	int hp;
	int stamina;

public:
	Character(int health, int stam);
	virtual ~Character();

	virtual bool isAlive() const;
	void takeDamage(int damage);

	int getHp() const;
	int getStamina() const;

	void reduceStamina(int amount);
	void recoverStamina(int amount);
};
#endif // CHARACTER_H

