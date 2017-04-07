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
	_name = rhs.getName();
	_ap = rhs.getAP();
	_weapon = rhs.getWeapon();

	return *this;
}

void Character::recoverAP(void)
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void Character::equip(AWeapon * weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy * enemy)
{
	if (_weapon == NULL)
		std::cout << _name << " can't attack !" << std::endl;
	else if (_ap < _weapon->getAPCost()) {
		std::cout << _name << " can't attack, No enough AP !" << std::endl;
	}
	else {
		std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;

		_weapon->attack();
		_ap -= _weapon->getAPCost();
		enemy->takeDamage(_weapon->getDamage());

		if (enemy->getHp() <= 0)
			delete enemy;
	}
}

std::string const & Character::getName(void) const
{
	return _name;
}

int Character::getAP(void) const
{
	return _ap;
}

AWeapon * Character::getWeapon(void) const
{
	return _weapon;
}

std::ostream& operator<<(std::ostream &o, Character const & rhs)
{
	if (rhs.getWeapon() == NULL)
	o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
	else
		o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
	return o;
}
