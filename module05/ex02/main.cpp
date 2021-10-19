#include "Form.hpp"

int main()
{
    try{
        Form f("F1", 1, 150);
        cout << f;
        Form f2("F2", 1, 0);
        cout << f2;
    } catch (stdException &e){
        cout << e.what();
    }
}