#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {

public:
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & src);
	~NinjaTrap(void);

	void ninjaShoebox(FragTrap const & target) const;
	void ninjaShoebox(ScavTrap const & target) const;
	void ninjaShoebox(NinjaTrap const & target) const;
};

#endif
