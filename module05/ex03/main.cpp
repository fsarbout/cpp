#include "Intern.hpp"

int main()
{
	Bureaucrat b1("b1", 1);
	Bureaucrat b2("b2", 150);

	Intern intern = Intern();

	Form *shForm = intern.makeForm("shForm", "target");
	Form *rrForm = intern.makeForm("rrForm", "target1");
	Form *ppForm = intern.makeForm("ppForm", "target2");

	delete shForm;
	delete rrForm;
	delete ppForm;
}