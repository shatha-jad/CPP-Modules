
#include "span.hpp"

Span::Span() : _max(0) {}

Span::Span(unsigned int N) : _max(N) {}

Span::Span(const Span &object) : _max(object._max), _data(object._data) {}

Span & Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		_max = rhs._max;
		_data = rhs._data;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int num)
{
	if (_data.size() >= _max)
		throw ContainerMaxException();
	_data.push_back(num);
}

int Span::shortestSpan()
{
	if (_data.size() < 1)
		throw ContainerEmptyException();


	std::sort(this->_data.begin(), this->_data.end());
	int minSpan = this->_data[1] - this->_data[0];
	for (unsigned int i = 1; i < this->_data.size() - 1; i++)
	{
		if (this->_data[i + 1] - this->_data[i] < minSpan)
			minSpan = this->_data[i + 1] - this->_data[i];
	}
	return minSpan;
}

int Span::longestSpan()
{
	if (_data.size() <= 1)
		throw ContainerEmptyException();

	return *(_data.rbegin()) - *(_data.begin());
}

void Span::addMoreNum(int size)
{
	for (int i = 0; i < size && _data.size() < _max; i++)
	{
		_data.push_back(rand() % 100);
	}
}

const char *Span::ContainerMaxException::what() const throw()
{
	return "Container is Full";
}

const char *Span::ContainerEmptyException::what() const throw()
{
	return "Container is Empty";
}
