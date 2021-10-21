#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    // ShrubberyCreationForm

    try
    {
        Bureaucrat b("bob", 150);
        ShrubberyCreationForm shForm("home");
        shForm.beSigned(b);
        shForm.execute(b);
        cout << shForm;
    }
    catch (stdException &e)
    {
        cout << e.what();
    }

    // RobotomyRequestForm



    // PresidentialPardonForm

}