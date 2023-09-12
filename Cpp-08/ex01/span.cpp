
#include "span.hpp"

Span::Span() : _max(0) {}

Span::Span(unsigned int N) : _max(N) {}

Span::Span(const Span &object) : _max(object._max), _data(object._data) {}

Span & Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->_max = rhs._max;
		this->_data = rhs._data;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int num)
{
	if (_data.size() >= _max)
		throw ContainerMaxException();
	_data.insert(num);
}

int Span::shortestSpan()
{
	if (_data.size() <= 1)
		throw ContainerEmptyException();

	std::multiset<int>::iterator next = _data.begin();
	std::multiset<int>::iterator prev = next++;

	int minSpan = *next - *prev;
	while (next != _data.end())
	{
		if (*next - *prev < minSpan)
			minSpan = *next - *prev;
		prev++;
		next++;
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
		_data.insert(rand() % 100);
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
