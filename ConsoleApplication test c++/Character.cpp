#include "Character.h"

Character::Character(int health, int stam) : hp(health), stamina(stam) {}
Character::~Character() {}

bool Character::isAlive() const{
	return hp > 0;
}

void Character::takeDamage(int damage){
	hp -= damage;
	if (hp < 0) hp = 0;
}

int Character::getHp() const{
	return hp;
}

int Character::getStamina() const{
	return stamina;
}

void Character::resetHealth(int health) { hp = health; if (hp < 0) hp = 0; }
void Character::resetStamina(int stam) { stamina = stam; if (stamina < 0) stamina = 0; }

//void Character::recoverStamina(int amount){
//	stamina -= amount;
//	if (stamina < 0) stamina = 0;
//}
