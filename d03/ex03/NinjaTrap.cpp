#include <cstdlib>
#include <iostream>
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
{
	_hitpt = 60;
	_maxhitpt = 60;
	_nrjpt = 120;
	_maxnrjpt = 120;
	_lvl = 1;
	_name = name;
	_meleedmg = 60;
	_rangedmg = 5;
	_armorreduc = 0;
	std::cout << "NINJ@-TP " << _name << " is born !" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NINJ@-TP " << _name << " ended !" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const & target)
{
	std::cout << "NINJ@-TP " << _name << " attack " << target.getName() <<
		" with a Blue Suede Shoes !"<< std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const & target)
{
	std::cout << "NINJ@-TP " << _name << " attack " << target.getName() <<
		" with a Santiag !"<< std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{
	std::cout << "NINJ@-TP " << _name << " attack " << target.getName() <<
		" with a Leather Boots !"<< std::endl;
}
