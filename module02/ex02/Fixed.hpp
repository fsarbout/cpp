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
	int _fixedPoint;
	static const int _fractionalBits = 8;
public:
	/* EX00*/
	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();
	Fixed & operator = (const Fixed &rhs);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	/* EX01*/
	Fixed(const int intToFix);
	Fixed(const float floatToFix);
	float toFloat( void ) const;
	int toInt( void ) const;
	/* EX02*/
	bool operator <  (Fixed const &rhs);
	bool operator >  (Fixed const &rhs);
	bool operator <= (Fixed const &rhs);
	bool operator >= (Fixed const &rhs);
	bool operator == (Fixed const &rhs);
	bool operator != (Fixed const &rhs);

	Fixed operator + (Fixed const &rhs);
	Fixed operator - (Fixed const &rhs);
	Fixed operator * (Fixed const &rhs);
	Fixed operator / (Fixed const &rhs);

	Fixed  operator  ++ ( int ); 
	Fixed  & operator  ++ ( void ); //pre-increment ++()
	Fixed  operator  -- ( int ); 
	Fixed  & operator  -- ( void ); 

	static Fixed min (Fixed const &obj1, Fixed const &obj2);
	static Fixed max (Fixed const &obj1, Fixed const &obj2);
};

ostream & operator << (ostream &o, Fixed const &value);

#endif