#include <iostream>
#include <fstream>
#include "Cat.hpp"

Cat9tails::Cat9tails(std::string filename) : _filename(filename)
{
}

Cat9tails::~Cat9tails(void)
{
}

void Cat9tails::_doStuff(std::istream& in)
{
	char buf[1025] = "";

	while (true) {
		in.getline(buf, 1024);
		std::cout << buf;
		if (in.eof() || in.fail())
			break;
		std::cout << std::endl;
	}
}

void Cat9tails::cat(void)
{
	if (_filename == "-")
		_doStuff(std::cin);
	else {
		std::ifstream file(_filename);

		if (file.is_open()) {
			_doStuff(file);
			file.close();
		}
		else {
			std::cout << "Cant open the file : " << _filename << std::endl;
			return;
		}
	}
}
