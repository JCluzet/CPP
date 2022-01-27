/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:22:34 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/27 20:35:07 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Hector");

    ClapTrap b(a);

    ClapTrap x;

    std::cout << std::endl;
    
    ClapTrap c("Hello");
    a.attack("Barnabé");
    b.attack("humain");
    c.takeDamage(8);
    std::cout << std::endl;
    for(int x = 0; x < 10; x++)
        c.beRepaired(10);
    std::cout << std::endl;
    c.beRepaired(1);
    std::cout << std::endl;
    return(0);
}