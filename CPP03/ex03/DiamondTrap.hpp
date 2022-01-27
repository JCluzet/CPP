/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 21:50:44 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/28 00:11:19 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:
        DiamondTrap();
        DiamondTrap(DiamondTrap const& other);
        DiamondTrap(std::string name);
        ~DiamondTrap();
        DiamondTrap& operator=(DiamondTrap const& src);
        void whoAmI();
        using ScavTrap::attack;

    private:
        std::string _name;
};