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
        // Bureaucrat(const Bureaucrat &obj);
        // Bureaucrat &operator=(const Bureaucrat &obj);
        void setGrade(int grade);
        // void setName(std::string name) const;
        // int getGrade()const;
        // std::string getName();
        class GradeTooHighException : public std::runtime_error 
        {
            public:
             GradeTooHighException() : runtime_error("This is an exp error") {}
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


#endif