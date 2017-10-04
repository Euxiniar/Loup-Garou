#pragma once
#include "rolesDefinitions.h"
#include <iostream>
#include <map>

void _AutoComposition(uint32_t nbPlayers, std::map<std::uint32_t, uint32_t> &nbRoles)
{
	switch (nbPlayers)
	{
	case 8:
		nbRoles.emplace(VILLAGER, 5);
		nbRoles.emplace(WEREWOLF, 2);
		nbRoles.emplace(SEER, 1);
		nbRoles.emplace(LITTLEGIRL, 0);
		nbRoles.emplace(WITCH, 0);
		nbRoles.emplace(THIEF, 0);
		nbRoles.emplace(CUPIDS, 0);
		nbRoles.emplace(MAYOR, 1);
		nbRoles.emplace(HUNTER, 0);
		break;
	case 9:
		nbRoles.emplace(VILLAGER, 4);
		nbRoles.emplace(WEREWOLF, 2);
		nbRoles.emplace(SEER, 1);
		nbRoles.emplace(LITTLEGIRL, 0);
		nbRoles.emplace(WITCH, 0);
		nbRoles.emplace(THIEF, 0);
		nbRoles.emplace(CUPIDS, 1);
		nbRoles.emplace(MAYOR, 0);
		nbRoles.emplace(HUNTER, 1);
		break;
	case 10:
		nbRoles.emplace(VILLAGER, 4);
		nbRoles.emplace(WEREWOLF, 2);
		nbRoles.emplace(SEER, 1);
		nbRoles.emplace(LITTLEGIRL, 1);
		nbRoles.emplace(WITCH, 0);
		nbRoles.emplace(THIEF, 0);
		nbRoles.emplace(CUPIDS, 1);
		nbRoles.emplace(MAYOR, 0);
		nbRoles.emplace(HUNTER, 1);
		break;
	case 11:
		nbRoles.emplace(VILLAGER, 5);
		nbRoles.emplace(WEREWOLF, 2);
		nbRoles.emplace(SEER, 1);
		nbRoles.emplace(LITTLEGIRL, 0);
		nbRoles.emplace(WITCH, 1);
		nbRoles.emplace(THIEF, 0);
		nbRoles.emplace(CUPIDS, 1);
		nbRoles.emplace(MAYOR, 0);
		nbRoles.emplace(HUNTER, 1);
		break;
	case 12:
		nbRoles.emplace(VILLAGER, 4);
		nbRoles.emplace(WEREWOLF, 3);
		nbRoles.emplace(SEER, 1);
		nbRoles.emplace(LITTLEGIRL, 1);
		nbRoles.emplace(WITCH, 0);
		nbRoles.emplace(THIEF, 1);
		nbRoles.emplace(CUPIDS, 1);
		nbRoles.emplace(MAYOR, 0);
		nbRoles.emplace(HUNTER, 1);
		break;
	case 13:
		nbRoles.emplace(VILLAGER, 5);
		nbRoles.emplace(WEREWOLF, 3);
		nbRoles.emplace(SEER, 1);
		nbRoles.emplace(LITTLEGIRL, 0);
		nbRoles.emplace(WITCH, 1);
		nbRoles.emplace(THIEF, 1);
		nbRoles.emplace(CUPIDS, 1);
		nbRoles.emplace(MAYOR, 0);
		nbRoles.emplace(HUNTER, 1);
		break;
	case 14:
		nbRoles.emplace(VILLAGER, 6);
		nbRoles.emplace(WEREWOLF, 3);
		nbRoles.emplace(SEER, 1);
		nbRoles.emplace(LITTLEGIRL, 1);
		nbRoles.emplace(WITCH, 0);
		nbRoles.emplace(THIEF, 1);
		nbRoles.emplace(CUPIDS, 1);
		nbRoles.emplace(MAYOR, 0);
		nbRoles.emplace(HUNTER, 1);
		break;
	case 15:
		nbRoles.emplace(VILLAGER, 7);
		nbRoles.emplace(WEREWOLF, 3);
		nbRoles.emplace(SEER, 1);
		nbRoles.emplace(LITTLEGIRL, 0);
		nbRoles.emplace(WITCH, 1);
		nbRoles.emplace(THIEF, 1);
		nbRoles.emplace(CUPIDS, 1);
		nbRoles.emplace(MAYOR, 0);
		nbRoles.emplace(HUNTER, 1);
		break;
	case 16:
		nbRoles.emplace(VILLAGER, 7);
		nbRoles.emplace(WEREWOLF, 3);
		nbRoles.emplace(SEER, 1);
		nbRoles.emplace(LITTLEGIRL, 1);
		nbRoles.emplace(WITCH, 1);
		nbRoles.emplace(THIEF, 1);
		nbRoles.emplace(CUPIDS, 1);
		nbRoles.emplace(MAYOR, 0);
		nbRoles.emplace(HUNTER, 1);
		break;
	case 17:
		nbRoles.emplace(VILLAGER, 7);
		nbRoles.emplace(WEREWOLF, 4);
		nbRoles.emplace(SEER, 1);
		nbRoles.emplace(LITTLEGIRL, 1);
		nbRoles.emplace(WITCH, 1);
		nbRoles.emplace(THIEF, 1);
		nbRoles.emplace(CUPIDS, 1);
		nbRoles.emplace(MAYOR, 0);
		nbRoles.emplace(HUNTER, 1);
		break;
	case 18:
		nbRoles.emplace(VILLAGER, 8);
		nbRoles.emplace(WEREWOLF, 4);
		nbRoles.emplace(SEER, 1);
		nbRoles.emplace(LITTLEGIRL, 1);
		nbRoles.emplace(WITCH, 1);
		nbRoles.emplace(THIEF, 1);
		nbRoles.emplace(CUPIDS, 1);
		nbRoles.emplace(MAYOR, 0);
		nbRoles.emplace(HUNTER, 1);
		break;
	default:
		std::cout << "La distribution automatique ne fonctionne pas au dela de 18 joueurs ! Desole :(" << std::endl;
		system("PAUSE");
		exit(-1);
		break;
	}
}