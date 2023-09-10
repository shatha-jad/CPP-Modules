#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap fragTrap("FragTrap");
    std::cout << "         " << std::endl;
    fragTrap.attack("Enemy");
    std::cout << "         " << std::endl;
    fragTrap.takeDamage(20);
    std::cout << "         " << std::endl;
    fragTrap.beRepaired(15);
    std::cout << "         " << std::endl;
    fragTrap.highFivesGuys();
    std::cout << "         " << std::endl;

    return 0;
}