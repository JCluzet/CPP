/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:56:53 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/18 17:07:31 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
    private:
        Weapon* _weapon;
        std::string const _name;
    public:
        void setWeapon(Weapon& weaponptr);
        HumanB(std::string name);
        ~HumanB();
        void attack() const ;
};
