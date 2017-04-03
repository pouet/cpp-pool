#include <iostream>

int main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string* p_s = &s;
	std::string& r_s = s;

	std::cout << "Pointer : " << *p_s << std::endl;
	std::cout << "Ref     : " << r_s << std::endl;

	return 0;
}
