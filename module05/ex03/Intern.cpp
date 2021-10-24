#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &copy)
{
	*this = copy;	
}

Intern::~Intern() {}

Intern & Intern::operator = (Intern const &obj)
{
	if (this != &obj)
		*this = obj;
	return *this;
}

Form* Intern::makeForm(string form, string target)
{
	// form "shform";

	Form *fform;
	string forms[3] = {"shForm", "ppForm" , "rrForm"};
	Form *functions[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	for (int i = 0; i < 3; i++)
	{		
		if(form == forms[i])
			fform = functions[i];
		else 
			delete functions[i];
	}
	return fform;
}

const char *Intern::notValidForm::what() const throw()
{
	return ("not a valid form \n");
}