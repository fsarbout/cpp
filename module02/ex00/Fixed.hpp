#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#define cout std::cout
#define endl std::endl


class Fixed
{
private:
	int _fixedPoint;
	static const int _fractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();
	Fixed & operator = (const Fixed &rhs);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif