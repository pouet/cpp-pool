#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy {

public:
	RadScorpion(void);
	RadScorpion(RadScorpion const & enemy);
	virtual ~RadScorpion(void);

//	virtual void takeDamage(int damage);
};

#endif
