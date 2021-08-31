#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact PhoneBook::getContacts(int i)
{
	return contacts[i];
}

void PhoneBook::addContact()
{
	string value;
	int counter= 0, empty = 0;
	Contact contactObj;
	
	if (index == ContactNb)
		index = 0;

	cout << "\e[1;33madd a contact:\e[0;37m"
		 << "\n";

	while (counter < fieldNb)
	{
		contactObj.printRequiredField(counter);
		std::getline(cin, value);
		if (value.empty())
			empty++;
		contactObj.setField(counter, value);
		counter++;
	}
	if (empty == 5)
	{
		cout << "\e[1;31mtrying to add empty contact\e[0;37m \n";
		return;
	}
	contacts[this->index] = contactObj;
	this->index++;
	cout << "\e[1;32mcontact successfully added \e[0;37m"
		 << "\n";
}

void PhoneBook::Search()
{
	int i;
	Contact contactObj;
	int currentIndex = 0;

	cout << "\e[1;33msearching...\e[0;37m"
		 << "\n";

	showFieldsColumns();
	while (currentIndex < this->index)
	{
		i = 0;
		cout << endl;

		contactObj = getContacts(currentIndex);
		while (i < (fieldNb - 2))
		{
			if (!i)
				showColumn(ToString(currentIndex));
			showColumn(contactObj.getField(i));
			i++;
		}
		currentIndex++;
	}
	cout << endl;
	searchByIndex(contactObj);
}

void PhoneBook::searchByIndex(Contact contactObj)
{
	string value;
	int i;

	cout << "\e[1;34mEnter a valid index : \e[0;37m";

	std::getline(cin, value);
	i = CheckIndex(value);
	if (i == -1 || i >= index)
	{
		cout << "\e[1;31mnot a valid index\e[0;37m \n";
		return;
	}
	cout << "\e[1;33msearching for contact \e[0;37m" << i << "..." << endl;
	contactObj = getContacts(i);
	cout << "\e[1;34mindex\e[0;37m: " << ToString(i) << endl;
	i = 0;
	while (i < (fieldNb - 2))
	{
		contactObj.printRequiredField(i);
		cout << contactObj.getField(i) << endl;
		i++;
	}
}