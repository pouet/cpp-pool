#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <iostream>

class ZombieEvent {

public:
	ZombieEvent(void);
	~ZombieEvent(void);

	void setZombieType(std::string name);
	Zombie* newZombie(std::string name) const;

	void randomChump(void);

private:
	std::string _type;
};

#endif
