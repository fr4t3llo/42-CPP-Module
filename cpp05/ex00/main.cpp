#include "Bureaucrat.hpp"

int main()
{
    // const int a = 42; //intializing

    // const int b;

    // b = 1337; //assigning

    try
    {
        Bureaucrat obj;

        obj.setGrade(151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}