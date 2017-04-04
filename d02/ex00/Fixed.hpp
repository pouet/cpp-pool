#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {

public:
	Fixed(void);
	Fixed(Fixed const & fxd);
	~Fixed(void);

	Fixed& operator=(Fixed const & fxd);

	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int _fixed;
	static int const _fbits = 8;

};

#endif
