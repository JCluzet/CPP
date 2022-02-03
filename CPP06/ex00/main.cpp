/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:31:34 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/03 16:06:45 by jcluzet          ###   ########.fr       */
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

    Convert conv(argv[1]);

    (void)static_cast<char>(conv);
    (void)static_cast<int>(conv);
    (void)static_cast<float>(conv);
    (void)static_cast<double>(conv);

    return (0);
}