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
    std::cout << n->getType() << std::endl;
    std::cout << m->getType() << std::endl;
    std::cout << meta->getType() << std::endl;
    std::cout << "******************************************" << std::endl; 
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    m->makeSound();
    n->makeSound();
    std::cout << "******************************************" << std::endl; 
    delete m;
    delete n;
    delete j;
    delete i;
    delete meta;

    // deep copy test
    Cat obj;
    {
        Cat tmp = obj;
    }

    return 0;
}