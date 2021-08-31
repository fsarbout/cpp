#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>

#define string std::string
#define fieldNb 5
#define contactsNb 8

class PhoneBook
{
	private :
		string contact[fieldNb] = {"firstName" , "lastName" , "nickName" , "phoneNum" ,  "darkSecret"};
	public :
		PhoneBook();
		~PhoneBook();
		//
		void	getInfo();
		//setinfo

		//
		void setInfo();
		//
		
		void search();
		string add();
};

#endif


class Contacts{
	private:
		const string contact[fieldNb] = {"firstName" , "lastName" , "nickName" , "phoneNum" ,  "darkSecret"};

	public:
		Contacts();
		~Contacts();
		//getinfo

		//
		void	getInfo();
		//setinfo

		//
		void setInfo();
};

// static : It belongs to the type, so it will not get memory each time when instance is created.