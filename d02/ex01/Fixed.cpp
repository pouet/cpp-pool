#include <cmath>
#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & fxd)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fxd;
}

Fixed::Fixed(int n) : _fixed(0)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed = n << _fbits;
}

Fixed::Fixed(float n) : _fixed(0)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed = roundf(n * (1 << _fbits));
}

Fixed::~Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const & fxd)
{
	std::cout << "Assignation operator called" << std::endl;

	_fixed = fxd.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return _fixed;
}

void Fixed::setRawBits(int const raw)
{
	_fixed = raw;
}

float Fixed::toFloat(void) const
{
	return ((float) _fixed) / (1 << _fbits);
}

int Fixed::toInt(void) const
{
	return _fixed >> _fbits;
}

std::ostream& operator<<(std::ostream &o, Fixed const & fxd)
{
	o << fxd.toFloat();
	return o;
}
