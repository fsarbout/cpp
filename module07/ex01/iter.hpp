#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void printElemet(T const &elem)
{
	std::cout << elem << std::endl;
}


template <typename T, typename T2>
void 	iter(T tab[],T2 len, void (*f)(T const &))
{
	std::cout << "Array lenght: " << len << std::endl;
	for (int i = 0; i < len; i++)
		f(tab[i]);
}



#endif

