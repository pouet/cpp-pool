#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

class ScavTrap {

public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap(void);

	ScavTrap & operator=(ScavTrap const & rhs);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void challengeNewcomer(void);

	unsigned int getHitpt(void) const;
	unsigned int getMaxhitpt(void) const;
	unsigned int getNrjpt(void) const;
	unsigned int getMaxnrjpt(void) const;

	unsigned int getLvl(void) const;
	std::string  getName(void) const;

	unsigned int getMeleedmg(void) const;
	unsigned int getRangedmg(void) const;
	unsigned int getArmorreduc(void) const;

private:
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
