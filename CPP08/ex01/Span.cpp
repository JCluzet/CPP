/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:47:10 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/08 04:04:44 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::~Span(void)
{
}

Span::Span(Span const &src)
{
    *this = src;
}

Span::Span() : _size(0), _tab() {
    std::cout << "Default constructor" << std::endl;
}

Span::Span(unsigned int size)
{
    if (size <= 0)
        throw std::exception();
    _size = size;
}

void Span::addNumber(int n)
{
    if (_tab.size() >= _size)
        throw std::exception();
    _tab.push_back(n);
}

Span &Span::operator=(Span const &rhs)
{
    _size = rhs._size;
    _tab = rhs._tab;
    return (*this);
}

unsigned int Span::shortestSpan(void)
{
    return(0);
}

unsigned int Span::longestSpan(void)
{
    return(0);
}