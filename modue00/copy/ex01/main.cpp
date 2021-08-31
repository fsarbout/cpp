#include "PhoneBook.hpp"
#include "Contacts.hpp"

int main()
{
	string command;

	while (1)
	{
		std::getline(std::cin, command);
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			std::cout << "the command was ADD" << std::endl;
		else if (command == "SEARCH")
			std::cout << "the command was SEARCH" << std::endl;
	}
	return (0);
}

