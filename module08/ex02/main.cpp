#include "mutantstack.hpp"

int main()
{

	std::cout << "-------------------- text 1--------------------" << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	// ++it;
	// --it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "-------------------- text 2--------------------" << std::endl;

	MutantStack<float> mstack2;
	mstack2.push(1.54);
	mstack2.push(2.4);
	mstack2.push(34.4);
	std::cout << mstack2.top() << std::endl;
	mstack2.pop();
	std::cout << mstack2.size() << std::endl;
	mstack2.push(4.534);
	mstack2.push(5.54);
	mstack2.push(6.64);
	mstack2.push(0);
	MutantStack<float>::iterator it2 = mstack2.begin();
	MutantStack<float>::iterator ite2 = mstack2.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::stack<float> s2(mstack2);

	return 0;
}