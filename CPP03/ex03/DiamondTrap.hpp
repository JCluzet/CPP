/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 21:50:44 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/07 22:04:39 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:
        DiamondTrap(DiamondTrap const& other);
        DiamondTrap(std::string name);
        ~DiamondTrap();
        DiamondTrap& operator=(DiamondTrap const& src);
        void whoAmI();
    
    using FragTrap::_hitpoints;
    using ScavTrap::_energy_points;
    using FragTrap::_attack_damage;

    private:
        std::string _name;
};

#endif