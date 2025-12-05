#pragma once
#include <string>
#include "abilities.cpp"
#include "abilities.h"
class Player : abilities
{
	std::string name;

	int health;



	void playerStats()
	{
		//-> do i do this in the main program or here?
		//also is there a main program? is dat in c++?
	};

	//im just thinking this could maybe be an array or vector later on if needed
	//could also be its own class if needed. might be better for scaling later on and can be used for enemy class as well

	//inherit abilities class
	

		//defines player abilities

	
//public:
//	Player(const std::string& playerName, int playerHealth)
//		: name(playerName), health(playerHealth) {}
//	const std::string& getName() const { return name; }
//	int getHealth() const { return health; }
//	void setHealth(int newHealth) { health = newHealth; }
};

