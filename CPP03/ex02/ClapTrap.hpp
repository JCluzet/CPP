/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:01:42 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/26 17:48:51 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap
{
    public:
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const& other);
        ClapTrap& operator=(ClapTrap const& a);
        ~ClapTrap();
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    protected:
        std::string _name;
        int _hitpoints;
        int _energy_points;
        int _attack_damage;
};