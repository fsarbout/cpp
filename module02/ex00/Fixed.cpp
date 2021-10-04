#include "Fixed.hpp"

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

Fixed & Fixed::operator = (const Fixed &rhs)
{
	cout << "Assignation operator called" << endl;
	this->_fixedPoint = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	cout << "getRawBits member function called" << endl;
	return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

int _fractionalBits = 8;