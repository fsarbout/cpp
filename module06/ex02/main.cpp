#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <exception>

#define cout std::cout
#define endl std::endl

Base *generate(void)
{
	int n = rand() % 3;
	switch (n)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return NULL;
}

void identify(Base* p)
{

	if (dynamic_cast<A*>(p))
		cout << "A" << endl;

	else if (dynamic_cast<B*>(p))
		cout << "B" << endl;

	else if (dynamic_cast<C*>(p))
		cout << "C" << endl;
}

void identify(Base& p)
{
	try 
	{
		if (dynamic_cast<A*>(&p))
		cout << "A" << endl;

		else if (dynamic_cast<B*>(&p))
			cout << "B" << endl;

		else if (dynamic_cast<C*>(&p))
			cout << "C" << endl;
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
}

int main()
{
	srand(time(NULL));
	Base *pBase = generate();
	identify(pBase);
	identify(*pBase);

	delete pBase;
	return 0;
}