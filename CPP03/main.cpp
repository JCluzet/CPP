/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:22:34 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/04 17:27:16 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Hector");

    ClapTrap b(a);
    
    ClapTrap c("Hello");
    a.attack("Barnabé");
    b.attack("humain");
    c.takeDamage(8);
    c.beRepaired(10);
}