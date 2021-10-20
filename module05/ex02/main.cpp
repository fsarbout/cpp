#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    // normal case 
    try
    {
        Bureaucrat b("bob", 150);
        Form *f = new ShrubberyCreationForm("home");
        f->beSigned(b);
        // (void)f;
    }
    catch (stdException &e)
    {
        cout << e.what();
    }

}