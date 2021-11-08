#include "Bureaucrat.hpp"

int main()
{
	cout << "*--------------------------too low---------------------------*" << endl;

	try
	{
		Bureaucrat obj("obj1", 154);
		obj.incrementGrade();
	}
	catch (stdException &e)
	{
		cout << e.what();
	}

	cout << "*-------------------------too hight--------------------------*" << endl;

	try
	{
		Bureaucrat obj("obj2", 0);
		obj.decrementGrade();
	}
	catch (stdException &e)
	{
		cout << e.what();
	}

	cout << "*---------------------------Normal---------------------------*" << endl;

	try
	{
		Bureaucrat obj("obj3", 45);
		obj.incrementGrade();
		cout << obj;
	}
	catch (stdException &e)
	{
		cout << e.what();
	}
}