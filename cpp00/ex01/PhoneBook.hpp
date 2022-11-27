
#include "Contact.hpp"

#include <iostream>
#include <sstream>
#include <iomanip>

class PhoneBook {
    private:
        int nb;
        Contact contact[8];
    
    public:
        PhoneBook();
        void ADD();
        void SEARCH();
        void EXIT();
};