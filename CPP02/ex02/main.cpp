/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:56:38 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/25 16:00:57 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

// int main(void)
// {
//     // Fixed b(Fixed(5.05f) * Fixed(2));

//     Fixed a(1.0f);
    
//     std::cout << ++a << std::endl;
//     std::cout << ++a << std::endl;
//     //std::cout << a + b << std::endl;
//     return (0);
// }

int main()
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    return 0;
}