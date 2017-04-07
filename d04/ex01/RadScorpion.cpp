#include <iostream>
#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void)
	: Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & enemy)
	: Enemy(enemy)
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
}

//void RadScorpion::takeDamage(int damage)
//{
//	if (damage - 3 < 0)
//		damage = 0;
//	setHp(getHp() - damage);
//}
