#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <iostream>

#define cout std::cout
#define endl std::endl
#define string std::string
#define is_same_v(a, b) std::is_same<a, b>::value

template <typename T>

class Functions
{
	public:
		functions();
		~functions();
		T min(T a, T b);
		T max(T a, T b);
		void swap(T a, T b);

};

#endif