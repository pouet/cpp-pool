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
	int _hitpt;
	int _maxhitpt;
	int _nrjpt;
	int _maxnrjpt;

	int _lvl;
	std::string _name;

	int _meleedmg;
	int _rangedmg;
	int _armorreduc;
};

#endif
