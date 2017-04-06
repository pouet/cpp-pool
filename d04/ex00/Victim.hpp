#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim {

public:
	Victim(std::string name);
	Victim(Victim const & src);
	~Victim(void);

	virtual Victim & operator=(Victim const & rhs);

	virtual void getPolymorphed(void) const;

	std::string getName(void) const;

protected:
	std::string _name;
};

std::ostream & operator<<(std::ostream &o, Victim const & rhs);

#endif
