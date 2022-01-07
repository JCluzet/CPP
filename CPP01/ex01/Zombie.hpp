/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:07:16 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/07 21:39:55 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iomanip>
# include <iostream>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie();
        ~Zombie();
        void announce();
        void randomChump( std::string name );
        Zombie* newZombie(std::string name);
        Zombie* zombieHorde( int N, std::string name );
};

#endif