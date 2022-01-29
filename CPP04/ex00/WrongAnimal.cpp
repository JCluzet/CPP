/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 00:14:53 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/29 16:19:16 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

void WrongAnimal::makeSound() const
{
    std::cout << "*LOUD AND WRONG ANIMAL SOUND*" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return _type;
}

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor" << std::endl;
    this->_type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& other)
{
    std::cout << "WrongAnimal copy constructor" << std::endl;
    this->_type = other._type;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& src)
{
    std::cout << "Assignation WrongAnimal operator called" << std::endl;
    this->_type = src._type;
    return (*this);
}
