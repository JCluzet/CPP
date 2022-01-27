/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:55:26 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/28 00:01:18 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(ScavTrap const& other);
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap& operator=(ScavTrap const& src);

        void guardGate();
        void attack(std::string const& target);
};