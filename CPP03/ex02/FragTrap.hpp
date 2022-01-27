/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 21:20:53 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/27 23:35:29 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(FragTrap const& other);
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap& operator=(FragTrap const& src);

        void highFivesGuys();
        void attack(std::string const & target);
};