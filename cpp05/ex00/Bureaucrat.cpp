#include "Bureaucrat.hpp"

std::string Bureaucrat::getName()const{return this->name;}
int Bureaucrat::getGrade()const {return this->_grade;}

Bureaucrat::Bureaucrat() : name("unknown") //inisializing
{
    std::cout << "Default constructor called" <<  std::endl;
    this->_grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Bureaucrat::~Bureaucrat(){std::cout << "Destructor called" << std::endl;}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    std::cout << "copy assignment operator called" << std::endl;
    if(this == &obj)
        return *this;
    this->_grade = obj._grade;
    return *this;
}

void Bureaucrat::incr()
{
    if (this->_grade - 1 >= 1 && this->_grade - 1 <= 150) //
        this->_grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decr()
{
    if (this->_grade  + 1 <= 150 && this->_grade + 1 >= 1) //
        this->_grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(std::string str, int grade) : name(str) , _grade(grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    std::cout << "Grade constructor called" << std::endl;
}

std::ostream &operator<< (std::ostream &out, const Bureaucrat &obj)
{
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
    return out;
}