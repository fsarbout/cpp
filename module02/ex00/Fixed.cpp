#include "Fixed.hpp"

Fixed::Fixed(Fixed &copy)
{
	cout << "Copy constructor called" << endl;
	*this = copy;
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
	cout << "setRawBits member function called" << endl;
	_fixedPoints = raw;
}

Fixed &Fixed::operator=(Fixed const &value)
{
    cout << "Assignation operator called\n";
	/*
	** Self assignment check in assignment operator
	**  https://www.geeksforgeeks.org/g-fact-38/
	*/
	if (this != &value)
    	_fixedPoints = value.getRawBits();
    return *this;
}

int _fractionalBits = 8;