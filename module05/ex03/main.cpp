#include "Intern.hpp"

int main()
{
	Intern intern;
	Form *shForm;

	shForm = intern.makeForm("shForm", "target");
	delete shForm;
}