#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

public:
	Zombie(void);
	~Zombie(void);

	void announce(void);

private:
	std::string _type;
	std::string _name;
};

#endif
