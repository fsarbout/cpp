#include "Fixed.hpp"

Fixed::Fixed(Fixed const &copy)
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
	_fixedPoints = raw;
}



Fixed &Fixed::operator=(Fixed const &value)
{
    cout << "Assignation operator called\n";

	if (this != &value)
    	_fixedPoints = value.getRawBits();
    return *this;
}

/* added section in ex01*/

Fixed::Fixed( int const intToConvert)
{
	cout << "Int constructor called" << endl;
	
	// *this = copy;

	 this->_fixedPoints = intToConvert * (1 << this->_fractionalBits);
}

Fixed::Fixed(float const  floatToConvert)
{
	cout << "Float constructor called" << endl;
	// *this = copy;

	this->_fixedPoints = roundf(floatToConvert * (1 << this->_fractionalBits));
}

int Fixed::toInt( void ) const
{
	cout << "to int called\n";
	    return (roundf(this->_fixedPoints / (1 << this->_fractionalBits)));
}

float Fixed::toFloat( void ) const
{
	cout << "to float called\n";
	    return ((float)this->_fixedPoints / (float)(1 << this->_fractionalBits));

}

ostream  &operator<<(ostream &ostr, Fixed const &copy)
{
	ostr << copy.toFloat();
	return ostr;
}

/**/

const int Fixed::_fractionalBits = 8;