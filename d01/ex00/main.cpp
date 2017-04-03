#include <iostream>
#include "Pony.hpp"

int main() {
	std::cout << "My new poney !" << std::endl;

	Pony p;

	std::cout << "Poney on the stack !" << std::endl;
	p.ponyOnTheStack();
	std::cout << "Poney on the heap !" << std::endl;
	p.ponyOnTheHeap();
	std::cout << "Bye bye poney... :'(" << std::endl;

	return 0;
}
