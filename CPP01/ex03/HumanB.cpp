/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:57:54 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/18 17:03:03 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

void HumanB::attack() const {
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name) : _name(name) {
    std::cout << "HumanB constructor" << std::endl;
}

HumanB::~HumanB() {
    std::cout << _name << " destructor called" << std::endl;
}

void HumanB::setWeapon(Weapon& weaponptr) {
    _weapon = &weaponptr;
}