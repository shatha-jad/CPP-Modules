#include "Brain.hpp"

// Brain::Brain()
// {
//     std::cout << "Brain Constructor called" << std::endl;
// }

// Brain::~Brain()
// {
//     std::cout << "Brain Destructor called" << std::endl;
// }


Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
	std::string idea[10] = {"IDEA1", "IDEA2","IDEA3","IDEA4","IDEA5","IDEA6",
							"IDEA7","IDEA8","IDEA9","IDEA10"};
	for(int i = 0; i < 10; i++)
		this->ideas[i] = idea[rand() % 10];
	for(int i = 0; i < 10; i++)
		std::cout << ideas[i] << std::endl;
}


Brain::Brain(Brain const &Object)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = Object;
}

Brain & Brain::operator=(Brain const &other)
{
	std::cout << "Brain Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		for(int i = 0; i < 10; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

void	Brain::getIdeas() const
{
	for(int i = 0; i < 10; i++)
		std::cout << ideas[i] << std::endl;
}

void	Brain::setIdeas(std::string *ideas)
{
	for (int i = 0; i < 10; i++)
		this->ideas[i] = ideas[i];
}

void	Brain::changeIdeas() {
	for (int i = 0; i < 10; i++)
		this->ideas[i] = "Another ideas";
}

std::string	*Brain::getIdeaas() {
	return this->ideas;
}