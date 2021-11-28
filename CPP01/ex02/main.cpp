/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:37:41 by jcluzet           #+#    #+#             */
/*   Updated: 2021/11/26 18:50:54 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Address with str       : " << &str << std::endl;
    std::cout << "Address with stringPTR : " << stringPTR << std::endl;
    std::cout << "Address with stringREF : " << &stringREF << std::endl
    << std::endl;
    std::cout << "String with stringPTR  : " << *stringPTR << std::endl;
    std::cout << "String with stringREF  : " << stringREF << std::endl;
    return (0);
}