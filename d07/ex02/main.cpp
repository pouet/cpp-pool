#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<int> a(10);
	Array<int> b;

	try {
		std::cout << b[0] << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	for (int i = 0; i < 10; i++)
		a[i] = i * 10;

	b = a;

	for (int i = 0; i < 10; i++)
		std::cout << a[i] << " " << b[i] << std::endl;

	Array<double> c(10);
	Array<double> d;

	for (int i = 0; i < 10; i++)
		c[i] = i * 0.5;

	d = c;

	for (int i = 0; i < 10; i++)
		std::cout << c[i] << " " << d[i] << std::endl;

	return 0;
}
