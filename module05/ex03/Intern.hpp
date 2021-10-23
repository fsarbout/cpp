#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern
{
public:
	Intern();
	Intern(Intern const &copy);
	Intern & operator = (Intern const &obj);
	~Intern();
	Form * makeform(string form, string target);
};

#endif