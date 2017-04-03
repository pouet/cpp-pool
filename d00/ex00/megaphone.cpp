#include <iostream>
#include <iomanip>

int main(int ac, char **av)
{
	std::string s;

	if (ac == 1)
		s = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		for (int i = 1; i < ac; i++)
			s += av[i];
	}
	for (size_t i = 0; i < s.length(); i++)
		s[i] = std::toupper(s[i]);
	std::cout << std::uppercase << s << "\n";
	return 0;
}
