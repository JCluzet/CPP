/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:57:54 by jcluzet           #+#    #+#             */
/*   Updated: 2021/12/14 14:45:30 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon weapon)
{
    _weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
    _name = name;
}

HumanB::~HumanB()
{
    std::cout << _name << " died" << std::endl;
}