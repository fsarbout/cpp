#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	Intern(Intern const &copy);
	Intern & operator = (Intern const &obj);
	~Intern();
	Form* makeForm( string form, string target);
	class notValidForm : public stdException
	{
	public:
		const char* what() const throw();
	};
};

#endif