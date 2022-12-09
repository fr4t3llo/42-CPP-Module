#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H



#include "AForm.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &obj);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
        PresidentialPardonForm(std::string target);
        void execute(const Bureaucrat &obj)const;
        
};

#endif