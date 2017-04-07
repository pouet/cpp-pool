#include <iostream>
#include "AWeapon.hpp"
#include "PowerFist.hpp"

PowerFist::PowerFist(void)
	: AWeapon("Power Fist", 50, 8)
{
}

PowerFist::PowerFist(PowerFist const & weapon)
	: AWeapon(weapon)
{
}

void PowerFist::attack(void) const
{
	std::cout << "* pschh... SBAM ! *" << std::endl;
}
