
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	cout << "1  " << cout << a << endl;
	cout << "2  " << cout << ++a << endl;
	cout << "3  " << cout << a << endl;
	cout << "4  " << cout << a++ << endl;
	cout << "5  " << cout << a << endl;
	cout << "6  " << cout << a++ << endl;
	cout << "7  " << cout << a++ << endl;
	cout << "8  " << cout << "*********************************\n";
	cout << "9  " << cout << a << endl;
	cout << "10 " << cout << --a << endl;
	cout << "11 " << cout << a << endl;
	cout << "12 " << cout << a-- << endl;
	cout << "13 " << cout << b << endl;
	cout << "14 " << cout << Fixed::max(a, b) << endl;
	return 0;
}