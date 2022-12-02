#include "WrongAnimal.hpp"

std::string	WrongAnimal::getType()const
{
    return this->type;
}

WrongAnimal::WrongAnimal()
{
	type = "Wrong";
	std::cout << "Constructor WrongAnimal class Called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << "Copy Assignment Operator WrongAnimal class Called" << std::endl;
	if (this == &obj)
		return (*this);
	type = obj.type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "Copy Constructorfor WrongAnimal class Called" << std::endl;
	*this = obj;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor for WrongAnimal class Called" << std::endl;
}

void	WrongAnimal::makeSound()const
{
	std::cout << "invalid" << std::endl;
}