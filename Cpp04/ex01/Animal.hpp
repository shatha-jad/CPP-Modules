// #ifndef ANIMAL_HPP
// #define ANIMAL_HPP

// #include <iostream>

// class Animal
// {
// public:
//     virtual ~Animal() {}
//     virtual void makeSound() const = 0;
// };

// #endif

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string _type;
		
	public:
		Animal();
		Animal(Animal const &object);
		Animal &operator=(Animal const &rhs);
		virtual ~Animal();

		virtual void	makeSound() const;
		virtual std::string	getType() const;
};
