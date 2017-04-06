#include <cstdlib>
#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "SC@V-TP is born !" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "SC@V-TP " << _name << " ended !" << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "CL@P-TP " << _name << " attacks " << target <<
		" at range, causing " << _rangedmg << " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "CL@P-TP " << _name << " attacks " << target <<
		" at melee, causing " << _meleedmg << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > _armorreduc)
		amount -= _armorreduc;
	else
		amount = 0;

	if (amount > _hitpt)
		amount = _hitpt;
	_hitpt -= amount;

	std::cout << "CL@P-TP " << _name << " lost " << amount <<
		" health points !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_hitpt += amount;
	if (_hitpt > _maxhitpt) {
		amount -= (_hitpt - _maxhitpt);
		_hitpt = _maxhitpt;
	}

	std::cout << "CL@P-TP " << _name << " gained " << amount <<
		" health points !" << std::endl;
}
