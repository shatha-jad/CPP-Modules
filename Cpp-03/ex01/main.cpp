
#include "ScavTrap.hpp"

int main() {

    ScavTrap scavTrap("Hero");
    std::cout << "         " << std::endl;
    scavTrap.attack("Enemy");
    std::cout << "         " << std::endl;
    scavTrap.takeDamage(15);
    std::cout << "         " << std::endl;
    scavTrap.beRepaired(10);
    std::cout << "         " << std::endl;
    scavTrap.guardGate();
    std::cout << "         " << std::endl;
    std::cout << std::endl;


    return 0;
}
