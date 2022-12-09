#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Form;
class Bureaucrat
{
    private :
        const std::string name;
        int grade;
    public :
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator=(const Bureaucrat &obj);
        Bureaucrat(std::string name, int grade);
        int         getGrade()const;
        std::string getName()const;
        void        incr();
        void        decr();
        class GradeTooHighException : public std::exception 
        {
            public:
                const char* what() const throw()
                {
                    return ("grade too high");
                }
        };

        class GradeTooLowException : public std::exception 
        {
            public:
                const char* what() const throw()
                {
                    return ("grade too low");
                }
        };
        void    executeForm(Form const & form);
       
        
};
std::ostream & operator << (std::ostream &out,const Bureaucrat &obj);

#endif