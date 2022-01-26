/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:55:57 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/26 19:07:00 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& other): ClapTrap(other._name) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    this->_name = other._name;
    this->_hitpoints = other._hitpoints;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap constructor called" << std::endl;
    this->_name = name;
    this->_hitpoints = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& src) {
    std::cout << "Assignation ScavTrap operator called" << std::endl;
    this->_name = src._name;
    this->_hitpoints = src._hitpoints;
    this->_energy_points = src._energy_points;
    this->_attack_damage = src._attack_damage;
    return(*this);
}

void ScavTrap::attack(std::string const & target) {
    std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap have enttered in Gate Keeper Mode" << std::endl;
}