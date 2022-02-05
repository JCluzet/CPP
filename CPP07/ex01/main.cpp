/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 20:07:55 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/05 18:37:58 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main(void)
{
    int tab[10]; // can change the type here
    
    int len = 10;
    for(int i = 0; i < len; i++)
        tab[i] = 'A' + i;
    iter(tab, len, display);
    std::cout << std::endl;
    for (int u = 0; u < len; u++)
        tab[u] = 'Z' - u;
    iter(tab, len, display);
    return(0);
}
