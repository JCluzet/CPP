/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:50:23 by jcluzet           #+#    #+#             */
/*   Updated: 2021/12/14 14:31:52 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iomanip>
# include <iostream>

class Weapon
{
    private:
        std::string _type;

    public:
        void setType(std::string type);
        std::string getType() const;
        Weapon(std::string name);
        ~Weapon();
};

#endif