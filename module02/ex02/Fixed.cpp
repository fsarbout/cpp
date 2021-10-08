#include "Fixed.hpp"

/* EX00*/

Fixed::Fixed()
{
	_fixedPoint = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

int _fractionalBits = 8;

/* EX01*/

Fixed::Fixed(const int intToFix)
{
	this->_fixedPoint = intToFix * (1 << this->_fractionalBits);
}

Fixed::Fixed(const float floatToFix)
{
	this->_fixedPoint = (roundf(floatToFix * (1 << this->_fractionalBits)));
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fixedPoint / (float)(1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
	return (roundf(this->_fixedPoint / (1 << this->_fractionalBits)));
}

ostream & operator << (ostream &o,Fixed const &value)
{
	o << value.toFloat();
	return o;
}

/* EX02*/


bool Fixed::operator < (Fixed const &rhs)
{
	return this->_fixedPoint < rhs.getRawBits();
}

bool Fixed::operator > (Fixed const &rhs)
{
	return this->_fixedPoint > rhs.getRawBits();
}

bool Fixed::operator <= (Fixed const &rhs)
{
	return this->_fixedPoint <= rhs.getRawBits();
}

bool Fixed::operator >= (Fixed const &rhs)
{
	return this->_fixedPoint >= rhs.getRawBits();
}

bool Fixed::operator == (Fixed const &rhs)
{
	return this->_fixedPoint == rhs.getRawBits();
}

bool Fixed::operator != (Fixed const &rhs)
{
	return this->_fixedPoint != rhs.getRawBits();
}

// 

Fixed Fixed::operator + (Fixed const &rhs)
{
	return (Fixed((this->toFloat() + rhs.toFloat())));
}

Fixed Fixed::operator - (Fixed const &rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator * (Fixed const &rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator / (Fixed const &rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

// 

Fixed  Fixed::operator  ++ ( int ) 
{
	Fixed obj = *this;
	++*this;
	return obj;
}

Fixed  & Fixed::operator  ++ ( void ) 
{
	this->_fixedPoint++;
	return *this;
}

Fixed  Fixed::operator  -- ( int ) 
{
	Fixed obj = *this;
	++*this;
	return obj;
}

Fixed  & Fixed::operator  -- ( void ) 
{
	this->_fixedPoint--;
	return *this;
}

// pre-increement should return by reference
// postfix should return copy (by value) of the original state of x / or void return type 

Fixed  Fixed::min (Fixed const &obj1, Fixed const &obj2)
{
	return ( obj1._fixedPoint < obj2._fixedPoint) ? obj1 : obj2;
}

Fixed  Fixed::max (Fixed const &obj1, Fixed const &obj2)
{
	return ( obj1._fixedPoint > obj2._fixedPoint) ? obj1 : obj2;
}

Fixed  Fixed::min (Fixed &obj1, Fixed  &obj2)
{
	return ( obj1._fixedPoint < obj2._fixedPoint) ? obj1 : obj2;
}

Fixed  Fixed::max (Fixed  &obj1, Fixed  &obj2)
{
	return ( obj1._fixedPoint > obj2._fixedPoint) ? obj1 : obj2;
}	
