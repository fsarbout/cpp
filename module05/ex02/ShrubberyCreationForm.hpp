#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP


#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

#define ofstream std::ofstream

class ShrubberyCreationForm : public Form
{
private:
	const string _target;
public:
	ShrubberyCreationForm(const string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator = (const ShrubberyCreationForm& rhs);
	void 	action(Bureaucrat const &executer) const;
};

#endif