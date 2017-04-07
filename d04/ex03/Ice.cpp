#include "Ice.hpp"

Ice::Ice(void)
	: AMateria("ice")
{
}

Ice::Ice(Ice const & src)
	: AMateria("ice")
{
	*this = src;
}

Ice::~Ice(void)
{
}

Ice & Ice::operator=(Ice const & rhs)
{
	_xp = rhs._xp;

	return *this;
}

Ice * Ice::clone(void) const
{
	return new Ice(*this);
}

void Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}

