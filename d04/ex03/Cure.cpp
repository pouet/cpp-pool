#include "Cure.hpp"

Cure::Cure(void)
	: AMateria("cure")
{
}

Cure::Cure(Cure const & src)
	: AMateria("cure")
{
	*this = src;
}

Cure::~Cure(void)
{
}

Cure & Cure::operator=(Cure const & rhs)
{
	_xp = rhs._xp;

	return *this;
}

Cure * Cure::clone(void) const
{
	return new Cure(*this);
}

void Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

