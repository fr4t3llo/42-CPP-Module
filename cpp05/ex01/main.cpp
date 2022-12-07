#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat i("one", 2);
	Bureaucrat j("two", 150);

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