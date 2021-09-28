#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

#define cout std::cout
#define endl std::endl

class Fixed
{
private:
	int _fixedPoints;
	static const int _fractionalBits;

public:
	Fixed();
	Fixed(Fixed &copy);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed &operator=(Fixed const &value);
};

#endif