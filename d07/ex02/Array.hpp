#ifndef ARRAY_HPP
#define ARRAY_HPP

template< typename T >
class Array {
	public:
		Array< T >(void);
		Array< T >(unsigned int sz);
		Array< T >(Array< T > const & rhs);
		virtual ~Array< T >(void);

		Array< T > & operator = (Array< T > const & src);
		T & operator [] (unsigned int b);

	private:
		T * _tab;
		unsigned int _size;
};

#endif
