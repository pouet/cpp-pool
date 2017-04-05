#include <cstdlib>
#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
	: _hitpt(100), _maxhitpt(100), _nrjpt(50), _maxnrjpt(50), _lvl(1),
	_name(name), _meleedmg(20), _rangedmg(15), _armorreduc(3)
{
	std::cout << "SC@V-TP " << _name << " is born !" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "SC@V-TP " << _name << " ended !" << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC@V-TP " << _name << " attacks " << target <<
		" at range, causing " << _rangedmg << " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC@V-TP " << _name << " attacks " << target <<
		" at melee, causing " << _meleedmg << " points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (amount > _armorreduc)
		amount -= _armorreduc;
	else
		amount = 0;

	if (amount > _hitpt)
		amount = _hitpt;
	_hitpt -= amount;

	std::cout << "SC@V-TP " << _name << " lost " << amount <<
		" health points !" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	_hitpt += amount;
	if (_hitpt > _maxhitpt) {
		amount -= (_hitpt - _maxhitpt);
		_hitpt = _maxhitpt;
	}

	std::cout << "SC@V-TP " << _name << " gained " << amount <<
		" health points !" << std::endl;
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