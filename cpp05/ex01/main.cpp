#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat i("", 2);
	Bureaucrat j("", 150);

	try
	{
		i.incr();
		j.incr();
		std::cout << i << std::endl;
		std::cout << j << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << "Bureaucrat " << e.what() << '\n';
	}
	return 0;
}