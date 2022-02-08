/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:36:59 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/08 03:56:23 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>

class Span
{
    private:
        unsigned int _size;
        std::vector<int> _tab;
    public:
        Span();
        Span(unsigned int size);
        Span(Span const &src);
        ~Span(void);
        Span &operator=(Span const &rhs);
        void addNumber(int n);
        unsigned int shortestSpan(void);
        unsigned int longestSpan(void);
};