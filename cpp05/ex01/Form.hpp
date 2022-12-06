#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>


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
        void        setName(std::string name);
        std::string getName()const;
        void        getGrade()const;
        void        getGradeToExec()const;
        bool        getIndicat()const;
        class GradeTooHighException : public std::exception
        {
            const char *what() const throw()
            {
                std::cout << "grade to hight" << std::endl;
            }
        };
        class GradeTooLowException : public std::exception
        {
            const char *what() const throw()
            {
                return "grade to low";
            }
        };
        void beSigned(Bureaucrat &);
        void signForm(Bureaucrat &);
};

std::ostream &operator << (std::ostream &out,const Form &obj);

#endif