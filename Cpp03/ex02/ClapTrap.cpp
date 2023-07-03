

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Name Constructor called" << std::endl;
}

// ClapTrap::ClapTrap(const std::string& name)
//     : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
//     std::cout << "ClapTrap " << name << " has been created!" << std::endl;
// }

// ClapTrap::ClapTrap(const ClapTrap& other)
//     : name(other.name + "_copy"), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
//     std::cout << "ClapTrap " << name << " has been created as a copy of " << other.name << "!" << std::endl;
// }

//takes a reference to another ClapTrap object and creates a new object that is a copy of the provided object. 
//It assigns the values of the member variables from the source object to the newly created object.
//It also prints a message indicating that the copy constructor has been called.
ClapTrap::ClapTrap(ClapTrap const &object)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = object;
}

//called when an object of the class goes out of scope or when the delete operator is used on a dynamically allocated object.
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor Called" << std::endl;
}

//It takes a reference to another ClapTrap object and assigns its values to the current object.
//It checks for self-assignment to avoid unnecessary work. It assigns the values of the member variables from the source object to the current object. 
ClapTrap & ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << "ClapTrap Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._energyPoints;
	}
	return (*this);
}

//takes a target parameter and simulates an attack.
//It checks if the _hitPoints and _energyPoints are greater than zero before performing the attack.
//It decrements the _energyPoints and prints a message indicating the attack details.
void	ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap attack() is called." << std::endl;
	if (!this->_hitPoints)
	{
		std::cout << "ClapTrap " << _name << " has no hit points." << std::endl;
		return ;
	}
	else if (!_energyPoints)
	{
		std::cout << "ClapTrap " << _name << " has no energy points."<< std::endl;
		return ;
	}
    _energyPoints--;
	if (target.length())
		std::cout << "ClapTrap " << _name << " attacks " << target
				<< ", causing " << _attackDamage << " points of damage !"
				<< std::endl;
	else
		std::cout << "Target not set" << std::endl;
}

// It takes an amount parameter and simulates taking damage.
//It checks if the amount is valid (not negative) and updates the _hitPoints accordingly.
//It prints a message indicating the current hit points.
void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap takeDamage() is called." << std::endl;
	if (int(amount) < 0)
	{
		std::cout << "Invalid Damage value" << std::endl;
		return ;
	}
	else if (int(amount) > _hitPoints)
	{
		_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " has " << _hitPoints 
				<< " hitPoints left." << std::endl;
		return ;
	}
	else
	{
		_hitPoints -= (int)amount;
		std::cout << "ClapTrap " << _name << " has " << _hitPoints 
				<< " hitPoints left." << std::endl;
		return ;
	}
}

// It takes an amount parameter and simulates the repair process.
//It checks if the _hitPoints and _energyPoints are greater than zero before performing the repair.
//It decrements the _energyPoints, increases the _hitPoints, and prints messages indicating the updated hit points and energy points.
void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap beRepaired() is called." << std::endl;
	if (!_hitPoints)
	{
		std::cout << "ClapTrap " << _name << " has no hit points."
				<< std::endl;
		return ;
	}
	else if (!_energyPoints)
	{
		std::cout << "ClapTrap " << _name << " has no energy points."
				<< std::endl;
		return ;
	}
	_energyPoints -= 1;
	_hitPoints += (int)amount;
	std::cout << "ClapTrap " << _name << " has " << _hitPoints
			<< " hitPoints left." << std::endl;
	std::cout << "ClapTrap " << _name << " has " << _energyPoints
			<< " energyPoints left." << std::endl;
}