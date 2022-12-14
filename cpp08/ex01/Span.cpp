#include "Span.hpp"

Span::Span()
{
	std::cout << "Default Constructor called" << std::endl;
}

Span::Span(unsigned int N)
{
	std::cout << "Constructor with one arg called" << std::endl;
	int a = N;
	if (a <= 0)
		throw(CreatExeption());
	vec.reserve(N);
}

Span::Span(const Span &obj)
{
	std::cout << "Copy Constructor called" << std::endl;
	vec.reserve(obj.vec.size());
	*this = obj;
}

Span::~Span()
{
	std::cout << "Destructor called" << std::endl;
}

Span &Span::operator=(const Span& obj)
{
	std::cout << "Assignement Operator called" << std::endl;
	std::vector<int>::const_iterator it_obj = obj.vec.begin();
	if (this != &obj)
	{
		while(it_obj != obj.vec.end() && this->vec.size() < this->vec.capacity())
		{
			this->addNumber(*it_obj);
			it_obj++;
		}
	}
	return *this;
}

void Span::addNumber(const int i)
{
    if (vec.size() != vec.capacity())
        vec.push_back(i);
    else 
        throw(CreatExeption()); 
}

int Span::longestSpan()
{
    int n;
    if (vec.size() <= 1)
        throw(CreatExeption());
    iter begin = vec.begin();
    iter end = vec.end();
    n = *(std::max_element(begin, end)) - *(std::min_element(begin, end));
    return (n);
}

int Span::shortestSpan()
{
    int nb;
    if (vec.size() <= 1)
        throw(CreatExeption());
    iter begin = vec.begin();
    std::vector<int>::reverse_iterator end = vec.rbegin();
    nb = *(begin) - *(end);
    if (nb < 0)
        nb *= -1;
    while (begin != vec.end())
    {
        if ((begin + 1) != vec.end())
        {
            int i = *(begin + 1) - *(begin);
            if (i < 0)
                i *= -1;
            if (i < nb)
                nb = i;
        }
        begin++;
    }
    return (nb);
}