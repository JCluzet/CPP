/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:12:12 by jcluzet           #+#    #+#             */
/*   Updated: 2021/12/28 13:58:44 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i = 1;
    int u = 0;
    char temp;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        while (i < argc)
        {
            while (argv[i][u])
            {
                if (argv[i][u] >= 'a' && argv[i][u] <= 'z')
                {
                    temp = toupper(argv[i][u]);
                    std::cout << temp;
                }
                else
                    std::cout << argv[i][u];
                u++;
            }
            u = 0;
            i++;
        }
        std::cout << std::endl;
    }
    return 0;
}