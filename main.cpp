#include <iostream>
#include <sstream>
#include <map>
#include <algorithm>
#include <random>
#include <array>
#include <memory>
#include <chrono>

#include "rolesDefinitions.h"
#include "autoComposition.h"
#include "playersSelection.h"
#include "Player.h"

int main(_In_ int argc, _In_reads_(argc) _Pre_z_ char** argv, _In_z_ char** envp)
{ 
	std::vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::random_device rd;
	std::mt19937 g(rd());
	std::shuffle(v.begin(), v.end(), g);

	std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << "\n";

//	std::default_random_engine re((unsigned int) std::chrono::system_clock::now().time_since_epoch().count());
	
	std::map<uint32_t, Player> players;
	std::map<uint32_t, uint32_t> nbRoles;
	std::map<uint32_t, uint32_t> werewolf;

	std::cout << "--------------BIENVENUE SUR LE JEU DU LOUP-GAROU !--------------\n" << std::endl;
	_SelectPlayer(players);

	char answer;
	do
	{
		std::cout << "Voulez-vous une distribution des roles composee automatiquement ?(O/N)" << std::endl;
		std::cin >> answer;
	} while (answer != 'O' && answer != 'o' && answer != 'n' && answer != 'N');

	if (answer == 'O' || answer == 'o')
	{
		_AutoComposition((uint32_t)players.size(), nbRoles);
	}
	//TODO selection des cartes par le joueur si Non

	//TODO faire une fifo aléa, puis distribuer les roles


	/*for (uint32_t i{ 0 }; i <= HUNTER; ++i)
	{
		std::uniform_int_distribution<uint32_t> distrib(0, (uint32_t)players.size()-1);
		for (uint32_t y{ 0 }; y < nbRoles.at(i); ++y)
		{
			werewolf.emplace(y,distrib(re));
			std::cout << players.at(werewolf.at(y)).getName() << " Role " << i << " Joueur select " << y << std::endl;
		}
	}*/
	system("PAUSE");
	return 0;
}