/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:07:03 by jcluzet           #+#    #+#             */
/*   Updated: 2021/11/26 18:31:14 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "now dead by destructor" << std::endl;
}

Zombie::Zombie()
{
    ;
}

void Zombie::announce()
{
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::zombieHorde( int N, std::string name )
{
    int i = 0;

    Zombie* horde = new Zombie[N];
    if (horde == NULL)
        return NULL;
    while (i < N)
    {
        horde[i]._name = name;
        i++;
    }
    return (horde);
}