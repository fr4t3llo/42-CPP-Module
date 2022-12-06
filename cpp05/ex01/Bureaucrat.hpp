#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        const std::string name;
        int _grade;
        // const int x;
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
        class GradeTooHighException : public std::runtime_error
        {
            public:
             GradeTooHighException() : runtime_error("Grade is to hight") {}
        };

        class GradeTooLowException : public std::exception 
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("meow error");
                }
        };
};

std::ostream & operator << (std::ostream &out,const Bureaucrat &obj);

#endif