
#include "Serialize.hpp"

int main()
{
    Data t;
    Data *initializing;
    uintptr_t raw;
    t.nb = 1337;
    t.caractere = 'T';
    std::cout << "int : " << t.nb << std::endl;
    std::cout << "caractere : " << t.caractere << std::endl;
    raw = serialize(&t);
    //  the adress of t is the value of raw --> uintptr ;)
    std::cout << "raw for uintptr is : " << raw << std::endl;
    initializing = deserialize(raw);

    std::cout << "int now is : " << initializing->nb << std::endl;
    std::cout << "caractere now is : " << initializing->caractere << std::endl;
}
