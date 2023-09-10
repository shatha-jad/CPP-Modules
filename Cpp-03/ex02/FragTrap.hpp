
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& object);
    FragTrap& operator=(const FragTrap& other);
    ~FragTrap();

    void highFivesGuys();
};

#endif