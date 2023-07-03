
#include "Dog.hpp"

Dog::Dog()
    : brain(new Brain())
{
    std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
    : brain(new Brain(*other.brain))
{
    std::cout << "Dog Destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog()
{
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Dog barks" << std::endl;
}
