#include "PhoneBook.hpp"
#include "Contact.hpp"

void showColumn(string field)
{
	if (field.length() > 10)
		cout << field.substr(0, 9) << ".";
	else
		cout << std::setw(10) << field;
	cout << "|";
}

void showColumnWithColor(string field)
{
	if (field.length() > 24)
		cout << field.substr(0, 23) << ".";
	else
		cout << std::setw(24) << field;
	cout << "|";
}

int CheckIndex(string value)
{
	int index = 0;

	for (int i = 0; i < (int)value.length(); i++)
		if (!isdigit(value[i]))
			return (-1);
	std::stringstream(value) >> index;
	if (index >= 8 || index < 0)
		return (-1);
	return index;
}

string ToString(int val)
{
	std::stringstream stream;
	stream << val;
	return stream.str();
}