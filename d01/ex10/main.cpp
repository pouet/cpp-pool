#include "Cat.hpp"

int main(int ac, char **av)
{
	char instd[] = "-";

	if (ac == 1)
		av[ac++] = instd;

	for (int i = 1; i < ac; i++) {
		Cat9tails c(av[i]);
		c.cat();
	}

	return 0;
}
