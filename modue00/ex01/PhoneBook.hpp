#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <string>
#include <iomanip>
#include <sstream>

# define GREEN "\e[1;32m"
# define RED "\e[1;31m"
# define WHITE "\e[1;37m"
# define YELLOW "\e[1;33m"
# define BLUE "\e[1;34m"
# define PURPLE "\033[1;35m"

string ToString(int val);

void showColumn(string field);

void showColumnWithColor(string field);

int CheckIndex(string value);


class PhoneBook
{
private:
	int index;
	Contact contacts[ContactNb];

public:
	PhoneBook(){index=0;};
	~PhoneBook(){};
	void addContact(int i, Contact cnt);
	void Search();
	Contact getContacts(int i);
	int getIndex();
};

#endif