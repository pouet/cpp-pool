#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria {

public:
	Cure(void);
	Cure(Cure const & src);
	virtual ~Cure(void);

	Cure & operator=(Cure const & rhs);

	Cure * clone(void) const;
	virtual void use(ICharacter & target);

private:
	std::string _type;
	unsigned int _xp;
};

#endif
