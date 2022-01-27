/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:22:34 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/27 23:38:52 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ScavTrap a("HectorScav");

    std::cout << std::endl;
    
    ClapTrap b("HelloClap");
    a.attack("bidule");
    a.guardGate();
    a.beRepaired(10);

    std::cout << std::endl;

    FragTrap y("FRAGO");
    y.attack("bidule");
    y.beRepaired(10);

    std::cout << std::endl;
    
    a.attack("OTHER");

    b.takeDamage(8);
    b.beRepaired(10);

    std::cout << std::endl;

    b.attack("HelloClap");

    std::cout << std::endl;
    return(0);
}