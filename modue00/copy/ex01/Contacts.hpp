#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>
#include <string>

#define string std::string
#define fieldNb 5
#define contactsNb 8


class Contacts{
	private:
		const string contact[fieldNb] = {"firstName" , "lastName" , "nickName" , "phoneNum" ,  "darkSecret"};

	public:
		Contacts();
		~Contacts();
		//getinfo
		string getFirstName();
		string getLastName();
		string getNickName();
		string getPhoneNum();
		string getDarkSecret();
		//
		void	getInfo();
		//getinfo
		void setFirstName(string firstName);
		void setLastName(string lastName);
		void setNickName(string nickName);
		void setPhoneNum(string phoneNum);
		void setDarkSecret(string darkSecret);
		//
		void setInfo();
};

#endif

// static : It belongs to the type, so it will not get memory each time when instance is created.