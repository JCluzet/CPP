/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:13:15 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/21 16:14:25 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp" 

int     main(int ac, char **av){
    if (ac < 2 || !av[1][0])
    {
        std::cout << "No arguments" << std::endl;
        return (1);
    }
    if (ac > 2)
    {
        std::cout << "Too many arguments" << std::endl;
        return (1);
    }
    Karen karen;
    karen.complain(av[1]);
    return (0);
}