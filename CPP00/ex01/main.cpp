/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:43:14 by jcluzet           #+#    #+#             */
/*   Updated: 2021/11/23 01:49:31 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(int argc, char **argv)
{
    PhoneBook PhoneBook;
    std::string input;
    std::cout << " ____  ____  ____  ____  ____  ____  _____  ____  _  _ " << std::endl << "(  _ \\( ___)(  _ \\( ___)(  _ \\(_  _)(  _  )(  _ \\( \\/ )" << std::endl << " )   / )__)  )___/ )__)  )   /  )(   )(_)(  )   / \\  / " << std::endl << "(_)\\_)(____)(__)  (____)(_)\\_) (__) (_____)(_)\\_) (__) " << std::endl << std::endl;
    std::cout << "       Available command : ADD | SEARCH | EXIT\n\n\n\n\n\n\n\n\n" << std::endl;
    while (1)
    {
        std::cout << "$ ➔ ";
        std::getline(std::cin, input);
        if (ft_strcmp(input, "ADD"))
                PhoneBook.addContact();
        else if (ft_strcmp(input, "SEARCH"))
                PhoneBook.searchContact();
        else if (ft_strcmp(input, "EXIT"))
            return (0);
        else
            std::cout << "Wrong input" << std::endl;
    }
    return 0;
}





// int Contacts::is_empty()
// {
//     if (!m_fname && !m_lname && !m_nname && !m_pnumber && !m_secrets)
//         return(1);
//     return (0);
// }