#include "Brain.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    const Animal* meta = new Animal();
    const WrongCat* n = new WrongCat();
    const WrongAnimal* m = new WrongAnimal();
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    std::cout << "******************************************" << std::endl; 
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << n->getType() << std::endl;
    std::cout << m->getType() << std::endl;
    std::cout << "******************************************" << std::endl; 
    m->makeSound();
    n->makeSound();
    delete m;
    delete n;
    delete j; //should not create a leak
    delete i;
    delete meta;
    return 0;
}