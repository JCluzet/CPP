/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:58:59 by jcluzet           #+#    #+#             */
/*   Updated: 2021/11/26 17:29:48 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
    Zombie* zombie = new Zombie(name);
    if (zombie == NULL)
        return NULL;
    return zombie;
}