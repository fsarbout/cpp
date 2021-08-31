#ifndef Contact_HPP
#define Contact_HPP

#include "PhoneBook.hpp"

#include <iostream>
#include <iomanip>
#include <sstream>

#define string std::string
#define endl std::endl
#define cout std::cout
#define cin std::cin
#define ContactNb 2
#define fieldNb 5

class Contact
{
private:
	/*holds one Contact*/
	string field[fieldNb];
	/*holds required fields*/
	static string fields[fieldNb];

public:
	/**/
	Contact(){};
	~Contact(){};
	/**/
	void setField(int i, string value);
	void printRequiredField(int i);
	string getField(int i);
};

#endif