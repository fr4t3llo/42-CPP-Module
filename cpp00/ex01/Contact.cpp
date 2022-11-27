#include "Contact.hpp"

// *********************  functions set  ****************************

void Contact::setFirstName(std::string line)
{
    FirstName = line;
}
void Contact::setLastName(std::string line) 
{
     LastName = line; 
}
void Contact::setNickName(std::string line) 
{
    NickName = line;
}
void Contact::setPhoneNumber(std::string line)
{
    PhoneNumber = line;
}
void Contact::setDarkestSecret(std::string line)
{
    DarkestSecret = line;
}

// *********************  functions get  ****************************

std::string Contact::getFirstName()
{
    return FirstName;
}
std::string Contact::getLastName()
{
    return LastName;
}
std::string Contact::getNickName()
{
    return NickName;
}
std::string Contact::getPhoneNumber()
{
    return PhoneNumber;
}
std::string Contact::getDarkestSecret()
{
    return DarkestSecret;
}
