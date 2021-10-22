#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat b("bureaucrat", 150);
        ShrubberyCreationForm shForm("home");
        b.signForm(shForm);
        b.executeForm(shForm);
    }
    catch (stdException &e)
    {
        cout << e.what();
    }
}