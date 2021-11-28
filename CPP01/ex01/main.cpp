/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:59:32 by jcluzet           #+#    #+#             */
/*   Updated: 2021/11/26 18:35:00 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
    int N = 10;
    // How to stock a var in the STACK >> auto destruct
    Zombie Zombase;
    Zombie *Horde;

    // How to stock a var in the HEAP
    Horde = Zombase.zombieHorde(N, "anakin");
    int i = 0;
    while (i < N)
    {
        Horde[i].announce();
        i++;
    }
    // Destruction of tab of zombies that's not auto
    delete [] Horde;
    return (0);
}