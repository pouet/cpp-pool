#include <cstdlib>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) : _type("poney")
{
}

ZombieEvent::~ZombieEvent(void)
{
}

void ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) const
{
	return new Zombie(name, _type);
}

void ZombieEvent::randomChump(void)
{
	std::string names[] = {
		"Fluttershy",
		"Rainbowdash",
		"Pinkie pie"
	};
	std::string s = names[rand() % (sizeof names / sizeof *names)];
	Zombie z(s, _type);

	z.announce();
}
