/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:43:14 by jcluzet           #+#    #+#             */
/*   Updated: 2022/05/23 03:59:46 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void set_homepage()
{
    // do a alternative clear screen
    std::cout << "\033[2J\033[1;1H";
    std::cout << " ____  ____  ____  ____  ____  ____  _____  ____  _  _ " << std::endl << "(  _ \\( ___)(  _ \\( ___)(  _ \\(_  _)(  _  )(  _ \\( \\/ )" << std::endl << " )   / )__)  )___/ )__)  )   /  )(   )(_)(  )   / \\  / " << std::endl << "(_)\\_)(____)(__)  (____)(_)\\_) (__) (_____)(_)\\_) (__) " << std::endl << std::endl;
    std::cout << "       Available command : ADD | SEARCH | EXIT\n\n\n" << std::endl;
}

int main(void)
{
    PhoneBook PhoneBook;
    std::string input;
    set_homepage();
    while (1)
    {
        std::cout << "$ ➔ ";   
        if (std::getline(std::cin, input) == 0)
            return (0);
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