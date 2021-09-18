
// #include <iostream>

#include <iostream>
using namespace std;

class myClass
{
public:
	int a;
	void f(int b)
	{
		cout << "The value of b is " << b << endl;
	}
};

int main()
{

	// declare pointer to data member
	int myClass::*ptiptr = &myClass::a;

	// declare a pointer to member function
	void (myClass::*ptfptr)(int) = &myClass::f;

	// create an object of class type myClass
	myClass xobject;

	// initialize data member
	xobject.*ptiptr = 10;

	cout << "The value of a is " << xobject.*ptiptr << endl;

	// call member function
	(xobject.*ptfptr)(20);
}

// class myClass
// {
// private:
// 	int _i;

// public:
// 	myClass(int i = 0) { _i = i; }
// 	void f()
// 	{
// 		std::cout << "myClass::f()" << std::endl;
// 	}
// };

void add(int a, int b)
{
	std::cout << a + b << std::endl;
}

int main()
{
	// myClass *p;
	// p->f();

	void (*ptrfun)(int, int);
	ptrfun = add;

	// std::cout << "the address of main() : " << &main << std::endl;
	ptrfun(10, 90);
	return (0);
}
