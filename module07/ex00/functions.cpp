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

// parametric macros 
// in template compiler write code for us 

// the template is evaluated at compile time
// it not a code or a function , it is only created when we call it , and based on how we call it
// it's just a blueprint (schema) of the code that we want to create

// if we made an error in the template and don't called it ,  
// it won't show any error in compile time (cuz this code isn't really exist). >> depends on the compiler : clang++ will show it

// they are very useful but if an error occurs you have to spend half your life to figure out which code was compiled and showed this error