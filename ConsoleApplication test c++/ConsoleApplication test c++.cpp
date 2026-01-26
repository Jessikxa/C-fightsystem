//#include "main.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Player.h"
#include "Enemy.h"	
#include "Attack.h"

int main() {
	srand(static_cast<unsigned int>(time(nullptr)));

	Player* player = new Player();
	Enemy* enemy = new Enemy();


	player->addAttack(new Attack("Slash", 15, 5));
	player->addAttack(new Attack("Heavy Strike", 25, 20));
	player->addAttack(new Attack("kick", 10, 5));
	//player->addAttack(new Attack("Quit", 0, 0));

	std::cout << "Welcome to the battle of the centuryy!\n";

	while (player->isAlive() && enemy->isAlive()) {
		std::cout << "\nPlayer HP: " << player->getHp() << ", Stamina: " << player->getStamina() << "\n";
		std::cout << "Enemy HP: " << enemy->getHp() << "\n";


		player->showAttacks();
		Attack* attack = nullptr;

		while (attack == nullptr) {
			attack = player->chooseAttack();

			//added error for invalid choice. doesnt print only when wrong input also when damage or stamina is 0 -> try fix
		}

		std::cout << "\nYou used " << attack->getName() << "!\n";
		enemy->takeDamage(attack->getDamageCost());
		std::cout << "Enemy took " << attack->getDamageCost() << " damage!\n";

		if (!enemy->isAlive()) {
			std::cout << "You defeated the beast! You win!\n";
			break;
		}

		int enemyDamage = 10 + rand() % 11; // Enemy attacks with random damage between 10 and 20
		std::cout << "The beast attacks you for " << enemyDamage << " damage!\n";
		player->takeDamage(enemyDamage);

		if (!player->isAlive()) {
			std::cout << "You have been defeated by the beast! Game over.\n"; // or maybe the beast has defeated you
			break;
		}

		else if(!player->getStamina()){
			std::cout << "You are out of stamina!\n The enemy one hit you after";
			break;
		}

		/*if(player->addAttack(attack) == "Quit") {
			std::cout << "You have quit the game. Goodbye!\n";
			break;
		}*/
		//if (attack == nullptr) {
		//	std::cout << "wrong input. please choose again";
		//	//break;
		//}
		
		//else {
		//	player->recoverStamina(10); // Recover some stamina each turn
		//	std::cout << "You recover 10 stamina.\n";
		//}

		/*else {
			std::cout << "invalid input?\n";
			
		}*/
	}
}