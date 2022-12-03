#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Base animal";
    std::cout << "Default constructor of Animal class called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Dopy constructor of Animal class called" << std::endl;
    *this = obj;
}

Animal::~Animal()
{
	std::cout << "Destructor of Animal called" << std::endl;
}

Animal &Animal::operator=(const Animal &obj)
{
    std::cout << "Assignement operator of animal operator" << std::endl;
    this->type = obj.getType();
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::setType(std::string type)
{
    this->type = type;
}
void Animal::makeSound()const
{
    // std::cout << "base sound" << std::endl;
}
