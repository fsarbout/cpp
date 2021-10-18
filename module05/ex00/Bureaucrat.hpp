#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>

#define cout std::cout
#define string std::string
#define endl std::endl
#define stdException std::exception
#define ostream std::ostream


class Bureaucrat
{
private:
	const string _name;
	int _grade;

public:
	Bureaucrat(string name, int grade);
	~Bureaucrat();
	string getName() const;
	Bureaucrat(Bureaucrat const &copy);
	Bureaucrat & operator = (Bureaucrat const &obj);
	int getGrade(void) const;
	void incrementGrade();
	void decrementGrade();
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

ostream& operator << (ostream& o, Bureaucrat &obj);

#endif