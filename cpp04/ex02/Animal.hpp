#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal 
{
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &obj);
        Animal &operator=(const Animal &obj);
        std::string getType() const;
        void setType(std::string type);
        virtual void makeSound() const = 0; // pure virtual function  = 0 - any class inheret from animal class 
                                            // have to provide its own implimentation                 
};

#endif