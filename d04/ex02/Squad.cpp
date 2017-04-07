#include <iostream>
#include "Squad.hpp"

Squad::Squad(void)
	: _units(new ISpaceMarine*[0]), _nbUnits(0)
{
}

Squad::Squad(Squad const & src)
{
	this->_units = src._units;
	this->_nbUnits = src._nbUnits;
}

Squad::~Squad(void)
{
	for (int i = 0; i < _nbUnits; i++)
		delete _units[i];
	delete [] _units;
}

Squad & Squad::operator=(Squad const & rhs)
{
	_units = rhs._units;
	_nbUnits = rhs._nbUnits;

	return *this;
}

int Squad::getCount(void) const
{
	return _nbUnits;
}

ISpaceMarine * Squad::getUnit(int n) const
{
	if (n < 0 || n >= _nbUnits)
		return NULL;
	else
		return _units[n];
}

int Squad::push(ISpaceMarine * marine)
{
	if (marine == NULL)
		return _nbUnits;

	for (int i = 0; i < _nbUnits; i++)
		if (_units[i] == marine)
			return _nbUnits;

	ISpaceMarine ** tmp = new ISpaceMarine*[_nbUnits + 1];

	for (int i = 0; i < _nbUnits; i++)
		tmp[i] = _units[i];

	delete [] _units;
	_units = tmp;

	_units[_nbUnits++] = marine;

	return _nbUnits;
}
