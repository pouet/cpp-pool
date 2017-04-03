#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>

class ZombieEvent {

public:
	Zombie(std::string name, std::string type);
	~Zombie();

	void announce();

private:
	std::string _type;
	std::string _name;
};

#endif
