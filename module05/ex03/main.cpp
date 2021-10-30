#include "Intern.hpp"

int main()
{
	Bureaucrat b1("b1", 120);
	Bureaucrat b2("b2", 150);

	Intern intern = Intern();

	Form *shForm = intern.makeForm("shForm", "target");
	Form *rrForm = intern.makeForm("rrForm", "target1");
	Form *ppForm = intern.makeForm("ppForm", "target2");

	cout << "*--------------------------shForm---------------------------*" << endl;

	try
	{
		b1.signForm(*shForm);
		b1.executeForm(*shForm);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << endl;
	}

	cout << "*--------------------------rrForm---------------------------*" << endl;

	try
	{
		b1.signForm(*rrForm);
		b1.executeForm(*rrForm);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << endl;
	}

	cout << "*--------------------------ppForm---------------------------*" << endl;

	try
	{
		b1.signForm(*ppForm);
		b1.executeForm(*ppForm);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << endl;
	}

	delete shForm;
	delete rrForm;
	delete ppForm;
}