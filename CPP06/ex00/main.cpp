/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:31:34 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/24 23:42:13 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./cast <nb>" << std::endl;
        return (1);
    }
    Convert c(argv[1]);
    char i1;
    i1 = static_cast<char>(c);
    int i;
    i = static_cast<int>(c);
    float i2;
    i2 = static_cast<float>(c);
    double i3;
    i3 = static_cast<double>(c);

    return (0);
}