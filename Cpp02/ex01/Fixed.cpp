

#include "Fixed.hpp"


Fixed::Fixed(): _val(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &object)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = object;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy Assignment Operator called" << std::endl;
	if (this != &rhs)
		this->_fixed = rhs.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "Set raw bits called" << std::endl;
	this->_fixed = raw;
}

int		Fixed::getRawBits() const
{
	// std::cout << "Get raw bits called" << std::endl;
	return (this->_fixed);
}

// int to fixed point
// shifting to the left is equivalent to multiplying by 2^ _bits.
Fixed::Fixed(int const n)
{
	std::cout << "Int Constructor called" << std::endl;
	this->setRawBits(n << this->_bits);
}

// (1 << this->_bits) is the scaling factor, This scaling factor is equivalent to 2 raised to the power of _bits, which is initialized to 8 in the constructor. 
//This multiplication scales the floating-point value num up by a factor of 256, as (1 << 8) equals 256.
//This step is necessary to properly represent the fractional part of the fixed-point number.
// Round the result of the multiplication to the nearest int to ensures that any fractional part is properly accounted for and rounded to the nearest whole number.
// the rounded value is passed to the setRawBits member function, which sets the value of the _val variable to the rounded integer value, representing the fixed-point value.
Fixed::Fixed(float const n)
{
	std::cout << "Float Constructor called" << std::endl;
	this->setRawBits(roundf(n * (1 << this->_bits)));
}

//ask
std::ostream & operator<<(std::ostream &out, Fixed const &rhs)
{
	out << rhs.toFloat();
	return (out);
}

//equivalent to dividing by 2 raised to the power of _bits, which represents the scaling factor used to convert the fixed-point value to its floating-point.
//scales the fixed-point value back to its original range, effectively undoing the scaling that was done during construction.
float	Fixed::toFloat() const
{
	return (roundf(this->_fixed) / (1 << this->_bits));
}

// This is equivalent to dividing _fixed by 2 raised to the power of _bits.
//Since _bits represents the number of fractional bits, the right shift operation effectively discards the fractional part and returns the integer representation of the fixed-point number.
int	Fixed::toInt() const
{
	return (this->_fixed >> this->_bits);
}