#include "Player.h"
#pragma once
#include <string>
class Player
{
	std::string name;

	int health;

	//im just thinking this could maybe be an array or vector later on if needed
	//could also be its own class if needed. might be better for scaling later on and can be used for enemy class as well
	void abilities() //defines player abilities
	{
		int fireball = 20;
		int iceSpike = 25;
		int shadow = 30;
		int lightningStrike = 35;
		int waterblast = 40;
		int orbOfDestruction = 50;
		int earthquake = 45;
		int tornado = 35;
		int heal = 15;
	}
	//public:
	//	Player(const std::string& playerName, int playerHealth)
	//		: name(playerName), health(playerHealth) {}
	//	const std::string& getName() const { return name; }
	//	int getHealth() const { return health; }
	//	void setHealth(int newHealth) { health = newHealth; }
};
