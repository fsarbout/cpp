#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

#define cout std::cout
#define string std::string
#define endl std::endl
#define stdException std::exception
#define ostream std::ostream

class Bureaucrat; // WTF
class Form
{
private:
	const string _name;
	bool _sign;
	const int _signGrade;
	const int _exeGrade;

public:
	Form();
	Form(const string name, int signIt, int executeIt );
	virtual ~Form();
	Form(const Form &copy);
	Form &operator=(const Form &rhs);
	int getSignGrade(void) const;
	int getExeGrade(void) const;
	string getName (void ) const;
	void	beSigned(Bureaucrat &b);
	bool	isSigned();	
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
	class FormNotSigned : public stdException
	{
	public:
		const char* what() const throw();
	};
	// ex02
	virtual void execute(Bureaucrat const & executor) const;
	virtual void action(Bureaucrat const &executer) const = 0;
};

ostream& operator << (ostream& o, Form &rhs);

#endif