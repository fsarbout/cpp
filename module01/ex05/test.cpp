#include <iostream>

class myClass
{
private:
	int _i;

public:
	myClass(int i = 0) { _i = i; }
	void f()
	{
		std::cout << "myClass::f()" << std::endl;
	}
};

int main()
{
	myClass *p;
	p->f();
}
