#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon {

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & weapon);
	virtual ~AWeapon(void);

	AWeapon & operator=(AWeapon const & rhs);

	std::string const & getName(void) const;
	int getAPCost(void) const;
	int getDamage(void) const;

	virtual void attack(void) const = 0;

private:
	std::string _name;
	int _damage;
	int _apcost;
};

#endif
