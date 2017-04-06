#include <cstdlib>
#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	_hitpt = 100;
	_maxhitpt = 100;
	_nrjpt = 100;
	_maxnrjpt = 100;
	_lvl = 1;
	_name = name;
	_meleedmg = 30;
	_rangedmg = 20;
	_armorreduc = 5;
	std::cout << "FR4G-TP " << _name << " is born !" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FR4G-TP " << _name << " ended !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string tab[] = {
		"pen",
		"apple",
		"pine",
		"applepen",
		"pineapple",
		"penpineappleapplepen"
	};
	size_t sz = sizeof(tab) / sizeof(*tab);

	if (_nrjpt < 25) {
		std::cout << "You don't have enough energy to attack !!!" << std::endl;
		return;
	}
	_nrjpt -= 25;

	std::cout << "FR4G-TP " << _name << " attack " << target << " with " << tab[rand() % sz] << " !!!" << std::endl;
}
