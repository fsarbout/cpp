#include "convert.hpp"

Convert::Convert(string str) : _str(str)
{
	cout << str << endl << "hello" << endl;
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
	return ("Non printable character");
}	

const char* Convert::ImpossibleException::what() const throw()
{
	return ("Impossible conversion");
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
		int i = std::stoi(this->_str);
		cout << "int: " << i << endl;
		return i;
	}
	catch(const std::exception& e)
	{
		cout<< "int: impossible" << endl;
	}
	return 0;
}
