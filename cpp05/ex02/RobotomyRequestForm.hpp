#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm : public Form
{
    private : 
        std::string target;
    public :
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &obj);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
        RobotomyRequestForm(std::string target);
        void execute(Bureaucrat const &executer) const;
};

#endif