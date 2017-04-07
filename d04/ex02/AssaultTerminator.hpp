#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {

public:
	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const & src);
	virtual ~AssaultTerminator(void);

	// TODO: operator = overload

	ISpaceMarine * clone(void) const;
	void battleCry(void) const;
	void rangedAttack(void) const;
	void meleeAttack(void) const;
};

#endif
