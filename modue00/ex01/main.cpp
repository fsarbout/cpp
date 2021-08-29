#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	int index;
	string command;
	PhoneBook phonebookObj;
	Contact contactObj;

	while (1)
	{
		index = phonebookObj.getIndex();
		cout << "\033[1;35mwaiting for command...\e[0;37m"
			 << "\n";
		std::getline(cin, command);
		if (command == "exit")
			break;
		else if (command == "add")
			phonebookObj.addContact(index, contactObj);
		else if (command == "search")
			phonebookObj.Search();
	}
}