#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _grade(12) {
}

Bureaucrat::~Bureaucrat(){}

void Bureaucrat::setGrade(int grade) {
    if (grade >= 0 && grade <= 150)
        _grade = grade;
    else
        throw Bureaucrat::GradeTooLowException();
}