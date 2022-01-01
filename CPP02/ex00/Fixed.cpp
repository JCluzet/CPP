/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:58:44 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/01 19:13:57 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Fixed.hpp"

Fixed::Fixed(Fixed const& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(void) : fixed_pt(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_pt;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_pt = raw;
}

Fixed& Fixed::operator=(Fixed const& a) {
    std::cout << "Assignation operator called" << std::endl;
    this->fixed_pt = a.getRawBits();
    return(*this);
}
