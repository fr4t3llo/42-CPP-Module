#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"


int main()
{
	Bureaucrat i("SAIF", 4);
	Bureaucrat j("FRATELLO", 150);
	// ShrubberyCreationForm	sh("1337 coding school");
	RobotomyRequestForm Robot("ROBOT");
	PresidentialPardonForm meta("PRESIDENT");
	try
	{
		i.incr();
		std::cout << i << std::endl;
		// sh.beSigned(i);
		// a.execute(b);
		// sh.execute(c);
		// Robot.beSigned(i);
		// Robot.execute(i);
		// meta.beSigned(i);
		// meta.execute(i);
		// Robot.execute(c);
		// test.executeForm(meta);
	}
	catch(std::exception& exep)
	{
		std::cout << "Bureau " << exep.what() << "\n";
	}
	return 0;
}