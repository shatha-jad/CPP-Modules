
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* animals[10];

    for (int i = 0; i < 5; ++i)
        animals[i] = new Dog();

    for (int i = 5; i < 10; ++i)
        animals[i] = new Cat();

    for (int i = 0; i < 10; ++i)
    {
        animals[i]->makeSound();
        delete animals[i];
    }

    return 0;
}
