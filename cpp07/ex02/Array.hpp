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
            element = NULL;
            lenght = 0;
        }
// 2 : *** Construction with an unsigned int n as a parameter ***
        Array(unsigned int n)
        {
            int i = n;
            if (i <= 0)
            {
                std::cout << "Error size !!" << std::endl;
                exit (1);
            }
            element = new(std::nothrow) T [n];
            if (element == NULL)
            {
                std::cout << "Error allocation !!" << std::endl;
                exit(1);
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
                exit (1);
            }
            for (int i = 0; i < obj.size(); i++)
                    element[i] = obj.element[i];
            this->lenght = obj.lenght;
        } 
// 4 : *** Construction by copy and assignment operator *** 
        Array &operator=(const Array & obj)
        {
            if (this != &obj)
            {
                delete[] element;
                this->element = new(std::nothrow) T [obj.size()];
                if (element == NULL)
                {
                    std::cout << "Eroor allocation !!" << std::endl;
                    exit(1);
                }   
                for (int i = 0; i < obj.size(); i++)
                    element[i] = obj.element[i];
                lenght = obj.lenght;
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
// 5 : *** operator new[] to allocate memory "but const for not modify anyting" ***
        const T& operator[](int i) const 
        {
            if (i >= 0 && i < this->size())
            {
                return (this->element[i]);
            }
            throw OutOfBounds();
        }
// 6 : *** exeption ***
        class OutOfBounds : public std::exception{
            const char *what() const throw()
            {
                return "i is : out of bounds";
            }
        };
// 7 : *** A member function size() that returns the number of elements in the array ***
        int size() const {return this->lenght;}
// 8 : *** destructor ***
        ~Array()
        {
            delete[] element;
        }
};

#endif