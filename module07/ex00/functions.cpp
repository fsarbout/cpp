#include "functions.hpp"

/*************** MIN *****************/	

template <typename T>

T min(T a, T b)
{
	return (a < b)? a: b;
}

/*************** MAX *****************/	

template <typename T>

T max(T a, T b)
{
	return (a > b)? a: b;
}

/*************** SWAP ****************/	

template <typename T>

void swap(T a, T b)
{	
	T c = a;
	a = b;
	b = c;
}
