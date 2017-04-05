#include <cmath>
#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed(0)
{
}

Fixed::Fixed(Fixed const & fxd)
{
	*this = fxd;
}

Fixed::Fixed(int n) : _fixed(0)
{
	_fixed = n << _fbits;
}

Fixed::Fixed(float n) : _fixed(0)
{
	_fixed = roundf(n * (1 << _fbits));
}

Fixed::~Fixed(void)
{
}

Fixed& Fixed::operator=(Fixed const & fxd)
{
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

Fixed Fixed::operator+(Fixed const fxd)
{
	_fixed += fxd.getRawBits();
	return *this;
}

Fixed Fixed::operator-(Fixed const fxd)
{
	_fixed -= fxd.getRawBits();
	return *this;
}

Fixed Fixed::operator*(Fixed const fxd)
{
	float n = this->toFloat() * fxd.toFloat();
	_fixed = roundf(n * (1 << _fbits));
	return *this;
}

Fixed Fixed::operator/(Fixed const fxd)
{
	float n = this->toFloat() / fxd.toFloat();
	_fixed = roundf(n * (1 << _fbits));
	return *this;
}

Fixed Fixed::operator++(void)
{
	_fixed++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed sav(*this);
	++_fixed;
	return sav;
}

Fixed Fixed::operator--(void)
{
	_fixed--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed sav(*this);
	--_fixed;
	return sav;
}

bool Fixed::operator>(Fixed const fxd)
{
	return _fixed > fxd.getRawBits();
}

bool Fixed::operator<(Fixed const fxd)
{
	return _fixed < fxd.getRawBits();
}

bool Fixed::operator>=(Fixed const fxd)
{
	return _fixed >= fxd.getRawBits();
}

bool Fixed::operator<=(Fixed const fxd)
{
	return _fixed <= fxd.getRawBits();
}

bool Fixed::operator==(Fixed const fxd)
{
	return _fixed == fxd.getRawBits();
}

bool Fixed::operator!=(Fixed const fxd)
{
	return _fixed != fxd.getRawBits();
}


Fixed & Fixed::min(Fixed & f1, Fixed & f2)
{
	if (f1.getRawBits() <= f2.getRawBits())
		return f1;
	else
		return f2;
}

Fixed const & Fixed::min(Fixed const & f1, Fixed const & f2)
{
	if (f1.getRawBits() <= f2.getRawBits())
		return f1;
	else
		return f2;
}


Fixed & Fixed::max(Fixed & f1, Fixed & f2)
{
	if (f1.getRawBits() >= f2.getRawBits())
		return f1;
	else
		return f2;
}

Fixed const & Fixed::max(Fixed const & f1, Fixed const & f2)
{
	if (f1.getRawBits() >= f2.getRawBits())
		return f1;
	else
		return f2;
}

