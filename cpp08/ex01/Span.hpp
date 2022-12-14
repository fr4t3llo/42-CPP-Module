#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iterator>
#include <iostream>

typedef std::vector<int>::iterator iter;
class Span
{
    private:
        std::vector<int>vec;
        // unsigned int N;
    public:
        Span();    
        ~Span();    
        Span(unsigned int N);    
        Span(const Span &obj);    
        Span &operator=(const Span &obj);
        void addNumber(int nb);
        int  shortestSpan();
        int  longestSpan();
        class CreatExeption: public std::exception
		{
			const char *what() const throw()
			{
				return ("Container reached maximum Size\n");
			}
		};
};

#endif