#include <iostream>
#include "Character.hpp"

Character::Character(std::string const & name)
	: _name(name), _ap(40), _weapon(NULL)
{
}

Character::Character(Character const & character)
{
	*this = character;
}

Character::~Character(void)
{
	if (_weapon != NULL)
		delete _weapon;
}

Character & Character::operator=(Character const & rhs)
{
//	_name = rhs.getName();
//	_ap = rhs.getAP();
//	_weapon = rhs.getWeapon();
}

void Character::recoverAP(void)
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void Character::equip(AWeapon * weapon)
{
	if (_weapon != NULL)
		delete _weapon;
	_weapon = weapon;
}

void Character::attack(Enemy * enemy)
{
}

std::string const & Character::getName(void) const
{
}
