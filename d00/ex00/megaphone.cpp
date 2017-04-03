#include <iostream>

int main(int ac, char **av)
{
	std::string s;

	if (ac == 1)
		s = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		for (int i = 1; i < ac; i++)
			s += av[i];
	}
	for (std::string::iterator i = s.begin(); i != s.end(); i++) {
		*i = std::toupper(*i);
	}
	std::cout << s << "\n";
	return 0;
}
