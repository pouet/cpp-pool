#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character {

public:
	Character(std::string const & name);
	Character(Character const & character);
	~Character(void);

	Character & operator=(Character const & rhs);

	void recoverAP(void);
	void equip(AWeapon * weapon);
	void attack(Enemy * enemy);

	std::string const & getName(void) const;
	int getAP(void) const;
	AWeapon * getWeapon(void) const;

private:
	std::string _name;
	int _ap;
	AWeapon * _weapon;
};

std::ostream & operator<<(std::ostream &o, Character const & rhs);

#endif
