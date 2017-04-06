#include <cstdlib>
#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
	: _hitpt(100), _maxhitpt(100), _nrjpt(100), _maxnrjpt(100), _lvl(1),
	_name(name), _meleedmg(30), _rangedmg(20), _armorreduc(5)
{
	std::cout << "FR4G-TP " << _name << " is born !" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	std::cout << "FR4G-TP " << _name << " is being copied !" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FR4G-TP " << _name << " ended !" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
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

unsigned int FragTrap::getHitpt(void) const
{
	return _hitpt;
}

unsigned int FragTrap::getMaxhitpt(void) const
{
	return _maxhitpt;
}

unsigned int FragTrap::getNrjpt(void) const
{
	return _nrjpt;
}

unsigned int FragTrap::getMaxnrjpt(void) const
{
	return _maxnrjpt;
}

unsigned int FragTrap::getLvl(void) const
{
	return _lvl;
}

std::string  FragTrap::getName(void) const
{
	return _name;
}

unsigned int FragTrap::getMeleedmg(void) const
{
	return _meleedmg;
}

unsigned int FragTrap::getRangedmg(void) const
{
	return _rangedmg;
}

unsigned int FragTrap::getArmorreduc(void) const
{
	return _armorreduc;
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << " attacks " << target <<
		" at range, causing " << _rangedmg << " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << " attacks " << target <<
		" at melee, causing " << _meleedmg << " points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (amount > _armorreduc)
		amount -= _armorreduc;
	else
		amount = 0;

	if (amount > _hitpt)
		amount = _hitpt;
	_hitpt -= amount;

	std::cout << "FR4G-TP " << _name << " lost " << amount <<
		" health points !" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	_hitpt += amount;
	if (_hitpt > _maxhitpt) {
		amount -= (_hitpt - _maxhitpt);
		_hitpt = _maxhitpt;
	}

	std::cout << "FR4G-TP " << _name << " gained " << amount <<
		" health points !" << std::endl;
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
