#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : virtual public Victim {

public:
	Peon(std::string name);
	Peon(Peon const & src);
	~Peon(void);

	void getPolymorphed(void) const;

	std::string getName(void) const;

private:
	std::string _name;
};

#endif
