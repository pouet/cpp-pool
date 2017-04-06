#include <cstdlib>
#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	_hitpt = 100;
	_maxhitpt = 100;
	_nrjpt = 100;
	_maxnrjpt = 100;
	_lvl = 1;
	_name = name;
	_meleedmg = 20;
	_rangedmg = 15;
	_armorreduc = 3;
	std::cout << "CL@P-TP " << _name << " is born !" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "CL@P-TP " << _name << " ended !" << std::endl;
}

void ScavTrap::challengeNewcomer(void)
{
	std::string tab[] = {
		"sky cannon blast",
		"lightning thunder blade",
		"legendary blaze",
		"ultimate battle fist",
		"fist of armor",
		"chaos blade"
	};
	size_t sz = sizeof(tab) / sizeof(*tab);

	std::cout << "SC@V-TP " << tab[rand() % sz] << std::endl;
}
