#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap {

public:
	FragTrap(std::string name);
	~FragTrap(void);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void vaulthunter_dot_exe(std::string const & target);

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
