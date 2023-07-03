#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    // // Testing ClapTrap
    // ClapTrap clapTrap("ClapTrap");
    // clapTrap.attack("Enemy");
    // clapTrap.takeDamage(5);
    // clapTrap.beRepaired(3);
    // std::cout << std::endl;

    // // Testing ScavTrap
    // ScavTrap scavTrap("ScavTrap");
    // scavTrap.attack("Enemy");
    // scavTrap.takeDamage(15);
    // scavTrap.beRepaired(10);
    // scavTrap.guardGate();
    // std::cout << std::endl;

    // Testing FragTrap
    FragTrap fragTrap("FragTrap");
    fragTrap.attack("Enemy");
    fragTrap.takeDamage(20);
    fragTrap.beRepaired(15);
    fragTrap.highFivesGuys();
    std::cout << std::endl;

    return 0;
}