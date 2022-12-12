#include "Base.hpp"
#include "B.hpp"
#include "A.hpp"
#include "C.hpp"

void identify(Base *p)
{
    A *childA = dynamic_cast<A *>(p);
    if (childA)
    {
        std::cout << "child class A Done !!" << std::endl;
        return ;
    }
    B *childB = dynamic_cast<B *>(p);
    if (childB)
    {
        std::cout << "child class B Done !!" << std::endl;
        return ;
    }
    C *childC = dynamic_cast<C *>(p);
    if (childC)
    {
        std::cout << "child class C Done !!" << std::endl;
        return ;
    }
}

void identify(Base &p)
{
    try
    {
        A &childA = dynamic_cast<A &>(p);
        (void)childA;
        std::cout << "child class A Done !!" << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << "A : "; 
        std::cout << e.what() << std::endl;
    }
    try 
    {
        B &childB = dynamic_cast<B &>(p);
        (void)childB;
        std::cout << "child class B Done !!" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "B : ";
        std::cout << e.what() << std::endl;
    }
    try 
    {
        C &childC = dynamic_cast<C &>(p);
        (void)childC;
        std::cout << "child class C Done !!" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "C : ";
        std::cout << e.what() << std::endl;
    }
}
Base *generate(void)
{
    Base *childA = new A;
    Base *childB = new B;
    Base *childC = new C;
    srand(time(0));
    int random = rand() % 3;
    if (random == 1)
    {
        delete childB;
        delete childC;
        return (childA);
    }
    else if (random == 2)
    {
        delete childA;
        delete childC;
        return (childB);
    }
    else
    {
        delete childB;
        delete childA;
        return (childC);
    }
    return NULL;
}
