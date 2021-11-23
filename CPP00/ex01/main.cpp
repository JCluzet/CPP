/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:43:14 by jcluzet           #+#    #+#             */
/*   Updated: 2021/11/24 02:52:42 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook PhoneBook;
    std::string input;
    std::cout << " ____  ____  ____  ____  ____  ____  _____  ____  _  _ " << std::endl << "(  _ \\( ___)(  _ \\( ___)(  _ \\(_  _)(  _  )(  _ \\( \\/ )" << std::endl << " )   / )__)  )___/ )__)  )   /  )(   )(_)(  )   / \\  / " << std::endl << "(_)\\_)(____)(__)  (____)(_)\\_) (__) (_____)(_)\\_) (__) " << std::endl << std::endl;
    std::cout << "       Available command : ADD | SEARCH | EXIT\n\n\n\n\n\n\n\n\n" << std::endl;
    while (1)
    {
        std::cout << "$ ➔ ";   
        std::getline(std::cin, input);
        if (input == "ADD")
                PhoneBook.addContact();
        else if (input == "SEARCH")
                PhoneBook.searchContact();
        else if (input == "EXIT")
            return (0);
        else
            std::cout << "Wrong input" << std::endl;
    }
    return 0;
}