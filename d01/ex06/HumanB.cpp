#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: _name(name), _weap(NULL)
{
}

HumanB::~HumanB(void)
{
}

void HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << _weap->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weap)
{
	_weap = &weap;
}
