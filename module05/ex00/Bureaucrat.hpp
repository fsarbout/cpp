#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

#define cout std::cout
#define string std::string
#define endl std::endl
#define stdException std::exception

class Bureaucrat
{
private:
	const string _name;
	int _grade;

public:
	Bureaucrat(string name, int grade);
	~Bureaucrat();
	string getName(void);
	int getGrade(void);
	void incrementGrade();
	void decrementGrade();
	class GradeTooHighException : public stdException
	{
	public:
		const char* what() throw();
	};
	class GradeTooLowException : public stdException
	{
	public:
		const char* what() throw();
	};
};

#endif