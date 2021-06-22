#include "Player.h"

bool Player::is_dead() {
	return (health < 100);
}

void Player::tallk(std::string a) {
	std::cout << name << " says " << a << std::endl;
}

Player::Player(std::string a, int b, int c)
	:name(a), health(b), xp(c){
	if (is_dead() || xp < 10) {
		std::cout << "You are out!!" << std::endl;
	}
}

Player::Player(std::string a)
	:Player(a,0,0){}

Player::Player()
	:Player("None",0,0){}