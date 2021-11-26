#include "span.hpp"

Span::Span() {}

Span::~Span() {}

Span::Span(unsigned int N) : _N(N) , _V(N)
{
	// this->_V(this->_N);
}

Span &Span::operator=(const Span &obj)
{
	this->_N = obj.getN();
	return *this;
}

unsigned int Span::getN() const { return this->_N; }

Span::Span(const Span &copy)
{
	*this = copy;
}


void Span::addNumber(int number)
{
	this->_V.push_back(number);
}


unsigned int Span::shortestSpan()
{
	return 1;
}


unsigned int Span::longestSpan()
{
	// std::cout << std::min_elemenet(_V.begin(), _V.end()) ;
	return 1;

}

std::vector<int> Span::getVector() const 
{
	return this->_V;
}




std::ostream &operator<<(std::ostream &os, const Span &obj)
{
   for (unsigned int i = 0; i < obj.getVector().size(); i++)
        std::cout <<  obj.getVector()[i] << " ";
	return os;
}
