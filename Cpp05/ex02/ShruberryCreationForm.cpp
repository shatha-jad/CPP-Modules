
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("Shrubbery Creation Form", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    AForm::execute(executor);

    std::string filename = target + "_shrubbery";
    std::ofstream ofs(filename);
    if (!ofs) {
        throw std::runtime_error("Failed to create file: " + filename);
    }

    ofs << "ASCII trees" << std::endl;

    if (ofs.fail()) {
        throw std::runtime_error("Failed to write to file: " + filename);
    }
}
