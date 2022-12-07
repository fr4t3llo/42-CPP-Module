#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm(){}
RobotomyRequestForm::RobotomyRequestForm() : Form ("unknown", 72, 45)
{
    this->target = "unknown";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
{
    *this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    if (this == &obj)
        return *this;
    this->target = obj.target;
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form (target, 72, 45)
{
    this->target = target;
}


void RobotomyRequestForm::execute(Bureaucrat const &execute) const
{
    int check_robo = rand() % 2;
    if (execute.getGrade() > 45)
        throw GradeTooLowException();
    else if (this->getIndicat() == false)
    {
        std::cout << "not signed !!" << std::endl;
        return ;
    }
    else 
    {
        srand(time(0));
        std::cout << "error !" << std::endl;
        if (check_robo < 2)
            std::cout << this->target << " success robotmize " << check_robo << std::endl;
        else
            std::cout << this->target << " Eroor robotmize " << check_robo << std::endl;
    }
}

