#include <iostream>
#include "Human.hpp"

Human::Human(void)
{
}

Human::~Human(void)
{
}

Brain& Human::getBrain(void)
{
	return _brain;
}

std::string Human::identify(void)
{
	return _brain.identify();
}
