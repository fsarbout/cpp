

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

#define cout std::cout
#define endl std::endl
#define ostream std::ostream

class Fixed
{
private:
	int		_fixedPoints;
	static 	const int _fractionalBits;
public:
	// pour convert  
	Fixed(const int intToConvert);
	Fixed(const int floatToConvert);
	// 
	Fixed();
	Fixed(Fixed &copy);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	Fixed & operator=(Fixed const &value);
	// 
	float toFloat( void );
	int toInt( void ) const;
	ostream  & operator<<(ostream &o, Fixed const &copy);

};




#endif