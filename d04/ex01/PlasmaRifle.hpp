#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:
	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const & weapon);

	virtual void attack(void) const;
};

#endif
