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
	// ex01 added section
	Fixed(int const  intToConvert);
	Fixed(float const  floatToConvert);
	float toFloat( void ) const;
	int toInt( void ) const;
	// ex02 added section
	int & min(const int &fixed1, const int &fixed2);
	int & max(const int &fixed1, const int &fixed2);
	//min max 

	// 

	bool operator<( Fixed const &value1);
	bool operator>( Fixed const &value1 );
	bool operator>=( Fixed const &value1 );
	bool operator<=( Fixed const &value1 );
	bool operator==( Fixed const &value1 );
	bool operator!=( Fixed const &value1 );

	// We can't return a reference from arithmetic operations, since they produce a new value. The only (sensible) way to return a new value is to return it by value.

	// 
	Fixed operator+(Fixed const &value);
	Fixed operator-(Fixed const &value);
	Fixed operator*(Fixed const &rhs);
	Fixed operator/(Fixed const &value);
	// 

	// prefix
	Fixed &operator++();
	Fixed &operator--();
	// postfix 
	Fixed operator++( int );
	Fixed operator--( int );
	// 	
};

ostream  &operator<<(ostream &o, Fixed const &copy);

#endif