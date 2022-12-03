#include "Brain.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    // const Animal* meta = new Animal();
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    std::cout << "******************************************" << std::endl; 
    i->makeSound();
    j->makeSound();
    // meta->makeSound();
    std::cout << "******************************************" << std::endl; 

    delete j; //should not create a leak
    delete i;
    // delete meta;
    return 0;
}