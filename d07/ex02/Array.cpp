#include <iostream>
#include "Array.hpp"

template < typename T >
Array< T >::Array(void)
{
	_size = 0;
	_tab = new T[0];
}

template < typename T >
Array< T >::Array(unsigned int sz)
{
	_size = sz;
	_tab = new T[sz];
}

template < typename T >
Array< T >::Array(Array const & rhs)
{
	_size = rhs._size;
	_tab = new T[_size];

	for (unsigned int i = 0; i < _size; i++)
		_tab[i] = rhs._tab[i];
}

template < typename T >
Array< T >::~Array(void)
{
	delete [] _tab;
}

template < typename T >
Array< T > & Array< T >::operator = (Array< T > const & src)
{
	_size = src._size;
	_tab = new T[_size];

	for (unsigned int i = 0; i < _size; i++)
		_tab[i] = src._tab[i];

	return *this;
}

template < typename T >
T & Array< T >::operator [] (unsigned int b)
{
	if (_size == 0 || b >= _size)
		throw std::invalid_argument("Out of bounds");
	return _tab[b];
}
