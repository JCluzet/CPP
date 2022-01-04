/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:21:57 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/04 17:29:18 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

// Constructeur de copie

ClapTrap::ClapTrap(ClapTrap const& other) : _name(other._name), _hitpoints(other._hitpoints), _energy_points(other._attack_damage), _attack_damage(other._attack_damage) {
    std::cout << "Copy Constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& a) {
    std::cout << "\033[0;33mAssignation ClapTrap operator called\033[m" << std::endl;
    this->_name = a._name;
    this->_hitpoints = a._hitpoints;
    this->_energy_points = a._energy_points;
    this->_attack_damage = a._attack_damage;
    return (*this);
}


ClapTrap::ClapTrap(std::string name): _hitpoints(10), _energy_points(10), _attack_damage(0) {
    std::cout << "Constructor called" << std::endl;
    this->_name = name;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target) {
    std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << this->_name << " take " << amount << " damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap " << this->_name << " repaired " << amount << " damage." << std::endl;
}

