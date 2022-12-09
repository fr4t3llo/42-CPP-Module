#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm(){}
PresidentialPardonForm::PresidentialPardonForm() : Form("unknown", 25, 5)
{
    this->target = "None !!";
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
{
    *this = obj;
}



PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    if (this == &obj)
        return *this;
    this->target = obj.target;
    return *this;
}

 PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form (target, 25, 5)
{
    this->target = target;
}


void PresidentialPardonForm::execute(const Bureaucrat &obj) const 
{
    if (this->getIndicat() == false)
    {
        std::cout << "not signed in president form" << std::endl;
        return ;
    }
    if (obj.getGrade() > 25)
        throw GradeTooLowException();
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}