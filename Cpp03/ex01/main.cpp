
#include "ClapTrap.hpp"

int main() {
      // Testing ClapTrap
    ClapTrap clapTrap("ClapTrap");
    clapTrap.attack("Enemy");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(3);
    std::cout << std::endl;

    // Testing ScavTrap
    ScavTrap scavTrap("ScavTrap");
    scavTrap.attack("Enemy");
    scavTrap.takeDamage(15);
    scavTrap.beRepaired(10);
    scavTrap.guardGate();
    std::cout << std::endl;


    return 0;
}
