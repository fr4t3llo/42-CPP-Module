#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {
    
    private:
        std::string  FirstName;
        std::string  LastName;
        std::string  NickName;
        std::string  PhoneNumber;
        std::string  DarkestSecret;

    public:
        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
        void setFirstName(std::string line);
        void setLastName(std::string line);
        void setNickName(std::string line);
        void setPhoneNumber(std::string line);
        void setDarkestSecret(std::string line);
        // void SetContactInfos(std::string FirstName, std::string LastName, std::string NickName, std::string PhoneNumber, std::string DarkestSecret);
};

#endif