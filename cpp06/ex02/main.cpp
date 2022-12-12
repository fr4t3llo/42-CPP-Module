#include "Base.hpp"

int _main()
{
        Base *Pointeur;
        Pointeur = generate();
        std::cout << "Pointers : " << std::endl;
        identify(Pointeur);
        std::cout << std::endl << "References : " << std::endl;
        identify(*Pointeur);
        delete Pointeur;
        return (0);
}

int main()
{
        _main();
        // system("leaks Serialize");
}