#include "PhoneBook.hpp"
#include "Contact.hpp"


Contact PhoneBook::getContacts(int index)
{
	return contacts[index];
}

int PhoneBook::getIndex()
{
	return index;
}

void PhoneBook::addContact(int index, Contact contactObj)
{
	string value;
	int counter = 0;

	cout << "\e[1;33madd a contact:\e[0;37m"
		 << "\n";
	while (counter < fieldNb)
	{
		contactObj.printRequiredField(counter);
		std::getline(cin, value);
		contactObj.setField(counter, value);
		contacts[index] = contactObj;
		counter++;
	}
	this->index++;
	cout << "\e[1;32mcontact successfully added \e[0;37m"
		 << "\n";
}

void PhoneBook::Search()
{
	int i;
	Contact contactObj;
	int currentIndex = 0;
	string value;

	cout << "\e[1;33msearching...\e[0;37m"
		 << "\n";
	showColumnWithColor("\033[1;35mindex\e[0;37m");
	showColumnWithColor("\033[1;35mfirst name\e[0;37m");
	showColumnWithColor("\033[1;35mlast name\e[0;37m");
	showColumnWithColor("\033[1;35mnickname\e[0;37m");
	while (currentIndex <= index)
	{
		i = 0;
		cout << endl;
		showColumn(ToString(currentIndex));
		while (i < fieldNb - 2)
		{
			showColumn(contactObj.getField(i));
			i++;
		}
		contactObj = getContacts(currentIndex);
		currentIndex++;
	}
	cout << endl;

	/*this section needs to be fixed*/
	// cout << "index in search" << index;
	// cout << "\e[1;34mprint the index : \e[0;37m";
	// std::getline(cin, value);
	// i = CheckIndex(value);
	// if (i == -1)
	// {
	// 	cout << "\e[1;31mnot a valid index\e[0;37m \n";
	// 	return;
	// }
	// cout << "\e[1;33msearching for contact \e[0;37m" << i << "..." << endl;
	// //search by index
	// i = i - 1;
	// cout << "\e[1;34mindex: \e[0;37m" << i << endl;
	// for (int j = 0; j < 3; j++)
	// {
	// 	contactObj.printRequiredField(j);
	// 	cout << contactObj.getField(j) << endl;
	// }
}
