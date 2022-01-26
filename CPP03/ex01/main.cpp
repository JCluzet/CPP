/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:22:34 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/26 17:57:43 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a("HectorScav");
    ClapTrap b("HelloClap");
    
    a.takeDamage(8);
    a.beRepaired(10);
    
    a.attack("HectorScav");

    b.takeDamage(8);
    b.beRepaired(10);

    b.attack("HelloClap");
    return(0);
}