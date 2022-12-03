#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Constructor Brain class Called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Copy Constructor Brain class Called" << std::endl;
	*this = obj;
}

Brain &Brain::operator=(const Brain &obj)
{
	std::cout << "Copy assignmet operator Brain class Called" << std::endl;
	if (this == &obj)
		return *this;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = obj.ideas[i]; // you must to learn about deep copy ans shallow copy
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Destructor for Brain class called" << std::endl;
}