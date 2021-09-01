#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	oldest = 0;
}

PhoneBook::~PhoneBook() {}

Contact PhoneBook::getContacts(int i)
{
	return contacts[i];
}

void PhoneBook::addContact()
{
	string value;
	int counter = 0, empty = 0;
	Contact contactObj;

	cout << "\e[1;33madd a contact:\e[0;37m"
		 << "\n";
	while (counter < fieldNb)
	{
		contactObj.printRequiredField(counter);
		std::getline(cin, value);
		if (value.empty())
			empty++;
		if (counter == 3 && notNumber(value))
		{
			cout << "\e[1;31mNOT A VALID NUMBER\e[0;37m \n";
			return;
		}
		contactObj.setField(counter, value);
		counter++;
	}
	if (empty == 5)
	{
		cout << "\e[1;31mTRYING TO ADD EMPTY CONTACT!\e[0;37m \n";
		return;
	}
	if (index == ContactNb)
	{
		moreThan8Contacts(contactObj);
		return;
	}
	else
		contacts[index] = contactObj;
	index++;
	cout << "\e[1;32mContact successfully added \e[0;37m"
		 << "\n";
}

void PhoneBook::Search()
{
	int i;
	Contact contactObj;
	int currentIndex = 0;

	cout << "\e[1;33mSearching...\e[0;37m"
		 << "\n";
	showFieldsColumns();
	while (currentIndex < index)
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
		cout << "\e[1;31mNOT A VALID INDEX\e[0;37m \n";
		return;
	}
	cout << "\e[1;33mSearching for contact \e[0;37m" << i << "..." << endl;
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

void PhoneBook::moreThan8Contacts(Contact contactObj)
{
	if (oldest == ContactNb)
		oldest = 0;
	index = oldest++;
	contacts[index] = contactObj;
	index = ContactNb;
	cout << "\e[1;32mContact successfully added \e[0;37m"
		 << "\n";
}