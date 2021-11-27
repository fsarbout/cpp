#include "span.hpp"

Span::Span() {}

Span::~Span() {}

Span::Span(unsigned int N) : _N(N) {}

Span &Span::operator=(const Span &obj)
{
	this->_N = obj.getN();
	this->_V = obj.getVector();
	return *this;
}

unsigned int Span::getN() const { return this->_N; }

Span::Span(const Span &copy) { *this = copy; }


void Span::addNumber(int number)
{
	if (this->_V.size() > _N)
		throw Error();
	this->_V.push_back(number);
}

unsigned int Span::shortestSpan()
{
	if (this->_V.size() <= 1)
		throw Error();

	unsigned int i = 0;
	unsigned int rtn;
	unsigned int rtn2;
	std::sort(this->_V.begin(), this->_V.end());

	rtn = this->_V.at(i+1) - this->_V.at(i);
	while (i < this->_V.size())
	{
		i++;
		std::cout << "i " << rtn << std::endl;
		rtn2 = this->_V.at(i+1) - this->_V.at(i);
		if (rtn2 < rtn)
			rtn = rtn2;
		std::cout << "mok " <<  rtn << std::endl;
	}
	return rtn;
}


unsigned int Span::longestSpan()
{
	if (this->_V.size() <= 1)
		throw Error();
	return (*std::max_element(_V.begin(), _V.end()) - *std::min_element(_V.begin(), _V.end()));
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