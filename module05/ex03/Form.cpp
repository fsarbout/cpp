#include "Form.hpp"

Form::Form(const string name, int signGrade, int exeGrade) :_name(name),_sign(false), _signGrade(signGrade),  _exeGrade(exeGrade)
{
	if (signGrade < 1 || exeGrade < 1)
		throw Form::GradeTooHighException();
	if (signGrade > 150 || exeGrade > 150)
		throw Form::GradeTooLowException();
}


Form::Form(const Form &copy) : _name(copy._name), _sign(false), _signGrade(copy._signGrade),  _exeGrade(copy._exeGrade)
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
	if (b.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	this->_sign = true;
}

bool	Form::isSigned()
{
	if (this->_sign == true)
		return true;
	return false;
}

ostream& operator << (ostream& o, Form &rhs)
{
    o << "form name: " << rhs.getName() << endl;
    o << "form sign grade: " << rhs.getSignGrade() << endl;
    o << "form execute grade: " << rhs.getExeGrade() << endl;
	(rhs.isSigned()) ? (o << "Signed" << endl) : (o << "not signed" << endl);
    return o;
}


Form::Form() : _name(""), _sign(false), _signGrade(0),  _exeGrade(0)
{
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->_exeGrade)
		throw Form::GradeTooLowException();
	if (!this->_sign)
		throw Form::FormNotSigned();
	
}

const char *Form::FormNotSigned::what() const throw()
{
	return ("Form not Signed\n");
}