#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

public:
	ClapTrap(void);
	ClapTrap(ClapTrap const & src);
	~ClapTrap(void);

	ClapTrap & operator=(ClapTrap const & rhs);

	void rangedAttack(std::string const & target) const;
	void meleeAttack(std::string const & target) const;
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	unsigned int getHitpt(void) const;
	unsigned int getMaxhitpt(void) const;
	unsigned int getNrjpt(void) const;
	unsigned int getMaxnrjpt(void) const;

	unsigned int getLvl(void) const;
	std::string  getName(void) const;

	unsigned int getMeleedmg(void) const;
	unsigned int getRangedmg(void) const;
	unsigned int getArmorreduc(void) const;

protected:
	unsigned int _hitpt;
	unsigned int _maxhitpt;
	unsigned int _nrjpt;
	unsigned int _maxnrjpt;

	unsigned int _lvl;
	std::string _name;

	unsigned int _meleedmg;
	unsigned int _rangedmg;
	unsigned int _armorreduc;
};

#endif
