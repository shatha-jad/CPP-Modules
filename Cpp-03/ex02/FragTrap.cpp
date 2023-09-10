#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Constructor called" << std::endl;
    this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const std::string& name)
{
    std::cout << "FragTrap Name Constructor called" << std::endl;
    this->_name = name;
	if (!this->_name.length())
		this->_name = "NO NAME GIVEN";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = other;
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
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._energyPoints;
	}
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << "Positive high fives request!" << std::endl;
}
