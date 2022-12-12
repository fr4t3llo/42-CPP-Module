/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:16:30 by skasmi            #+#    #+#             */
/*   Updated: 2022/12/12 03:01:44 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"


Cast::Cast(std::string _input) : input(_input) 
{
    // std::cout << "Cast Default Constructor whit one argument called" << std::endl;
}

Cast::Cast()
{
    // std::cout << "Cast Default Constructor called" << std::endl;
}

Cast::~Cast()
{
    // std::cout << "Cast Destructor called" << std::endl;
}

Cast::Cast(const Cast &obj)
{
    // std::cout << "Cast copy constructor called" << std::endl;
    *this = obj;
}

Cast & Cast::operator=(const Cast &obj)
{
    if (this == &obj)
        return *this;
    this->input = obj.input;
    return *this;
}

void Cast::__toChar(std::string input) const
{
    int nb = std::stoi(input);
    if (isprint(nb))
        std::cout << "char: " << "'" <<static_cast<char>(nb) << "'" <<std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
}

void Cast::__toInt(std::string input) const
{
    int nb = std::stoi(input);
    std::cout << "Int: " << static_cast<int>(nb) << std::endl;
}

void Cast::__toDouble(std::string input) const
{
    double nb = std::stod(input);
    std::cout << "Double: " << static_cast<double>(nb) << std::endl;
}

void Cast::__toFloat(std::string input) const
{
    float nb = std::stof(input);
    std::cout << "Float: " << static_cast<float>(nb) << "f" << std::endl;    
}

void Cast::__executeConvert() const
{
    
    std::cout.precision(1);
    std::cout << std::fixed;
    try 
    {
        this->__toChar(this->input);
    }
    catch(...)
    {
        std::cout << "char: impossible" << std::endl;
    }
    try 
    {
        this->__toInt(this->input);
    }
    catch(...)
    {
        std::cout << "int: impossible" << std::endl;
    }
    try 
    {
        this->__toFloat(this->input);
    }
    catch(...)
    {
        std::cout << "float: impossible" << std::endl;
    }
    try 
    {
        this->__toDouble(this->input);
    }
    catch(...)
    {
        std::cout << "double: impossible" << std::endl;
    }
}

bool Cast::is_int()
{
    for(size_t i = 0; i < input.length(); i++)
    {
        if (!('0' <= input[i] && input[i] <= '9'))
            return false;
    }
    return true;
}