#include "Form.hpp"

Form::Form(string name, int signIt, int executeIt ) : _name(name), _signIt(signIt), _executeIt(executeIt)
{
	if (_signIt < 0 || _executeIt < 0)
		throw Bureaucrat::GradeTooHighException();
	if (_signIt > 150 || _executeIt > 150)
		throw Bureaucrat::GradeTooLowException();
}

Form::~Form()
{
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("toooo hight \n");
}
const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("toooo low \n");
}

ostream& operator << (ostream& o, Bureaucrat &obj)z
{
    o << obj.getName() << ", Bureaucrat Grade : " << obj.getGrade() << endl;
    return o;
}