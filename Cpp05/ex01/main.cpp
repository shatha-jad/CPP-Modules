
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat highGradeBureaucrat("John", 1);
        Bureaucrat lowGradeBureaucrat("Alice", 150);

        Form form1("Form 1", 50, 75);
        std::cout << form1 << std::endl;

        highGradeBureaucrat.signForm(form1);
        std::cout << form1 << std::endl;

        lowGradeBureaucrat.signForm(form1); // This will throw GradeTooLowException
    } catch (std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
