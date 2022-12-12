#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>


template<typename T>
class Array
{
    private: 
        T *element;
        unsigned int lenght;
    public:
// 1 : *** Construction with no parameter ***
        Array()
        {
            element = new(std::nothrow) T();
            if (element == NULL)
            {
                std::cout << "Error allocation !!" << std::endl;
                return (1); //////// or exit 
            }
            lenght = 1;
        }
// 2 : *** Construction with an unsigned int n as a parameter ***
        Array(unsigned int n)
        {
            int i = n;
            if (a <= 0)
            {
                std::cout << "Error size !!" << std::endl;
                return (1); // or exit 
            }
            element = new(std::nothrow) T [n];
            if (element == NULL)
            {
                std::cout << "Error allocation !!" << std::endl;
                return (1);
            }
            lenght = n;
        }
// 3 : *** copy constructor ***
        Array(const Array & obj)
        {
            this->element = new(std::nothrow) T [obj.size()];
            if (element == NULL)
            {
                std::cout << "Eroor allocation !!" << std::endl;
                return (1);
            }
            *this = obj;
        } 
// 4 : *** Construction by copy and assignment operator *** 
        Array &operator=(const Array & obj)
        {
            if (this != &obj)
            {
                for (int i = 0; i < obj.size(); i++)
                    element[i] = obj.element[i];
                size = obj.size;
            }
            return *this;
        }
// 5 : *** operator new[] to allocate memory ***
        T& operator[](int i)
        {
            if (i >= 0 && i < this->size())
            {
                return (this->element[i]);
            }
            throw OutOfBounds();
        }
// 6 : *** exeption ***
        class OutOfBounds : public std::exception{
            cosnt char *what() const throw()
            {
                return "i is : out of bounds";
            }
        };
// 7 : *** A member function size() that returns the number of elements in the array ***
        int size() const {return this->size;}
// 8 : *** destructor ***
        ~Array()
        {
            delete[] element;
        }
};

#endif