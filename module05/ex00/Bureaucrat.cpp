#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(string name, int grade) : _name(name), _grade(grade) 
{
	
}

Bureaucrat::~Bureaucrat(){}

string	Bureaucrat::GradeTooHighException() { return ("Tooo high"); }

string	Bureaucrat::GradeTooLowException() { return ("Tooo low"); }

string	Bureaucrat::getName() { return _name; }

int		Bureaucrat::getGrade() { return _grade; }

void 	Bureaucrat::incrementGrade() 
{
	if (_grade-- < 1)
	{
		GradeTooLowException(); 
		return ;
	}
	_grade--; 
}

void 	Bureaucrat::decrementGrade() 
{
	if (_grade++ > 150)
	{
		 GradeTooHighException();
		return ;
	}
	 _grade++; 
}