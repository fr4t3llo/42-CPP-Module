#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    // private:
    public:
        std::string ideas[100];
        Brain();
        ~Brain();
        Brain(const Brain &obj);
        Brain &operator=(const Brain &obj);
        void setIdeas(std::string str);
        std::string getIdeas();
};

#endif