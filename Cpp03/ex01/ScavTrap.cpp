#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20) {
    std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name, 100, 50, 20) {
    std::cout << "ScavTrap Name Constructor called" << std::endl;
    if (!this->_name.length())
        this->_name = "NO NAME GIVEN";
}

ScavTrap::ScavTrap(const ScavTrap& object) : ClapTrap(object) {
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
    // *this = object;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor Called" << std::endl;
}

//We check if the current object (this) is the same as the object being assigned (other).
// If they are not the same, we invoke the copy assignment operator of the base class (ClapTrap::operator=(other)). 
//This assigns the inherited members from the ClapTrap class.
// If they are the same, there is no need to perform the assignment, so we skip the assignment part.
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap Copy Assignment Operator called" << std::endl;
    if (this != &other) {
     ClapTrap::operator=(other);
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
