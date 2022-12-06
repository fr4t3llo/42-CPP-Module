#include "Form.hpp"

Form::Form() : name("unknowm"), grade_to_exec(30), _grade(30)
{
    std::cout << "Default constructor called " << std::endl;
    this->indicat = false;
}

Form::~Form()
{
    std::cout << "Destructor called" <<  std::endl;
}

Form::Form(std::string name, int grade, int grade_exec) : name(name), _grade(grade), grade_to_exec(grade_exec)
{
    std::cout << "assignment constuctor called" << std::endl;
    this->indicat = false;
}

Form::Form(const Form &obj) : name(obj.name), _grade(obj._grade), grade_to_exec(grade_to_exec)
{
    std::cout << "coppy constructor called" << std::endl;
    *this = obj;
}

Form &Form::operator=(const Form &obj)
{
    std::cout << "copy assignment operator called" << std::endl;
    if (this == &obj)
        return *this;
    this->indicat = obj.indicat;
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Form &obj)
{
    out << obj.getName() << "the grade is : " << obj.getGrade() << ", grade he need to execute is : " << obj.getGradeToExec();
    if (obj.getIndicat() == true)
        out << "can sign";
    else 
        out << "can't sign" << std::endl;
    return out;
    
 }
void Form::signForm(Bureaucrat &obj)
{
    if (this->indicat == true && obj.getGrade() < this->getGrade())
        std::cout << obj.getName() << "  signed " << this->getName() <<  std::endl;
    else
        std::cout << obj.getName() << " couldn’t sign " << this->getName() << "because his grade to low" << std::endl;
}


void Form::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() < this->_grade)
        this->indicat = true;
    else 
        throw Form::GradeTooLowException();
}



std::ostream &operator<<(std::ostream &out, const Form &obj);