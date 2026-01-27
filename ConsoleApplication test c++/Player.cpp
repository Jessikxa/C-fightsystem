#include "Player.h"
#include <iostream>
#include <limits>
#include <sstream>
#include <string>

Player::Player() : Character(100, 50) {}

Player::~Player() {
    for (auto a : attacks) delete a;
}

int Player::getHp() const { return hp; }
int Player::getStamina() const { return stamina; } 
bool Player::isAlive() const { return hp > 0; }


void Player::takeDamage(int dmg) { hp -= dmg; if (hp < 0) hp = 0; }

void Player::addAttack(Attack* attack) { attacks.push_back(attack); } //adds attack to vector

void Player::showAttacks() const { //displays available attacks
    std::cout << "\nAvailable attacks:\n";
    for (size_t i = 0; i < attacks.size(); ++i) {
        std::cout << i + 1 << ". " << attacks[i]->getName()
                  << " (Damage: " << attacks[i]->getDamageCost() //Cost of damage
                  << ", Stamina: " << attacks[i]->getStaminaCost() << ")\n"; //Cost of stamina
    }
}

Attack* Player::chooseAttack() {
    int choice;
    std::string line;


    while (true) {
        std::cout << "\nChoose your attack: \n";
       

		std::getline(std::cin, line); //get the rest of the line after int input
		std::stringstream ss(line); 

        

		if (!(ss >> choice) || !(ss.eof())) { //if input is not a number or if try to put string after int >:)
            std::cout << "invalid input. Please fill in a number \n";
            continue;
        }

        

		if (choice < 1 || choice > static_cast<int>(attacks.size())) {  //if choice is out of range
            std::cout << "Invalid number. Please fill in a valid number\n";
            continue;
        }
        Attack* atk = attacks[choice - 1]; //valid choice, return the attack

        if (atk->getStaminaCost() > stamina) { //required stamina is more than current stamina
            std::cout << "Not enough stamina!\n";
            return nullptr;
        }
        stamina -= atk->getStaminaCost(); //reduce stamina amount on screen
        return atk;
    }

Attack* atk = attacks[choice - 1];
 
}

