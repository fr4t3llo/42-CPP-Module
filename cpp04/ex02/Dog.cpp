#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Constructor of class Dog Called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Destructor of Dog class called" << std::endl;
}

Dog::Dog(const Dog &obj)
{
	std::cout << "copy constructor Dog class Called" << std::endl;
	this->brain = new Brain();	
	*this = obj;
}

Dog	&Dog::operator=(const Dog &obj)
{
	std::cout << "copy assignment operator of class Dog Called" << std::endl;
	if (this == &obj)
		return (*this);
	this->type = obj.getType();
	for (int i = 0; i < 100; i++)
	{
		this->brain->ideas[i] = obj.brain->ideas[i];  //////////////////////////////////
	}
	
	return (*this);
}

void	Dog::makeSound()const
{
	std::cout << "haw haw" << std::endl;
}