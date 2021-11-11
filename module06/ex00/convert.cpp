#include "convert.hpp"

Convert::Convert(string str) : _str(str)
{
}

Convert::~Convert()
{
}

Convert::Convert(Convert const &src)
{
	*this = src;
}

Convert & Convert::operator=(Convert const &src)
{
	_str = src._str;
	return (*this);
}

const char* Convert::NonPrintableException::what() const throw()
{
	return ("Non printable character\n");
}	

const char* Convert::ImpossibleException::what() const throw()
{
	return ("Impossible conversion\n");
}	

string Convert::getString()
{
	return this->_str;
}

void Convert::setString(string str)
{
	this->_str = str;
}


Convert::operator int() const
{
	try
	{
		int i = stoi(this->_str);
		cout << "int: " << i << endl;
		return i;
	}
	catch(const std::exception& e)
	{
		cout << e.what();
	}
	return 0;
}

// Convert::operator double() const
// {
// 	try
// 	{
// 		double d = stod(this->_str);
// 		cout << "double: " << d << endl;
// 		return d;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		cout<< "double: impossible" << endl;
// 	}
// 	return 0;
// }

Convert::operator char() const
{
	try
	{
		char c = stoi(this->_str);
		if (!isprint(c))
			throw Convert::NonPrintableException();
		cout << "char: " << c << endl;
		return c;
	}
	catch (const std::exception& e)
	{
		cout << e.what();
	}
	return 0;
}