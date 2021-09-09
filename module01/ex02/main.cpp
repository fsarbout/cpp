#include <iostream>

#define string std::string
#define cout std::cout
#define endl std::endl

int main()
{
	string brain = "HI THIS IS BRAIN";
	string *stringPTR = &brain;
	string &stringREF = brain;

	cout << "string >>        : " << brain << endl;
	cout << "string adress >> : " << &brain << endl;
	cout << "**************\n";
	cout << "*stringPTR >> (string value)  : " << *stringPTR << endl;
	cout << "stringPTR  >> (string adress) : " << stringPTR << endl;
	cout << "**************\n";
	cout << "&stringREF >> (string adress) : " << &stringREF << endl;
	cout << "stringREF  >> (string value)  : " << stringREF << endl;
}