/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 00:29:04 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/31 03:22:23 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"
#include "Dog.hpp"

Dog::Dog() : _brain(new Brain) {
    std::cout << "Dog constructor" << std::endl;
    this->_type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
    delete _brain;
}

Dog::Dog(Dog const& other) : _brain(new Brain(*other._brain )){
    std::cout << "Dog copy constructor" << std::endl;
    this->_type = other._type;
}

Dog& Dog::operator=(Dog const& src)
{
    std::cout << "Assignation Dog operator called" << std::endl;
    delete _brain;
    this->_type = src._type;
    this->_brain = new Brain(*src._brain);
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}