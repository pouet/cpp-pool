#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

public:
	Fixed(void);
	Fixed(Fixed const & fxd);
	Fixed(int n);
	Fixed(float n);

	~Fixed(void);

	Fixed& operator=(Fixed const & fxd);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

private:
	int _fixed;
	static int const _fbits = 8;

};

std::ostream& operator<<(std::ostream &o, Fixed const & fxd);

#endif
