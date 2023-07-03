#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat1("John Doe", 50);
        std::cout << bureaucrat1 << std::endl;
        
        bureaucrat1.incrementGrade();
        std::cout << bureaucrat1 << std::endl;
        
        bureaucrat1.decrementGrade();
        std::cout << bureaucrat1 << std::endl;
        
        Bureaucrat bureaucrat2("Jane Smith", 1);
        std::cout << bureaucrat2 << std::endl;
        
        bureaucrat2.incrementGrade(); // Should throw GradeTooHighException
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    return 0;
}
