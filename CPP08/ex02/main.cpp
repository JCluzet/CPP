/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 23:43:09 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/09 00:25:19 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define RESET "\033[0m"
#include <iostream>

int main()
{
	MutantStack<int> stac;
	
    stac.push(1);
    stac.push(76);
	stac.push(33);

    std::cout << MAGENTA << "stac.top()  = " << RESET << stac.top() << std::endl;

	stac.pop();
	
    std::cout << MAGENTA << "stac.size() = " << RESET << stac.size() << std::endl;

	stac.push(13);
	stac.push(21);
	stac.push(4);
	stac.push(53);

	MutantStack<int>::iterator it = stac.begin();
	MutantStack<int>::iterator ite = stac.end();


    std::cout << *it << std::endl;
    it++;
    std::cout << *it << std::endl;
	--it;
    std::cout << *it << std::endl;

    std::cout << YELLOW << "stack       = " << RESET;
	while (it != ite)
	{
		std::cout << *it; 
		++it;
        if (it != ite)
            std::cout << " | ";
	}
    std::cout << std::endl;


	MutantStack<int> temp;

	for (int i = 0; i < 800; i++)
		temp.push(i);

	it = temp.begin();
	ite = temp.end();

    std::cout << YELLOW << "big stack   = " << RESET;
	while (it != ite)
	{
		std::cout << *it;
		++it;
        if (it != ite)
            std::cout << " | ";
	}
    std::cout << std::endl;






	for (int i = 0; i < 400; i++)
	{	
		//std::cout << temp.top() << std::endl;
		temp.pop();
	}
	it = temp.begin();
	ite = temp.end();
    std::cout << std::endl;
	std::cout << YELLOW << "stack.pop() x400= " << RESET;
	while (it != ite)
	{
		std::cout << *it;
		++it;
        if (it != ite)
            std::cout << " | ";
	}
    std::cout << std::endl;
	return 0;
}