#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP


#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
private:
	int _signGrade;
	int _exeGrade;
public:
	ShrubberyCreationForm(const string target);
	~ShrubberyCreationForm();
	int getSignGrade(void);
	int getExeGrade(void);
	void execute(Bureaucrat const & executor) const;
	void	createTree();
};

#endif