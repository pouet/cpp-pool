#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name)
{
	_hitpt = FragTrap::_hitpt;
	_maxhitpt = FragTrap::_maxhitpt;
	_nrjpt = NinjaTrap::_nrjpt;
	_maxnrjpt = NinjaTrap::_maxnrjpt;
	_lvl = 1;
	_name = name;
	_meleedmg = NinjaTrap::_meleedmg;
	_rangedmg = FragTrap::_rangedmg;
	_armorreduc = FragTrap::_armorreduc;

	std::cout << "SUPER-TP " << _name << " is born !" << std::endl;

	_hitpt = FragTrap::_hitpt;
}

SuperTrap::SuperTrap(SuperTrap const & src) : FragTrap(src._name), NinjaTrap(src._name)
{
	*this = src;

	std::cout << "SUPER-TP " << _name << " is being copied !" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
}
