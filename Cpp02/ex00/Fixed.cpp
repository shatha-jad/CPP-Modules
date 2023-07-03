

#include "Fixed.hpp"

Fixed::Fixed(void): val(0) //// initialize the val to 0
{
	std::cout << "Default constructor called" << std::endl;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

// checks for self-assignment.
//If the objects are different, it assigns the val member of the current instance with the raw bits of rhs.

Fixed	&Fixed::operator=(Fixed const &fix)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fix)
		this->val = fix.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->val = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->val);
}