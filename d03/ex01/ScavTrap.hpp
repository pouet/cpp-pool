#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap {

public:
	ScavTrap(std::string name);
	~ScavTrap(void);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void challengeNewcomer(void);

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
