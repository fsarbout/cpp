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
	string forms[3] = {"shForm", "rrForm" , "ppForm"};
	Form *functions[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
   	int j = -1;
    for (int i = 0; i < 3 ; i++)
    {
        if (form == forms[i])
			j = i;
        else 
            delete functions[i];
    }
    if (j == -1)
        throw Intern::notValidForm();
    return functions[j];
}

const char *Intern::notValidForm::what() const throw()
{
	return ("not a valid form \n");
}

