#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"



int main()
{
    cout << "*--------------------------ShrubberyCreationForm---------------------------*" << endl;

    try
    {
        Bureaucrat b("bureaucrat", 15);
        ShrubberyCreationForm shForm("home");
        b.signForm(shForm);
        b.executeForm(shForm);
    }
    catch (stdException &e)
    {
        cout << e.what();
    }

    cout << "*-------------------------PresidentialPardonForm---------------------------*" << endl;

    try
    {
        Bureaucrat b("bureaucrat", 3);
        PresidentialPardonForm ppForm("target");
        b.signForm(ppForm);
        b.executeForm(ppForm);
    }
    catch (stdException &e)
    {
        cout << e.what();
    }

    cout << "*---------------------------RobotomyRequestForm----------------------------*" << endl;

    try 
    {
        Bureaucrat b("bureaucrat", 150);
        RobotomyRequestForm rrForm("target");
        b.signForm(rrForm);
        b.executeForm(rrForm);
    }
    catch (stdException &e)
    {
        cout << e.what();
    }

}