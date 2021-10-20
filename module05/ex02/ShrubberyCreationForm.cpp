#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(string target)
{
	this->_signGrade = 145;
	this->_exeGrade = 137;
	cout << target << endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

int ShrubberyCreationForm::getSignGrade(void) { return (this->_signGrade); }

int ShrubberyCreationForm::getExeGrade(void) { return (this->_exeGrade); }

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	(void)executor;

	cout << "Shrubbery Creation Form" << endl;
}

// void	ShrubberyCreationForm::createTree( void )
// {

// }