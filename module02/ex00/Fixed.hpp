#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

#define cout std::cout
#define endl std::endl

class Fixed
{
private:
	int		fixedPoints;
	static 	const int fractionalBits;
public:
	Fixed(/* args */);
	Fixed();
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	Fixed operator=()
};




#endif