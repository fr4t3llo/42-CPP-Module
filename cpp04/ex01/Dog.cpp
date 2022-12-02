#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Constructor of class Dog Called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Destructor of Dog class called" << std::endl;
}

Dog::Dog(const Dog &obj)
{
	std::cout << "copy constructor Dog class Called" << std::endl;
	*this = obj;
}

Dog	&Dog::operator=(const Dog &obj)
{
	std::cout << "copy assignment operator of class Dog Called" << std::endl;
	if (this == &obj)
		return (*this);
	this->type = obj.getType();
	return (*this);
}

void	Dog::makeSound()const
{
	std::cout << "haw haw" << std::endl;
}