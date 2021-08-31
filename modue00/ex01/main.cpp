#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	string command;
	PhoneBook phonebookObj;

	while (1)
	{
		cout << "\033[1;35mwaiting for command...\e[0;37m\n";

		std::getline(cin, command);

		if (command == "exit")
			break;
		else if (command == "add")
			phonebookObj.addContact();
		else if (command == "search")
			phonebookObj.Search();
	}
}