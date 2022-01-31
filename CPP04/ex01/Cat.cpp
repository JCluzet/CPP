/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 00:29:04 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/31 03:51:13 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"
#include "Cat.hpp"

Cat::Cat() : _brain(new Brain()) {
    std::cout << "Cat constructor" << std::endl;
    this->_type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
    delete _brain;
}

Cat::Cat(Cat const& other) : _brain(new Brain(*other._brain)) {
    std::cout << "Cat copy constructor" << std::endl;
    this->_type = other._type;
}

Cat& Cat::operator=(Cat const& src)
{
    std::cout << "Assignation Cat operator called" << std::endl;
    delete _brain;
    this->_type = src._type;
    this->_brain = new Brain(*src._brain);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miaou!" << std::endl;
}