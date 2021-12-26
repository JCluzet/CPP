/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:52:51 by jcluzet           #+#    #+#             */
/*   Updated: 2021/12/14 14:48:11 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iomanip>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
    private:
        Weapon &_weapon;
        std::string _name;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack();
};