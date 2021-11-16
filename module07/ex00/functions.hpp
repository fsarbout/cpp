#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <iostream>

#define cout std::cout
#define endl std::endl
#define string std::string

/*************** MIN *****************/	
template <typename T>
T min(T a, T b);

/*************** MAX *****************/
template <typename T>
T max(T a, T b);

/*************** SWAP ****************/
template <typename T>
void swap(T a, T b);

#endif