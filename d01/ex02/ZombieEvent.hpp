#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <iostream>

class ZombieEvent {

public:
	ZombieEvent();
	~ZombieEvent();

	void setZombieType(std::string name);
	Zombie* newZombie(std::string name);

	void randomChump(void);

private:
	std::string _type;
};

#endif
