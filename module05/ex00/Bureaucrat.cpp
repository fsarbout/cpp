#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(string name, int grade) : _name(name), _grade(grade) 
{
	// try {
	// 	if (grade < 1 )
	// 		throw (1);
	// 	if (_grade > 150)
	// 		throw (2);
	// 	_grade = grade;	
	// }
	// catch(...)
	// {
	// 	GradeTooHighException();
	// }
}

Bureaucrat::~Bureaucrat(){}

void	Bureaucrat::GradeTooHighException() { cout << "Tooo high" << endl; }	

void	Bureaucrat::GradeTooLowException() { cout << "Tooo low" << endl; }

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