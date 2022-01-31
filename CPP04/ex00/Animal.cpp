/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 00:14:53 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/31 02:19:20 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

void Animal::makeSound() const
{
    std::cout << "*LOUD ANIMAL SOUND*" << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(Animal const& other)
{
    std::cout << "Animal copy constructor" << std::endl;
    this->_type = other._type;
}

Animal& Animal::operator=(Animal const& src)
{
    std::cout << "Assignation Animal operator called" << std::endl;
    this->_type = src._type;
    return (*this);
}
