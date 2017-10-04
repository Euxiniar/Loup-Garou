#pragma once
#include <string>
#include "rolesDefinitions.h"

class Player
{
public:
	Player(std::string name, uint32_t role = VILLAGER);
	void setRole(uint32_t role);
	std::string getName();

private:
	std::string _Name;
	uint32_t _Role;
};

