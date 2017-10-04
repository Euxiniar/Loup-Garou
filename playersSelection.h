#pragma once
#include "Player.h"

void _SelectPlayer(std::map<uint32_t, Player> &players)
{
	bool playersWantToPlay{ true };
	bool lessThanEight{ true };
	while (playersWantToPlay && lessThanEight)
	{
		static uint32_t selectedPlayer{ 0 };
		std::string playerName{ 0 };

		std::cout << "Entrez votre pseudo :" << std::endl;
		std::getline(std::cin, playerName);

		std::string quitNameTest = playerName;
		std::transform(quitNameTest.begin(), quitNameTest.end(), quitNameTest.begin(), ::tolower);
		if (quitNameTest.size() == 1 && quitNameTest.at(0) == 'q')
			if (players.size() < 8)
				std::cout << "Ce jeu necessite au moins 8 joueurs !\n" << std::endl;
			else
			{
				playersWantToPlay = !playersWantToPlay;
				lessThanEight = !lessThanEight;
			}
		else
		{
			Player player(playerName);
			players.emplace(selectedPlayer, player);
			std::cout << "Vous avez bien ete enregistre " << players.at(selectedPlayer).getName() <<
				" !\nPour arreter les enregistrements tapez 'Q'\n" << std::endl;
			selectedPlayer++;
		}
	}
}
