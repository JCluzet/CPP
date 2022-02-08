/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:23:31 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/08 03:32:39 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
    std::cout << "Creating a vector of 10 elements" << std::endl << std::endl;
    std::vector<int> tab;
    std::cout << "Fill the vector with { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }" << std::endl << std::endl;
    for (int i = 0; i < 10; i++)
        tab.push_back(i);
    

    std::cout << "Try to find 7 : " << std::endl;
    try
    {
        easyfind(tab, 9);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Try to find 14 :" << std::endl;
    try
    {
        easyfind(tab, 14);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
