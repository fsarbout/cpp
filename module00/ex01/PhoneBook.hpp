#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <string> // substr
#include <iomanip> // setw
#include <sstream>

#define GREEN "\e[1;32m"
#define RED "\e[1;31m"
#define WHITE "\e[1;37m"
#define YELLOW "\e[1;33m"
#define BLUE "\e[1;34m"
#define PURPLE "\033[1;35m"

string ToString(int val);

int notNumber(string str);

void showColumn(string field);

void showFieldsColumns();

int CheckIndex(string value);

class PhoneBook
{
private:
	int index;
	int oldest;
	Contact contacts[ContactNb];

public:
	/**/
	PhoneBook();
	~PhoneBook();
	/**/
	void addContact();
	void Search();
	Contact getContacts(int i);
	void searchByIndex(Contact contactObj);
	void moreThan8Contacts(Contact contactObj);
};

#endif