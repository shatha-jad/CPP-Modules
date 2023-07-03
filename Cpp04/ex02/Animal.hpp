#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
public:
    virtual ~AAnimal() {}
    virtual void makeSound() const = 0;
};

#endif
