/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:47:10 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/09 06:27:36 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

Span::~Span(void)
{
}

Span::Span(Span const &src)
{
    *this = src;
}

Span::Span() : _size(0), _tab()
{
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

std::vector<int> Span::getvec(void) const
{
    return (_tab);
}

unsigned int Span::shortestSpan(void)
{
    unsigned int shortest = _tab[1] - _tab[0];
    unsigned int distance = 0;

    std::vector<int> temp = _tab;
    if (_size < 2)
        throw std::exception();
    std::sort(temp.begin(), temp.end());
    for (unsigned int i = 1; i < temp.size(); i++)
    {
        distance = temp[i] - temp[i - 1];
        if (distance < shortest)
            shortest = distance;
    }
    return (shortest);
}


unsigned int     Span::longestSpan(void) const {
    if (_tab.size() <= 1)
		throw(std::out_of_range("Not enough elements for a span"));
	return (*std::max_element(_tab.begin(), _tab.end()) - *std::min_element(_tab.begin(), _tab.end()));
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (_size - _tab.size() < (unsigned long int)std::distance(begin, end))
        throw std::exception();
    _tab.insert(_tab.end(), begin, end);
}