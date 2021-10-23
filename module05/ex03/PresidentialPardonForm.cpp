#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(string target) : Form(target, 25, 5), _target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src)
{
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	this->Form::operator=(rhs);
	return *this;
}

void PresidentialPardonForm::action(Bureaucrat const &executor) const
{
	Form::execute(executor);
	cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << endl;
}