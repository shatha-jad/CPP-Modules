#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    // Create a bureaucrat
    Bureaucrat bureaucrat("John", 50);

    // Create different forms
    ShrubberyCreationForm shrubberyForm("Home");
    RobotomyRequestForm robotomyForm("John Doe");
    PresidentialPardonForm pardonForm("Jane Doe");

    // Attempt to execute the forms
    bureaucrat.executeForm(shrubberyForm);
    bureaucrat.executeForm(robotomyForm);
    bureaucrat.executeForm(pardonForm);

    // Sign the forms
    bureaucrat.signForm(shrubberyForm);
    bureaucrat.signForm(robotomyForm);
    bureaucrat.signForm(pardonForm);

    // Attempt to execute the forms again
    bureaucrat.executeForm(shrubberyForm);
    bureaucrat.executeForm(robotomyForm);
    bureaucrat.executeForm(pardonForm);

    return 0;
}
