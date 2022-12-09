#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	    	Bureaucrat::getGrade()const{return this->grade;}
std::string	Bureaucrat::getName()const{return this->name;}


Bureaucrat::~Bureaucrat(){std::cout << "destructor for Bureaucrat called" << std::endl;}
Bureaucrat::Bureaucrat():name("unknown")
{
	std::cout << "Default constructor Bureaucrat called" << std::endl;
	this->grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	*this = obj;
}

Bureaucrat::Bureaucrat(std::string str, int grade):name(str), grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this == &obj)
		return *this;
	this->grade = obj.grade;
	return *this;
}

void	Bureaucrat::incr()
{
	if (grade  - 1 >= 1 && grade - 1 <= 150)
		grade--;
	else{
		// std::cout << this->name << "\n";
		throw Bureaucrat::GradeTooHighException();	
	}
}

void	Bureaucrat::decr()
{
	if (this->grade + 1  <= 150 && this->grade + 1 >= 1)
		this->grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureauacrat grade " << obj.getGrade()<< "."<< std::endl;
	return out;
}

void	Bureaucrat::executeForm(Form const &form)
{
	if (this->getGrade() > form.getGradeToExec())
	{
		std::cout << "couldn't execute" << std::endl;
		throw Form::GradeTooLowException();
	}
	if (this->getGrade() <= 0)
	{
		std::cout << "couldn't execute" << std::endl;
		throw Form::GradeTooHighException();
	}
	if (form.getIndicat() != true)
	{
		std::cout << "not signed" << std::endl;
		std::cout << "couldn't execute" << std::endl;
		return ;
	}
	std::cout << this->name << " Executed " << form.getName() << std::endl;
	form.execute(*this);
}
