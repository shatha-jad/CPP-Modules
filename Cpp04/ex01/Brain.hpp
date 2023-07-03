#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
private:
    std::string ideas[100];

public:
    Brain();
    		Brain(Brain const &Object);
		Brain &operator=(Brain const &other);
		~Brain();
		void	getIdeas() const;
		void	setIdeas(std::string *ideas);
		std::string *getIdeaas();
		void	changeIdeas();
};

#endif
