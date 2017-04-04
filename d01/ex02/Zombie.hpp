#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

public:
	Zombie(std::string name, std::string type);
	~Zombie(void);

	void announce(void) const;

private:
	std::string _type;
	std::string _name;
};

#endif
