
#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <set>
#include <ctime>
#include <algorithm>

class Span
{
	private:
		unsigned int		_max;
		std::multiset<int>	_data;

		class	ContainerEmptyException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class	ContainerMaxException : public std::exception
		{
			public:
				const char *what() const throw();
		};

	public:
		Span();
		Span(unsigned int N);
		Span(const Span &object);
		Span & operator=(const Span &rhs);
		~Span();

		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();
		void	addMoreNum(int size);
};

#endif
