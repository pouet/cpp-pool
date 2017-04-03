#include <cstdlib>
#include "ZombieHorde.hpp"

int main(void)
{
	srand(time(NULL));

	ZombieHorde z(10);
	z.announce();

	ZombieHorde y(2);
	y.announce();

	return 0;
}
