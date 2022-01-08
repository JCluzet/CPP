/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 00:29:04 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/08 01:11:53 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat constructor" << std::endl;
    this->_type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(Cat const& other)
{
    std::cout << "Cat copy constructor" << std::endl;
    this->_type = other._type;
}

Cat& Cat::operator=(Cat const& src)
{
    std::cout << "Assignation Cat operator called" << std::endl;
    this->_type = src._type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miaou!" << std::endl;
}