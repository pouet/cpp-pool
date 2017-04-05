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

	Fixed & operator=(Fixed const & fxd);

	Fixed operator+(Fixed const fxd);
	Fixed operator-(Fixed const fxd);
	Fixed operator*(Fixed const fxd);
	Fixed operator/(Fixed const fxd);

	Fixed operator++(void);
	Fixed operator++(int);

	Fixed operator--(void);
	Fixed operator--(int);

	bool operator>(Fixed const fxd);
	bool operator<(Fixed const fxd);
	bool operator>=(Fixed const fxd);
	bool operator<=(Fixed const fxd);

	bool operator==(Fixed const fxd);
	bool operator!=(Fixed const fxd);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

	static Fixed & min(Fixed & f1, Fixed & f2);
	static Fixed const & min(Fixed const & f1, Fixed const & f2);

	static Fixed & max(Fixed & f1, Fixed & f2);
	static Fixed const & max(Fixed const & f1, Fixed const & f2);

private:
	int _fixed;
	static int const _fbits = 8;

};

std::ostream& operator<<(std::ostream &o, Fixed const & fxd);

#endif
