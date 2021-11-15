#include "convert.hpp"

Convert::Convert(string str)
{
	if (!std::isdigit(str[0]) && str.length() == 1)
		str = std::to_string(str[0]);
	this->_str = str;
}

Convert::~Convert(){}

Convert::Convert(Convert const &src) { *this = src; }

Convert & Convert::operator=(Convert const &src)
{
	_str = src._str;
	return (*this);
}

const char* Convert::NonPrintableException::what() const throw()
{
	return ("char: Non printable character\n");
}	

const char* Convert::ImpossibleException::what() const throw()
{
	return ("Impossible conversion\n");
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
		cout << "int: Impossible" << endl; 
	}
	return 0;
}

Convert::operator double() const
{
	try
	{
		double d = stod(this->_str);
		if (d == (int)d)
			cout << "double: " << d << ".0" << endl;
		else
			cout << "double: " << d << endl;
		return d;
	}
	catch(const std::exception& e)
	{
		cout<< "double: impossible" << endl;
	}
	return 0;
}

Convert::operator char() const
{
	try{
		char c = stoi(this->_str);
		if (!isprint(c))
			throw Convert::NonPrintableException();
		cout << "char: " << c << endl;
		return static_cast<char>(c);
	}
	catch (const Convert::NonPrintableException& e)
	{
		cout << e.what();
	}
	catch (const std::exception &e)
	{
		cout << "char: Impossible" << endl;
	}
	return 0;
}

Convert::operator float() const
{
	try
	{
		float f = stof(this->_str);
		if (f != (int)f)
			cout << "float: " << f << "f" << endl;
		else
			cout << "float: " << f << ".0f" << endl;	
		return f;
	}
	catch(const std::exception& e)
	{
		cout<< "float: Impossible" << endl;
	}
	return 0;
}
