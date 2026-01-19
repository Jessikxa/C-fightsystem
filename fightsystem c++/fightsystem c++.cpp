// fightsystem c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class player
{
	public:
		void stats() //defines player stats
		{
			int health = 100;
			int mana = 100;
			int stamina = 100;
			int strength = 20;
			int intelligence = 25;
			int agility = 15;
		}
};

class enemy
{
	public:
		void stats() //defines enemy stats
		{
			int health = 80;
			int mana = 50;
			int stamina = 70;
			int strength = 15;
			int intelligence = 10;
			int agility = 20;
		}
};

class abilities
{
	public:
		void stats() //defines player abilities
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
};

int main()
{
    std::cout << "Hello World!\n";

	player player1;
	enemy dragon(); // see how can give certain stats to certain enemies later
	abilities playerAbilities;
	abilities enemyAbilities;

	//display player stats when fighting opdiotn is selected
	player1.stats();
	


    
    
	//is this where i can put the fight system code, or seperate class?
	//normally in program you can add info from classes and such here right? 


	
}


