#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Constructor of class Cat Called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Destructor of Cat class called" << std::endl;
}

Cat::Cat(const Cat &obj)
{
	std::cout << "copy constructor Cat class Called" << std::endl;
	*this = obj;
}

Cat	&Cat::operator=(const Cat &obj)
{
	std::cout << "copy assignment operator of class Cat Called" << std::endl;
	if (this == &obj)
		return (*this);
	this->type = obj.getType();
	return (*this);
}

void	Cat::makeSound()const
{
	std::cout << "Miouuuuuuuw" << std::endl;
}