#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weap)
	: _name(name), _weap(weap)
{
}

HumanA::~HumanA(void)
{
}

void HumanA::attack(void) const
{
	std::cout << _name << " attacks with his " << _weap.getType() << std::endl;
}
