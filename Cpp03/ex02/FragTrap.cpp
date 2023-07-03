#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("", 100, 100, 30)
{
    std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap Name Constructor called" << std::endl;
    if (!this->_name.length())
		this->_name = "NO NAME GIVEN";
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
	// *this = object;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor Called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap Copy Assignment Operator called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << "Positive high fives request!" << std::endl;
}
