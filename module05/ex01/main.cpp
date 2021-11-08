#include "Form.hpp"

int main()
{
   cout << "*--------------------------too high---------------------------*" << endl;
    try
    {
        Form f("F1", 0, 150);
        // cout << f;
    }
    catch (stdException &e)
    {
        cout << e.what();
    }

    cout << "*--------------------------too loow---------------------------*" << endl;
    try
    {
        Form f("F1", 12, 151);
        // cout << f;
    }
    catch (stdException &e)
    {
        cout << e.what();
    }

    cout << "*--------------------------normal----------------------------*" << endl;
    try
    {
        Bureaucrat b("b1", 15);
        Form f("F2", 140, 150);
        cout << f;
        b.signForm(f);
        cout << "**** << operator  ****" << endl;
        cout << f;
    }
    catch (stdException &e)
    {
        cout << e.what();
    }
}