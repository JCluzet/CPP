/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 00:29:04 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/08 01:59:49 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat constructor" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const& other)
{
    std::cout << "WrongCat copy constructor" << std::endl;
    this->_type = other._type;
}

WrongCat& WrongCat::operator=(WrongCat const& src)
{
    std::cout << "Assignation WrongCat operator called" << std::endl;
    this->_type = src._type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Miaou!" << std::endl;
}