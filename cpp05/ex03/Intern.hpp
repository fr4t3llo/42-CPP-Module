#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Form;
class Intern
{
    public:
        Intern();
        ~Intern();
        Intern &operator=(const Intern &obj);
        Intern(const Intern &obj);
        class FormNameException: public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
        Form *makeForm(std::string name, std::string target);
};


#endif