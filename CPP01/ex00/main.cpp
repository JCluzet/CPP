/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:59:32 by jcluzet           #+#    #+#             */
/*   Updated: 2021/11/26 17:58:57 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
    Zombie paren("Zombie Parent");
    // How to stock a var in the STACK
    Zombie *child;

    // How to stock a var in the HEAP
    child = paren.newZombie("ana waldek 1");

    paren.randomChump("ana waldek 2");
    delete child;
    return (0);
}