/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:21:57 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/27 23:17:07 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(ClapTrap const& other) : _name(other._name), _hitpoints(other._hitpoints), _energy_points(other._energy_points), _attack_damage(other._attack_damage) {
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
    std::cout << "ClapTrap Constructor called" << std::endl;
    this->_name = name;
}

ClapTrap::ClapTrap(): _name(""), _hitpoints(10), _energy_points(10), _attack_damage(0) {
    std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target) {
    if (_energy_points == 0 )
        std::cout << "ClapTrap " << this->_name << " can't attack because _energy_points == 0" << std::endl;
    else if (_hitpoints == 0)
        std::cout << "ClapTrap " << this->_name << " can't attack because _hitpoints == 0" << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_energy_points == 0 )
        std::cout << "ClapTrap " << this->_name << " can't take damage because _energy_points == 0" << std::endl;
    else if (_hitpoints == 0)
        std::cout << "ClapTrap " << this->_name << " can't take damage because _hitpoints == 0" << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " take " << amount << " damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energy_points > 0)
    {
        std::cout << "ClapTrap " << this->_name << " repaired " << amount << " damage and lost 1 energy_points." << std::endl;
        _energy_points--;
        _hitpoints += amount;
    }
    else
        std::cout << "ClapTrap " << this->_name << " can't repared because having no energy_points..." << std::endl;
}
