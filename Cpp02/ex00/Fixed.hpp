
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					val; // store the actual value.
		static const int	fracBits = 8; // static bcuz shared among all instances of the class. value = 8 representing the number of fractional bits.
	public:

		Fixed();
		Fixed(const Fixed &fix);
		~Fixed();

		Fixed	&operator=(Fixed const &fix);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif