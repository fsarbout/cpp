#include "Bureaucrat.hpp"

int main()
{
	/*
	** too high case 
	*/

	try
	{
		Bureaucrat obj("obj1", 0);
		obj.incrementGrade();
	}
	catch (stdException &e)
	{
		cout << e.what();
	}

	/*
	** too low case 
	*/

	// try
	// {
	// 	Bureaucrat obj("obj2", 151);
	// 	obj.decrementGrade();
	// }
	// catch (stdException &e)
	// {
	// 	cout << e.what();
	// }

	/*
	** too high case 
	*/

	// try
	// {
	// 	Bureaucrat obj("obj3", 1);
	// 	obj.incrementGrade();
	// }
	// catch (stdException &e)
	// {
	// 	cout << e.what();
	// }

	/*
	** copy , = and << opearator
	*/

	// try
	// {
	// 	Bureaucrat obj("obj4", 149);
	// 	Bureaucrat obj2("obj5", 32);
	// 	cout << obj;
	// 	cout << obj2;
	// 	obj2 = obj;
	// 	cout << obj2;
	// 	obj.decrementGrade();
	// }
	// catch (stdException &e)
	// {
	// 	cout << e.what();
	// }
}