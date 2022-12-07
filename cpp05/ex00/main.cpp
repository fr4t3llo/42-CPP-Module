#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat i("one", 150);
	Bureaucrat j("two", 149);

	try
	{
		i.decr();
		j.decr();
		std::cout << i << std::endl;
		std::cout << j << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << "Bureaucrat " << e.what() << '\n';
	}
	return 0;
}