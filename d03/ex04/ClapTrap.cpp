#include <cstdlib>
#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	_hitpt = 1;
	_maxhitpt = 1;
	_nrjpt = 1;
	_maxnrjpt = 1;
	_lvl = 1;
	_name = "default";
	_meleedmg = 1;
	_rangedmg = 1;
	_armorreduc = 0;

	std::cout << "CL@P-TP " << _name << " is born !" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "CL@P-TP " << _name << " ended !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	std::cout << "CL@P-TP " << _name << " is being copied !" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	_hitpt = rhs.getHitpt();
	_maxhitpt = rhs.getMaxhitpt();
	_nrjpt = rhs.getNrjpt();
	_maxnrjpt = rhs.getMaxnrjpt();
	_lvl = rhs.getLvl();
	_name = rhs.getName();
	_meleedmg = rhs.getMeleedmg();
	_rangedmg = rhs.getRangedmg();
	_armorreduc = rhs.getArmorreduc();

	return *this;
}

unsigned int ClapTrap::getHitpt(void) const
{
	return _hitpt;
}

unsigned int ClapTrap::getMaxhitpt(void) const
{
	return _maxhitpt;
}

unsigned int ClapTrap::getNrjpt(void) const
{
	return _nrjpt;
}

unsigned int ClapTrap::getMaxnrjpt(void) const
{
	return _maxnrjpt;
}

unsigned int ClapTrap::getLvl(void) const
{
	return _lvl;
}

std::string  ClapTrap::getName(void) const
{
	return _name;
}

unsigned int ClapTrap::getMeleedmg(void) const
{
	return _meleedmg;
}

unsigned int ClapTrap::getRangedmg(void) const
{
	return _rangedmg;
}

unsigned int ClapTrap::getArmorreduc(void) const
{
	return _armorreduc;
}

void ClapTrap::rangedAttack(std::string const & target) const
{
	std::cout << "CL@P-TP " << _name << " attacks " << target <<
		" at range, causing " << _rangedmg << " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target) const
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
