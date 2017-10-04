#include "Player.h"

Player::Player(std::string name, uint32_t role)
{
	_Name = name;
	_Role = role;
}

void Player::setRole(uint32_t role)
{
	_Role = role;
}

std::string Player::getName()
{
	return _Name;
}


