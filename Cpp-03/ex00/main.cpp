
#include "ClapTrap.hpp"

int main(void)
{

	ClapTrap mod("Hero");
    std::cout << "         " << std::endl;
	mod.attack("Enemy");
    std::cout << "         " << std::endl;
	mod.takeDamage(3);
    std::cout << "         " << std::endl;
	mod.beRepaired(7);
    std::cout << "         " << std::endl;
    return (0);
}