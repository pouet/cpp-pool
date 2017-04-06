#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

public:
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const & src);
	~SuperTrap(void);

private:
};

#endif
