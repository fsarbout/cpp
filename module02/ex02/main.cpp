
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	cout << "1  \t" << a << endl;
	cout << "2  \t" << ++a << endl;
	cout << "3  \t" << a << endl;
	cout << "4  \t" << a++ << endl;
	cout << "5  \t" << a << endl;
	cout << "6  \t" << a++ << endl;
	cout << "7  \t" << a++ << endl;
	cout << "8  \t*********************************" << endl;
	cout << "9  \t" << a << endl;
	cout << "10 \t" << --a << endl;
	cout << "11 \t" << a << endl;
	cout << "12 \t" << a-- << endl;
	cout << "13 \t" << b << endl;
	cout << "14 \t" << Fixed::max(a, b) << endl;
	cout << "15 \t" << Fixed::min(a, b) << endl;
	Fixed d(Fixed(25.4f));
	Fixed c = a / d;
	cout << "16 \t" << c << endl;
	return 0;
}