#include "Fixed.hpp"

/* EX00*/

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	_fixedPoint = 0;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed &copy)
{
	cout << "Copy constructor called" << endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	cout << "Assignation operator called" << endl;
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
	cout << "Int constructor called" << endl;
	this->_fixedPoint = intToFix * (1 << this->_fractionalBits);
}

Fixed::Fixed(const float floatToFix)
{
	cout << "Float constructor called" << endl;
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