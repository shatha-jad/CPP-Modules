#include <iostream>
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Intern intern;

    // Create a ShrubberyCreationForm
    Form* shrubberyForm = intern.makeForm("shrubbery creation", "garden");
    if (shrubberyForm)
    {
        std::cout << "Intern created: " << shrubberyForm->getName() << std::endl;
        delete shrubberyForm;
    }

    // Create a RobotomyRequestForm
    Form* robotomyForm = intern.makeForm("robotomy request", "Bender");
    if (robotomyForm)
    {
        std::cout << "Intern created: " << robotomyForm->getName() << std::endl;
        delete robotomyForm;
    }

    // Create a PresidentialPardonForm
    Form* pardonForm = intern.makeForm("presidential pardon", "Arthur Dent");
    if (pardonForm)
    {
        std::cout << "Intern created: " << pardonForm->getName() << std::endl;
        delete pardonForm;
    }

    // Try to create an unknown form
    Form* unknownForm = intern.makeForm("unknown form", "target");
    if (unknownForm)
    {
        std::cout << "Intern created: " << unknownForm->getName() << std::endl;
        delete unknownForm;
    }
    else
    {
        std::cout << "Unknown form name" << std::endl;
    }

    return 0;
}

