#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _type(type), _name(name)
{
}

Zombie::~Zombie(void)
{
}

void Zombie::announce(void) const
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnnnnnnnns..." << std::endl;
}
