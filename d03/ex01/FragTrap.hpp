#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap {

public:
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);

	FragTrap & operator=(FragTrap const & rhs);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void vaulthunter_dot_exe(std::string const & target);

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
