/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 21:57:24 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/28 00:40:03 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name"), FragTrap(), ScavTrap() {
    std::cout << "DiamondTrap default constructor" << std::endl;
    this->_hitpoints = 100;
    this->_energy_points = 50;
    this->_attack_damage = 30;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& other) : ClapTrap(other), FragTrap(other), ScavTrap(other) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    this->_name = other._name;
    this->_hitpoints = other._hitpoints;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name + "_clap_name"), ScavTrap(name) {
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->_hitpoints = 100;
    this->_energy_points = 50;
    this->_attack_damage = 30;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& src) {
    std::cout << "Assignation DiamondTrap operator called" << std::endl;
    this->_name = src._name;
    this->_hitpoints = src._hitpoints;
    this->_energy_points = src._energy_points;
    this->_attack_damage = src._attack_damage;
    return(*this);
}

void DiamondTrap::whoAmI() {
    std::cout << "I am DiamondTrap and ClapTrap named " << this->ClapTrap::_name << std::endl;
}