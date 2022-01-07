/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 21:23:17 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/07 21:33:35 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const& other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    this->_name = other._name;
    this->_hitpoints = other._hitpoints;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap constructor called" << std::endl;
    this->_name = name;
    this->_hitpoints = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
}

FragTrap& FragTrap::operator=(FragTrap const& src) {
    std::cout << "Assignation FragTrap operator called" << std::endl;
    this->_name = src._name;
    this->_hitpoints = src._hitpoints;
    this->_energy_points = src._energy_points;
    this->_attack_damage = src._attack_damage;
    return(*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "This is an HighFive from FragTrap" << std::endl;
}