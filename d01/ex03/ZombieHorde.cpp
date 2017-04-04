#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _sz(n)
{
	_horde = new Zombie[n];
	std::cout << "Horde created !" << std::endl;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] _horde;
	std::cout << "Horde destroyed !" << std::endl;
}

void ZombieHorde::announce(void) const
{
	for (int i = 0; i < _sz; i++)
		_horde[i].announce();
}
