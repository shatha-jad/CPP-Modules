#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("Robotomy Request Form", 72, 45), target(target) {
    std::srand(std::time(nullptr));
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    AForm::execute(executor);

    std::cout << "Drilling noises..." << std::endl;

    if (std::rand() % 2 == 0) {
        std::cout << target << " has been robotomized successfully!" << std::endl;
    } else {
        std::cout << "Robotomy failed for " << target << "." << std::endl;
    }
}
