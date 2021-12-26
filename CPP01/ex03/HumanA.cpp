/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:59:01 by jcluzet           #+#    #+#             */
/*   Updated: 2021/12/14 14:49:50 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
    _name = name;
}

HumanA::~HumanA()
{
    std::cout << _name << " died" << std::endl;
}