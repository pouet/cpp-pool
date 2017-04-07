#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {

public:
	AMateria(std::string const & type);
	AMateria(AMateria const & src);
	virtual ~AMateria(void);
	
	std::string const & getType(void) const;
	unsigned int getXP(void) const;

	virtual AMateria * clone(void) const = 0;
	virtual void use(ICharacter & target);

private:
	std::string _type;
	unsigned int _xp;
};

#endif
