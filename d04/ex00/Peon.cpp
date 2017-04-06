#include <iostream>
#include "Peon.hpp"

Peon::Peon(std::string name)
	: Victim(name), _name(name)
{
	std::cout << "Zog Zog." << std::endl;
}

Peon::Peon(Peon const & src)
	: Victim(src)
{
	std::cout << "Zog Zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark.." << std::endl;
}

void Peon::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a pink pony !" << std::endl;
}
