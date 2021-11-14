#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <string>


#define cout std::cout
#define endl std::endl
#define string std::string


typedef struct
{
	int i;
	char c;
	string str;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif