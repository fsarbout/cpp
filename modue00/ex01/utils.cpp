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

void	showFieldsColumns()
{
	cout << std::setw(24) << "\033[1;35mindex\e[0;37m"  << "|";
	cout << std::setw(24) << "\033[1;35mfirst name\e[0;37m" << "|";
	cout << std::setw(24) << "\033[1;35mlast name\e[0;37m"  << "|";
	cout << std::setw(24) << "\033[1;35mnickname\e[0;37m"  << "|";
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