#include <iostream>
#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
	: _name(name), _damage(damage), _apcost(apcost)
{
}

AWeapon::AWeapon(AWeapon const & weapon)
{
	*this = weapon;
}

AWeapon::~AWeapon(void)
{
}

AWeapon & AWeapon::operator=(AWeapon const & rhs)
{
	_name = rhs.getName();
	_apcost = rhs.getAPCost();
	_damage = rhs.getDamage();

	return *this;
}

std::string const & AWeapon::getName(void) const
{
	return _name;
}

int AWeapon::getAPCost(void) const
{
	return _apcost;
}

int AWeapon::getDamage(void) const
{
	return _damage;
}
