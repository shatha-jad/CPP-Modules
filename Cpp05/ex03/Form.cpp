#include "Form.hpp"

Form::Form(const std::string& name, int gradeRequiredToSign, int gradeRequiredToExecute)
    : _name(name), _isSigned(false), _gradeRequiredToSign(gradeRequiredToSign),
      _gradeRequiredToExecute(gradeRequiredToExecute)
{
    if (gradeRequiredToSign < 1 || gradeRequiredToExecute < 1)
        throw GradeTooHighException();
    else if (gradeRequiredToSign > 150 || gradeRequiredToExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& other)
    : _name(other._name), _isSigned(other._isSigned),
      _gradeRequiredToSign(other._gradeRequiredToSign), _gradeRequiredToExecute(other._gradeRequiredToExecute)
{
}

Form& Form::operator=(const Form& other)
{
    if (this != &other)
    {
        _isSigned = other._isSigned;
    }
    return *this;
}

Form::~Form()
{
}

const std::string& Form::getName() const
{
    return _name;
}

bool Form::isSigned() const
{
    return _isSigned;
}

int Form::getGradeRequiredToSign() const
{
    return _gradeRequiredToSign;
}

int Form::getGradeRequiredToExecute() const
{
    return _gradeRequiredToExecute;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= _gradeRequiredToSign)
    {
        _isSigned = true;
    }
    else
    {
        throw GradeTooLowException();
    }
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << "Form: " << form.getName()
       << ", Signed: " << (form.isSigned() ? "Yes" : "No")
       << ", Grade required to sign: " << form.getGradeRequiredToSign()
       << ", Grade required to execute: " << form.getGradeRequiredToExecute();
    return os;
}
