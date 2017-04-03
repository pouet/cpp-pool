#include <cstdlib>
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void) : _type("Poneys")
{
	std::string names[] = {
		"Fluttershy",
		"Rainbowdash",
		"Pinkie pie"
	};
	_name = names[rand() % (sizeof names / sizeof *names)];
}

Zombie::~Zombie()
{
}

void Zombie::announce()
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnnnnnnnns..." << std::endl;
}
