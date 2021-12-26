/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:18:29 by jcluzet           #+#    #+#             */
/*   Updated: 2021/12/14 14:30:16 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iomanip>
# include <iostream>
# include "Weapon.hpp"

void Weapon::setType(std::string type)
{
    _type = type;
}

std::string Weapon::getType() const
{
    return _type;
}

Weapon::Weapon(std::string name)
{
    _type = name;
}

Weapon::~Weapon()
{
}