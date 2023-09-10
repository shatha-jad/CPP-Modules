#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default Constructor called" << std::endl;
    _name = "";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string& name) 
{
    std::cout << "ScavTrap Name Constructor called" << std::endl;
    _name = name;
	if (!_name.length())
		_name = "NO NAME GIVEN";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}


ScavTrap::ScavTrap(const ScavTrap& object) : ClapTrap(object) {
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
    *this = object;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor Called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap Copy Assignment Operator called" << std::endl;
    if (this != &other) {
     	_name = other._name;
		_hitPoints = other._hitPoints;
		_attackDamage = other._attackDamage;
		_energyPoints = other._energyPoints;
    }

    return *this;
}

void ScavTrap::attack(const std::string& target) {
    std::cout << "ScavTrap attack() is called." << std::endl;
    if (_hitPoints > 0 && _energyPoints > 0) {
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else {
        std::cout << "ScavTrap " << _name << " can't attack because it has no hit points or energy points left!" << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap guardGate() is called." << std::endl;
    std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode." << std::endl;
}
