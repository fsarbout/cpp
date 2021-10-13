#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat obj("fuck you", 0);
	cout << obj.getGrade() << endl;
	obj.incrementGrade();
	cout << obj.getGrade() << endl;
	obj.decrementGrade();
	cout << obj.getGrade() << endl;
}