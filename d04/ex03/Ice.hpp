#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria {

public:
	Ice(void);
	Ice(Ice const & src);
	virtual ~Ice(void);

	Ice & operator=(Ice const & rhs);

	Ice * clone(void) const;
	virtual void use(ICharacter & target);

private:
	std::string _type;
	unsigned int _xp;
};

#endif
