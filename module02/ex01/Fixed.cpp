#include "Fixed.hpp"


Fixed::Fixed(Fixed &copy)
{
	*this = copy;
	cout << "Copy constructor called" << endl;
}

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	_fixedPoints = 0;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

int Fixed::getRawBits( void ) const
{
	cout << "getRawBits member function called" << endl;
	return _fixedPoints;
}

void Fixed::setRawBits( int const raw)
{
	_fixedPoints = raw;
}

Fixed &Fixed::operator=(Fixed const &value)
{
    cout << "Assignation operator called\n";

    _fixedPoints = value.getRawBits();
    return *this;
}

int _fractionalBits = 8;