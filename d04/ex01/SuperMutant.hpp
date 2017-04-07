#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy {

public:
	SuperMutant(void);
	SuperMutant(SuperMutant const & enemy);
	virtual ~SuperMutant(void);

	virtual void takeDamage(int damage);
};

#endif
