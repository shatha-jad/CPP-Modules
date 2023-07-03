#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& other)
{
    *this = other;
}

Intern::~Intern() {}

Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return *this;
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const
{
    AForm* form = nullptr;

    if (formName == "shrubbery creation")
        form = new ShrubberyCreationForm(target);
    else if (formName == "robotomy request")
        form = new RobotomyRequestForm(target);
    else if (formName == "presidential pardon")
        form = new PresidentialPardonForm(target);
    else
        std::cout << "Error: Unknown form name." << std::endl;

    if (form)
        std::cout << "Intern creates " << form->getName() << std::endl;

    return form;
}
