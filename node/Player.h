#pragma once
#include <iostream>
#include <string>
class Player
{
	std::string name;
	int health;
	int xp;
public:
	void tallk(std::string);
	bool is_dead();
	Player();
	Player(std::string);
	Player(std::string, int, int);
	~Player() { std::cout<<"\nDestructor called for " << name; }
};

