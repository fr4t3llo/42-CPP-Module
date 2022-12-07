#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form; 
class Bureaucrat
{
    private:
        const std::string name;
        int _grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &obj);
		Bureaucrat(std::string name, int grade);
        Bureaucrat &operator=(const Bureaucrat &obj);
        int         getGrade()const;
        std::string getName()const;
        void        incr();
        void        decr();
        class GradeTooHighException : public std::exception 
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("grade to high");
                }
        };

        class GradeTooLowException : public std::exception 
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("grade to low");
                }
        };
        void signForm(const Form &obj);
};

std::ostream & operator << (std::ostream &out,const Bureaucrat &obj);

#endif