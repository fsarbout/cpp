#include "Form.hpp"

int main()
{
    // too high case
    try
    {
        Form f("F1", 0, 150);
        cout << f;
    }
    catch (stdException &e)
    {
        cout << e.what();
    }

    //  normal case

    try
    {
        Bureaucrat b("b1", 15);
        Form f("F2", 140, 150);
        cout << f;
        b.signForm(f);
        cout << f;
    }
    catch (stdException &e)
    {
        cout << e.what();
    }
}