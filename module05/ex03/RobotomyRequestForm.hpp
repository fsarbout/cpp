#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP


#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	string _target;
public:
	RobotomyRequestForm(string target);
	RobotomyRequestForm(RobotomyRequestForm const & copy);
	RobotomyRequestForm & operator = (RobotomyRequestForm const & obj);
	~RobotomyRequestForm();
	void action(Bureaucrat const & executor) const;
};

#endif