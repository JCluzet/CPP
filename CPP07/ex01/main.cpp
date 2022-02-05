/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 20:07:55 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/05 15:48:49 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void display(T const & elem)
{
    std::cout << elem << std::endl;
}

int main(void)
{
    char tab[10];
    
    int len = 10;
    for(int i = 0; i < len; i++)
        tab[i] = 'A';
    iter(tab, len, display);
    std::cout << std::endl;
    for (int u = 0; u < len; u++)
        tab[u] = 'B';
    iter(tab, len, display);
    return(0);
}
