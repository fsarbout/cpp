#include "Fixed.hpp"

Fixed::Fixed(Fixed const &copy)
{
	// cout << "Copy constructor called" << endl;
	*this = copy;
}

Fixed::Fixed()
{
	// cout << "Default constructor called" << endl;
	_fixedPoints = 0;
}

Fixed::~Fixed()
{
	// cout << "Destructor called" << endl;
}

int Fixed::getRawBits( void ) const
{
	return _fixedPoints;
}

void Fixed::setRawBits( int const raw)
{
	_fixedPoints = raw;
}

Fixed &Fixed::operator=(Fixed const &value)
{
    // cout << "Assignation operator called\n";

	if (this != &value)
    	_fixedPoints = value.getRawBits();
    return *this;
}

/* added section in ex01*/

Fixed::Fixed( int const intToConvert)
{
	// cout << "Int constructor called" << endl;
	 _fixedPoints = intToConvert * (1 << _fractionalBits);
}

Fixed::Fixed(float const  floatToConvert)
{
	// cout << "Float constructor called" << endl;
	_fixedPoints = roundf(floatToConvert * (1 << _fractionalBits));
}


// 
int Fixed::toInt( void ) const
{
	    return (roundf(_fixedPoints / (1 << _fractionalBits)));
}

// 
float Fixed::toFloat( void ) const
{
	    return ((float)_fixedPoints / (float)(1 << _fractionalBits));
}

ostream  &operator<<(ostream &ostr, Fixed const &copy)
{
	ostr << copy.toFloat();
	return ostr;
}

/**/

const int Fixed::_fractionalBits = 8;

/* added section in ex02*/

	// /* comparaison operations*/

	// bool Fixed::operator < ( Fixed const &value1)
	// {
	// 	return 0;
	// }
	// bool Fixed::operator > ( Fixed const &value1 )
	// {
	// 	return 0;
	// }
	// bool Fixed::operator >= ( Fixed const &value1 )
	// {
	// 	return 0;
	// }
	// bool Fixed::operator <= ( Fixed const &value1 )
	// {
	// 	return 0;
	// }
	// bool Fixed::operator == ( Fixed const &value1 )
	// {
	// 	return 0;
	// }
	// bool Fixed::operator != ( Fixed const &value1 )
	// {
	// 	return 0;
	// }

	// /* arithmetic operations*/
	
	// Fixed Fixed::operator + ( Fixed const &value)
	// {
	// 	return (_fixedPoints + value.getRawBits());
	// }
	// Fixed Fixed::operator - ( Fixed const &value)
	// {
	// 	return (_fixedPoints - value.getRawBits());
	// }
	Fixed Fixed::operator * (Fixed const &rhs)
	{
		return (_fixedPoints * rhs.getRawBits());
		// return;
	}
	// Fixed Fixed::operator / ( Fixed const &value)
	// {
	// 	// return (_fixedPoints / value.getRawBits());
	// 	return;
	// }
	
	/* increement/decreement operator s */

	Fixed Fixed::operator ++ ()
	{
		Fixed obj; 
		obj._fixedPoints = ++_fixedPoints;
		return *this;
	}
	// Fixed Fixed::operator -- ()
	// {

	// }
	// // postfix 
	Fixed Fixed::operator ++( int )
	{
			Fixed obj; 
			obj._fixedPoints = _fixedPoints++;
			return *this;
	}
	// Fixed Fixed::operator -- ( int )
	// {

	// }


// 