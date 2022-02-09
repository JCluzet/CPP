/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 04:02:08 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/09 02:38:01 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
    Span s(5);
    s.addNumber(30);
    s.addNumber(10);
    s.addNumber(425);
    s.addNumber(1);
    std::cout << "Tab : { 30, 10, 425, 1 }" << std::endl;
    
    std::cout << "Shortest Span: " << s.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << s.longestSpan() << std::endl;

    Span a(5);
    a.addNumber(31);
    a.addNumber(5);
    a.addNumber(-10000);
    a.addNumber(1000);

    Span b(4);
    b.addNumber(31);
    b.addNumber(31);
    b.addNumber(31);
    b.addNumber(31);

    std::cout << std::endl << "Tab : { 1, 3, 5, 987 }" << std::endl;
    
    std::cout << "Shortest Span: " << a.shortestSpan() << std::endl;

    std::cout << "Longest Span: " << a.longestSpan() << std::endl;

    // create iterator from Span

    //a.addmultinumber(b.begin(), b.end());
    return(0);
}