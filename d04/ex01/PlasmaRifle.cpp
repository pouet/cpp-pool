#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
	: AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & weapon)
	: AWeapon(weapon)
{
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
