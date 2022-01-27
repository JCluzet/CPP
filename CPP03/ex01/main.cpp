/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:22:34 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/27 21:48:16 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main(void)
{
    ScavTrap a("HectorScav");
    std::cout << std::endl;
    
    ClapTrap b("HelloClap");
    a.attack("bidule");
    a.guardGate();
    a.beRepaired(10);

    std::cout << std::endl;
    
    a.attack("HectorScav");

    b.takeDamage(8);
    b.beRepaired(10);

    b.attack("HelloClap");
    return(0);
}