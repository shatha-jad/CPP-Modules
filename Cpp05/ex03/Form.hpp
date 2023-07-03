#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string _name;
    bool _isSigned;
    const int _gradeRequiredToSign;
    const int _gradeRequiredToExecute;

public:
    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return "Form grade is too high";
        }
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return "Form grade is too low";
        }
    };

    Form(const std::string& name, int gradeRequiredToSign, int gradeRequiredToExecute);
    Form(const Form& other);
    Form& operator=(const Form& other);
    ~Form();

    const std::string& getName() const;
    bool isSigned() const;
    int getGradeRequiredToSign() const;
    int getGradeRequiredToExecute() const;

    void beSigned(const Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
