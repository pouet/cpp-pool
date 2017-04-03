#include <iostream>
#include <sstream>
#include "Brain.hpp"

Brain::Brain(void)
{
}

Brain::~Brain(void)
{
}

std::string Brain::identify(void)
{
	std::stringstream ss;
	
	ss << std::hex << this;
	return ss.str();
}
