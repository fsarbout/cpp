#include <iostream>

#define string std::string
#define cout std::cout
#define endl std::endl

#define DEFAULT "\e[0;37m"
#define BLUE "\e[1;34m"


int main()
{
	string brain = "HI THIS IS BRAIN";
	string *stringPTR = &brain;
	string &stringREF = brain;

	cout << "string >>        : " << brain << endl;
	cout << "string adress >> : " << &brain << endl;

	cout << BLUE <<"**************\n" << DEFAULT;

	cout << "*stringPTR >> (string value)  : " << *stringPTR << endl;
	cout << "stringPTR  >> (string adress) : " << stringPTR << endl;
	
	cout << BLUE <<"**************\n" << DEFAULT;

	cout << "stringREF  >> (string value)  : " << stringREF << endl;
	cout << "&stringREF >> (string adress) : " << &stringREF << endl;
}