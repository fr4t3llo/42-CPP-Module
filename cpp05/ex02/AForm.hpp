#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat; 
class Form
{
    private:
        const std::string   name;
        bool                indicat;
        const int           _grade;
        const int           grade_to_exec;
    public:
        Form();
        ~Form();
        Form(const Form &obj);
        Form &operator= (const Form &obj);
        Form(std::string name, int grade, int grade_to_exec);
        // void        setName(std::string name);
        std::string getName()const;
        int         getGrade()const;
        int         getGradeToExec()const;
        bool        getIndicat()const;
        virtual void	execute(Bureaucrat const &executor) const = 0;
        class GradeTooHighException : public std::exception
        {
            const char *what() const throw()
            {
                return "grade to hight";
            }
        };
        class GradeTooLowException : public std::exception
        {
            const char *what() const throw()
            {
                return "grade to low";
            }
        };
        void beSigned(Bureaucrat &obj);
};

std::ostream &operator << (std::ostream &out,const Form &obj);

#endif