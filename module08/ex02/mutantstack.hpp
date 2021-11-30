#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(){};
	~MutantStack(){};
	MutantStack(const MutantStack &copy){*this = &copy;};
	MutantStack &operator=(const MutantStack &obj)
	{
		if (this != &obj)
		{
			this->_stack = obj._stack;
		}
		return *this;
	}
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
};



#endif