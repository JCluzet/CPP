/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:22:34 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/26 19:08:09 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap d1("bistouflex");
    std::cout << std::endl;
    
    ScavTrap b("Clapp");
    std::cout << std::endl;
    d1.attack("yo attacked");
    std::cout << std::endl;
    
    // DiamondTrap c1("bistouflex");
    // c1.whoAmI();
    // std::cout << c1._hitpoints << std::endl;
    // std::cout << c1._energy_points << std::endl;
    // std::cout << c1._attack_damage << std::endl;
    // c1.attack("hello");
    // c1.takeDamage(50);
    // c1.beRepaired(30);
    // c1.guardGate();
    // c1.highFivesGuys();
    return 0;
}