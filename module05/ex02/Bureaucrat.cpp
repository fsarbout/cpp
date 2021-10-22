#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(string name, int grade) : _name(name), _grade(grade)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	*this = copy;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
	this->_grade = obj.getGrade();
	return *this;
}

string Bureaucrat::getName() const { return _name; }

int Bureaucrat::getGrade() const { return _grade; }

void Bureaucrat::incrementGrade()
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat Toooo Low exception\n");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat Toooo High exception\n");
}

ostream &operator<<(ostream &o, Bureaucrat &obj)
{
	o << obj.getName() << ", Bureaucrat Grade : " << obj.getGrade() << endl;
	return o;
}

void Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		cout << this->_name << " signs " << f.getName() << endl;
	}
	catch (stdException &e)
	{
		cout << this->getName() << " cannot sign " << f.getName() << " because " << e.what();
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.action(*this);
		cout << this->_name << " executes " << form.getName()  << endl;
	}
	catch(stdException& e)
	{
		cout << this->_name << " didn't execute the form cuz " << e.what();
	}
}