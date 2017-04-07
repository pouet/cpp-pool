#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
	: _type(type), _xp(0)
{
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
}

AMateria::~AMateria(void)
{
}

std::string const & AMateria::getType(void) const
{
	return _type;
}

unsigned int AMateria::getXP(void) const
{
	return _xp;
}

void AMateria::use(ICharacter & target)
{
	(void)target;
	_xp += 10;
}
