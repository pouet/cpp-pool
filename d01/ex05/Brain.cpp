#include <iostream>
#include <sstream>
#include "Brain.hpp"

Brain::Brain(void) : _iq(120)
{
}

Brain::~Brain(void)
{
}

std::string Brain::identify(void) const
{
	std::stringstream ss;
	
	ss << std::hex << this;
	return ss.str();
}

int Brain::getIq(void) const
{
	return _iq;
}
