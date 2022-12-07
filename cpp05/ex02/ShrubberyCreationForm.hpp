#ifndef SHRUBBERYCRESTIONFORM_H
#define SHRUBBERYCRESTIONFORM_H

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &obj);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
        ShrubberyCreationForm(std::string name);
        void execute(Bureaucrat const &exec)const;
};

#endif