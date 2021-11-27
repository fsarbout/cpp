#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

#define DEFAULT "\033[0m"
#define GREEN "\e[1;32m"
#define RED "\e[1;31m"
#define WHITE "\e[1;37m"
#define YELLOW "\e[1;33m"
#define BLUE "\e[1;34m"
#define PURPLE "\033[1;35m"


class Span
{
private:
	unsigned int _N;
	std::vector<int> _V;
public:
	Span();
	Span(unsigned int N);
	~Span();
	void addNumber(int number);
	unsigned int shortestSpan();
	unsigned int longestSpan();
	Span &operator=(const Span &obj);
	Span(const Span &copy);
	unsigned int getN() const;
	std::vector<int> getVector() const;
	class Error : public std::exception
	{
		const char* what() const throw()
		{
			return ("\033[0;31mError \033[0m");
		}
	};
};

std::ostream &operator<<(std::ostream &os, const Span &obj);

#endif