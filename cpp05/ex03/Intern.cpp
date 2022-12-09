#include "Intern.hpp"

Intern::Intern(){std::cout << "Intern Default Constructor called" << std::endl;}
Intern::~Intern(){std::cout << "Intern Destructor called" << std::endl;}
Intern::Intern(const Intern &obj)
{
    std::cout << "Intern copy Constructor called" << std::endl;
    *this = obj;
}
Intern &Intern::operator=(const Intern &obj){
    if (this == &obj)
        return *this;
    return *this;
}

const char *Intern::FormNameException::what() const throw()
{
    return "file does not exist !!";
}

Form *Intern::makeForm(std::string name, std::string target)
{
    std::string _name[3] = {"pres", "robot", "shru"};
	Form *Hell = NULL;
    int i = 0;
    while (i < 3)
    {
        if (_name[i] == name)
           break;
        i++;
    }
    switch (i)
    {
        case 0:
            Hell = new (std::nothrow) PresidentialPardonForm(target);
            std::cout << "Done : intern create " << name << std::endl;
            return (Hell);
            break;
        case 1:
            Hell = new (std::nothrow) RobotomyRequestForm(target);
            std::cout << "Done : intern create " << name << std::endl;
            return (Hell);
            break;
        case 2:
            Hell = new (std::nothrow) ShrubberyCreationForm(target);
            std::cout << "Done : intern create " << name << std::endl;
            return (Hell);
            break;
        default:
            throw(Intern::FormNameException());
    }
}