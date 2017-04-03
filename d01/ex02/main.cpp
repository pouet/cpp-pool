#include <cstdlib>
#include <iostream>
#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent ze;

	srand(time(NULL));

	ze.setZombieType("nothing");
	Zombie* z = ze.newZombie("name");
	z->announce();
	delete z;

	ze.setZombieType("the void");
	ze.randomChump();
	ze.setZombieType("poney");
	ze.randomChump();
	ze.setZombieType("a zombie");
	ze.randomChump();
	ze.randomChump();

	return 0;
}
