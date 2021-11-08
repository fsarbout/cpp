#include "RobotomyRequestForm.hpp"
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(string target) : Form(target, 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->Form::operator=(rhs);
	return *this;
}

void	RobotomyRequestForm::action(Bureaucrat const &executer) const
{
	this->execute(executer);

	srand ( time(NULL) );
    if ((rand() % 2) == 0)
        cout << this->_target <<  " has been robotomized successfully 50% of the time." << endl;
    else
        cout << this->_target << " Faillure" << endl;
}