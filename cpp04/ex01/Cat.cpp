#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Constructor of class Cat Called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Destructor of Cat class called" << std::endl;
}

Cat::Cat(const Cat &obj)
{
	std::cout << "Copy constructor Cat class Called" << std::endl;
	this->brain = new Brain();
	*this = obj;
}

Cat	&Cat::operator=(const Cat &obj)
{
	std::cout << "Copy assignment operator of class Cat Called" << std::endl;
	if (this == &obj)
		return (*this);
	this->type = obj.getType();
	for (int i = 0; i < 100; i++)
	{
		this->brain->ideas[i] = obj.brain->ideas[i];
	}
	return (*this);
}

void	Cat::makeSound()const
{
	std::cout << "Miouuuuuuuw" << std::endl;
}