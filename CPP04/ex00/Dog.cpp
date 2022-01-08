/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 00:29:04 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/08 01:12:21 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constructor" << std::endl;
    this->_type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(Dog const& other)
{
    std::cout << "Dog copy constructor" << std::endl;
    this->_type = other._type;
}

Dog& Dog::operator=(Dog const& src)
{
    std::cout << "Assignation Dog operator called" << std::endl;
    this->_type = src._type;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}