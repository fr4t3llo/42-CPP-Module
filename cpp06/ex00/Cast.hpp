/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:35:38 by skasmi            #+#    #+#             */
/*   Updated: 2022/12/11 22:36:11 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAST_HPP
#define CAST_HPP

#include <iostream>


class Cast
{
    private:
        std::string input;
    public:
        Cast();
        ~Cast();
        Cast(const Cast &obj);
        Cast(std::string _input);
        Cast &operator= (const Cast &obj);
    //set & get
        void            setInput(std::string input);
        std::string     getInput(void) const;
    //methode
        void __toInt(std::string _input)const;
        void __toChar(std::string _input)const;
        void __toFloat(std::string _input)const;
        void __toDouble(std::string _input)const;
        int  __infFloat(std::string _input)const;
        int  __infDouble()const;
        void __executeConvert()const;
        
        bool is_int();

};

#endif