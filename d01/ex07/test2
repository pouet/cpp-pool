#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int ac, char **av)
{
	std::ifstream in;
	std::ofstream out;
	std::string filename;
	std::string line;
	std::string to_find;
	std::string to_replace;


	if (ac != 4 || strlen(av[1]) == 0 || strlen(av[2]) == 0 || strlen(av[3]) == 0) {
		std::cout << "usage " << av[0] << " FILENAME FIND REPLACE" << std::endl;
		return -1;
	}

	filename = av[1];
	to_find = av[2];
	to_replace = av[3];

	in.open(av[1]);
	if (!in.is_open()) {
		std::cout << "Cant open the file : " << filename << std::endl;
		return -1;
	}

	out.open(filename + ".replace");
	if (!out.is_open()) {
		std::cout << "Cant open the file : " << filename + ".replace" << std::endl;
		return -1;
	}

	while (std::getline(in, line)) {
		std::size_t off = line.find(to_find);
		while ((off = line.find(to_find)) != std::string::npos)
			line.replace(off, to_find.length(), to_replace);
		out << line << std::endl;
	}

	in.close();
	out.close();
	return 0;
}
