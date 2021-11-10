#ifndef CONVERT_HPP
#define CONVERT_HPP

# include <iostream>
# include <string>

#define cout std::cout
#define endl std::endl
#define string std::string


#define GREEN "\e[1;32m"
#define RED "\e[1;31m"
#define WHITE "\e[1;37m"
#define DEFAULT "\e[0;37m"
#define YELLOW "\e[1;33m"
#define BLUE "\e[1;34m"
#define PURPLE "\033[1;35"

class Convert
{
private:
	string _str;
public:
	Convert(string str);
	~Convert();
	Convert(Convert const &copy);
	Convert &operator=(Convert const &rhs);
	string getString();
	void setString(string str);
	// operator int() const;
	class ImpossibleException : public std::exception
	{
		const char *what() const throw();
	};
	class NonPrintableException : public std::exception
	{
		const char *what() const throw();
	};

};


#endif
