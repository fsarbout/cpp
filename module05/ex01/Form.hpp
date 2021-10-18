#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
	const string _name;
	bool _sign;
	const int _signIt;
	const int _executeIt;

public:
	Form(string name, int signIt, int executeIt );
	~Form();


	class GradeTooHighException : public stdException
	{
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public stdException
	{
	public:
		const char* what() const throw();
	};

};




#endif