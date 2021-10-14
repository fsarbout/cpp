#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>



#define cout std::cout
#define string std::string
#define endl std::endl
#define exeption std::exeption

class Bureaucrat
{
private:
	const string _name;
	int _grade;
public:
	Bureaucrat(string name, int grade);
	~Bureaucrat();
	void GradeTooHighException( void );
	void GradeTooLowException( void );
	string getName( void );
	int getGrade( void );
	void incrementGrade();
	void decrementGrade();
};


#endif