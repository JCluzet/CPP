/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 04:02:08 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/09 06:26:01 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
    Span s(11);
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

    // call addNumber with a vector of int
    std::vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(987);

    try {
    std::cout << std::endl << "Tab : { 1, 3, 5, 987 }" << std::endl;
    s.addNumber(v.begin(), v.end());
    // print tab s 
    for (int i = 0; i < s.getvec().size(); i++)
        std::cout << s.getvec()[i] << " ";
    }
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try {
    std::cout << std::endl << "Tab : { 30, 10, 425, 1, 1, 3, 5, 987 }" << std::endl;
    s.addNumber(v.begin(), v.end());
    // print tab s 
    for (int i = 0; i < s.getvec().size(); i++)
        std::cout << s.getvec()[i] << " ";
    }
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return(0);
}