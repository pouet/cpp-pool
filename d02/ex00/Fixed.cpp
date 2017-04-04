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
	std::cout << "getRawBits member function called" << std::endl;
	return _fixed;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixed = raw;
}
