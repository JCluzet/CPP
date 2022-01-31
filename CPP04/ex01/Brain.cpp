/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 02:22:19 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/31 02:51:46 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor" << std::endl;
}

Brain::Brain(Brain const& other) {
    std::cout << "Brain copy constructor" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = other._ideas[i];
}

Brain& Brain::operator=(Brain const& src) {
    std::cout << "Assignation Brain operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = src._ideas[i];
    return (*this);
}

