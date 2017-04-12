#include <iostream>

void pstring(std::string s)
{
	std::cout << s << std::endl;
}

void pint(int i)
{
	std::cout << i << std::endl;
}

void pfloat(float f)
{
	std::cout << f << std::endl;
}

template< typename T, typename F >
void iter(T const & tab, size_t len, F f)
{
	for (size_t i = 0; i < len; i++)
		f(tab[i]);
}

int main(void)
{
	std::string stab[] = { "toto", "tata", "titi", "tutu" };
	int itab[] = { 10, 20, 42, 50 };
	float ftab[] = { 1., 1e-6, .01234, 42.42 };

	iter(stab, 4, pstring);
	iter(itab, 4, pint);
	iter(ftab, 4, pfloat);

	return 0;
}
