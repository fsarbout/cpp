#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	string _target;
public:
	PresidentialPardonForm(string target);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	PresidentialPardonForm & operator = (const PresidentialPardonForm &copy);
	~PresidentialPardonForm();
	void action(Bureaucrat const & executor) const;
};

#endif