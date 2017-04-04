#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>

class Cat9tails {

public:
	Cat9tails(std::string filename);
	~Cat9tails(void);

	void cat(void);

private:
	void _doStuff(std::istream& in);

	std::string _filename;
};

#endif
