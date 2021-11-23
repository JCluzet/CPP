/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:09:41 by jcluzet           #+#    #+#             */
/*   Updated: 2021/11/24 02:46:30 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

int PhoneBook::addContact()
{
    std::string input;
    
    if (PhoneBook::nb_contacts == 8)
    {
        std::cout << "Error : Memory full" << std::endl;
        return (-1);
    }
    std::cout << "\n------ NEW CONTACT ------\n\nFIRST NAME       ➔ ";
    std::getline(std::cin, input);
    user[PhoneBook::nb_contacts].setFname(input);
    std::cout << "LAST NAME        ➔ ";
    std::getline(std::cin, input);
    user[PhoneBook::nb_contacts].setLname(input);
    std::cout << "NICKNAME         ➔ ";
    std::getline(std::cin, input);
    user[PhoneBook::nb_contacts].setNname(input);
    std::cout << "NUMBER           ➔ ";
    std::getline(std::cin, input);
    user[PhoneBook::nb_contacts].setnumber(input);
    std::cout << "DARKEST SECRET'S ➔ ";
    std::getline(std::cin, input);
    user[PhoneBook::nb_contacts].setsecrets(input);
    user[PhoneBook::nb_contacts].setid(PhoneBook::nb_contacts);
    if (!(user[nb_contacts].get_fname() == ""
    && user[nb_contacts].get_lname() == ""
    && user[nb_contacts].get_nname() == ""))
        PhoneBook::nb_contacts++;
    std::cout << std::endl;
    return (1);
}

int PhoneBook::searchContact()
{
    int i = 0;
    std::string input;
    std::cout << "\n ___________________________________________\n";
    std::cout << "|                                           |\n";
    std::cout << "|  Index   |First Name| Last Name| Nickname |\n";
    std::cout << "|                                           |";
    while (i < PhoneBook::nb_contacts)
    {
        std::cout << "\n|";
        std::cout << std::setw(10) << user[i].get_id()+1;
        std::cout << "|";
        print_contacts(user[i].get_fname());
        std::cout << "|";
        print_contacts(user[i].get_lname());
        std::cout << "|";
        print_contacts(user[i].get_nname());
        std::cout << "|";
        i++;
    }
    std::cout << "\n|___________________________________________|\n";
    std::cout << "\nQuick search (type index): ";
    std::getline(std::cin, input);
    std::cout << std::endl;
    while (is_number(input) == 0 || std::stoi(input) > PhoneBook::nb_contacts || std::stoi(input) < 1)
    {
        if (is_number(input) == 0)
            std::cout << "\nError not a number\nQuick search (type index):  ";
        else
            std::cout << "\nError index not exist\nQuick search (type index):  ";
        std::getline(std::cin, input);
    }
    showContact(std::stoi(input) - 1);
    return(0);
}

int PhoneBook::showContact(int index)
{
    std::cout << "\nContact " << index + 1 << " :\n" << std::endl;
    std::cout << "FIRST_NAME     = " << user[index].get_fname() << std::endl;
    std::cout << "LAST_NAME      = " << user[index].get_lname() << std::endl;
    std::cout << "NICKNAME       = " << user[index].get_nname() << std::endl;
    std::cout << "NUMBER         = " << user[index].get_pnumber() << std::endl;
    std::cout << "DARKEST_SECRET = " << user[index].get_secrets() << std::endl;
    std::cout << std::endl;
    return (0);
}

PhoneBook::PhoneBook()
{
    nb_contacts = 0;
}

int is_number(std::string str)
{
    int i;

    i = 0;
    if (str.empty())
        return (0);
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}