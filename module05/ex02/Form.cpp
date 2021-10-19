#include "Form.hpp"

Form::Form(const string name, int signGrade, int exeGrade) : _name(name), _signGrade(signGrade), _exeGrade(exeGrade)
{
	if (_signGrade < 0 || _exeGrade < 0)
		throw Form::GradeTooHighException();
	if (_signGrade > 150 || _exeGrade > 150)
		throw Form::GradeTooLowException();
}


Form::Form(const Form &copy) : _name(copy._name), _signGrade(copy._signGrade), _exeGrade(copy._exeGrade)
{
	*this = copy;
}

Form &Form::operator=(Form const &rhs)
{
	this->_sign = rhs._sign;
	return *this;
}

Form::~Form()
{
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form toooo hight \n");
}
const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form toooo low \n");
}

string	Form::getName() const { return _name; }

int Form::getExeGrade() const { return _exeGrade; }

int Form::getSignGrade() const { return _signGrade; }

void	 Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > _signGrade)
		throw Form::GradeTooLowException();
	_sign = true;
}

bool	Form::isSigned()
{
	if (this->_sign)
		return true;
	return false;
}

ostream& operator << (ostream& o, Form &rhs)
{
    o << "form name: " << rhs.getName() << endl;
    o << "form Sign grade: " << rhs.getSignGrade() << endl;
    o << "form Execute grade: " << rhs.getExeGrade() << endl;
    if (rhs.isSigned())
        o << "Signed" << endl;
    else
        o << "not signed" << endl;
    return o;
}