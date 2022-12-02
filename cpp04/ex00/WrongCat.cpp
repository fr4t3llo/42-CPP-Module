#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default Constructor WrongCat class Called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat class Called" << std::endl;
}

void	WrongCat::makeSound()const
{
	std::cout << "wrong cat mieeeeew" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
	std::cout << "Copy constructor WrongCat class Called" << std::endl;
	*this = obj;
}

WrongCat	&WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "Copy assignment operator WrongCat class Called" << std::endl;
	if (this == &obj)
		return (*this);
	this->type = obj.getType();
	return (*this);
}