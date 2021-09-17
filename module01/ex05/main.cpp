#include "Karen.hpp"

int main()
{
	for (int patience = 0; patience < SHUT_UP; patience++)
		cout << "call pointer to member function here\n";
}

//static methods don't have access to this pointer , so I have to call them using class name
//  I can't even define an instance of the class with it unlike non-static which implies instance 
// the address of static member isn't accociated with any object