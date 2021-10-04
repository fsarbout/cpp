#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

string Contact::fields[fieldNb] =
	{
		"\e[1;34mFirst name: \e[1;37m",
		"\e[1;34mLast name: \e[1;37m",
		"\e[1;34mNickname: \e[1;37m",
		"\e[1;34mPhone number: \e[1;37m",
		"\e[1;34mDarkest secret: \e[1;37m",
};

string Contact::getField(int i)
{
	return field[i];
}

void Contact::setField(int i, string value)
{
	field[i] = value;
}

void Contact::printRequiredField(int i)
{
	cout << fields[i];
}