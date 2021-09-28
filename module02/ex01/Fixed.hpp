

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#define cout std::cout
#define endl std::endl
#define ostream std::ostream

class Fixed
{
private:
	int		_fixedPoints;
	static 	const int _fractionalBits;
public:
	Fixed();
	Fixed(Fixed const &copy);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	Fixed & operator=(Fixed const &value);
	// 
	Fixed(int const  intToConvert);
	Fixed(float const  floatToConvert);
	float toFloat( void ) const;
	int toInt( void ) const;
	// 
};

ostream  &operator<<(ostream &o, Fixed const &copy);

#endif