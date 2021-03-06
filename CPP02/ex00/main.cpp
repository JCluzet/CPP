/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:56:38 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/26 01:31:47 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    // c.setRawBits(42);
    //b = c; // copy using assignation operator using getRawBits() 
    // std::cout << c << std::endl;
    // std::cout << b << std::endl;

    //std::cout << a.getRawBits() << std::endl;
    //std::cout << b.getRawBits() << std::endl;
    //std::cout << c.getRawBits() << std::endl;

    return 0;
}