#include "Intern.hpp"

int main()
{
	Bureaucrat b1("b1", 4);
	Bureaucrat b2("b2", 15);

	Intern intern = Intern();

	try 
	{
		Form *shForm = intern.makeForm("shForm", "target");
		Form *rrForm = intern.makeForm("rrForm", "target1");
		Form *ppForm = intern.makeForm("ppForm", "target2");

		cout << "*--------------------------shForm---------------------------*" << endl;
		b1.signForm(*shForm);
		b1.executeForm(*shForm);
		
		cout << "*--------------------------rrForm---------------------------*" << endl;
		b1.signForm(*rrForm);
		b1.executeForm(*rrForm);

		cout << "*--------------------------ppForm---------------------------*" << endl;
		b1.signForm(*ppForm);
		b1.executeForm(*ppForm);

		delete shForm;
		delete rrForm;
		delete ppForm;

	}
	catch(const std::exception &e)
	{
			std::cerr << e.what() << endl;
	}

}