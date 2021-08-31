#include "Contacts.hpp"

/*
** Contacts
*/

Contacts::Contacts(){}

Contacts::~Contacts(){}

/* 
** Contacts get info 
*/

string Contacts::getFirstName()
{
	return firstName;
}

string Contacts::getLastName()
{
	return lastName;
}

string Contacts::getNickName()
{
	return nickName;
}

string Contacts::getPhoneNum()
{
	return phoneNum;
}

string Contacts::getDarkSecret()
{
	return darkSecret;
}

/* 
** Contacts Set info 
*/

void Contacts::setFirstName(string value)
{
	firstName = value;
}

void Contacts::setLastName(string value)
{
	lastName = value;
}

void Contacts::setNickName(string value)
{
	nickName = value;
}

void Contacts::setPhoneNum(string value)
{
	phoneNum = value;
}

void Contacts::setDarkSecret(string value)
{
	darkSecret = value;
}

// all



// void	setInfo()
// {

// }

// void	getInfo()
// {

// }