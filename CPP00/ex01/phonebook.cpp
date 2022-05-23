/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:09:41 by jcluzet           #+#    #+#             */
/*   Updated: 2022/05/23 04:37:27 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"


int ft_stoi(std::string str)
{
    int i = 0;
    int n = 0;
    while (str[i])
    {
        n = n * 10 + str[i] - '0';
        i++;
    }
    return n;
}

std::string enter_info(std::string str)
{
    std::string input;
    bool start = 0;
    std::string slen;
    for (size_t i = 0; i < (16 - str.length()); i++)
        slen += " ";
    std::cout << str << slen << "➔ ";
    if (std::getline(std::cin, input) == 0)
        return ("");
    while (input.length() == 0)
    {
        if (start != 0)
            std::cout << "\033[1A\033[K";
        start = 1;
        std::cout << "\033[1A\033[K";
        std::cout << str << slen << "➔ ";
        std::cout << "❌ Empty input" << std::endl;
        std::cout << "RETRY           ➔ ";
        input = "";
        if (std::getline(std::cin, input) == 0)
            return ("");
    }
    if (start != 0)
        std::cout << "\033[1A\033[K";
    std::cout << "\033[1A\033[K";
    std::cout << str << slen << "➔ " << input << " ✅" << std::endl;
    return(input);
}

int PhoneBook::addContact()
{
    bool start =0;
    bool digits = 0;
    if (PhoneBook::nb_Contact == 8)
    {
        std::cout << "Not enough memory " << std::endl << "Create new contact will erase the last" << std::endl;
        std::cout << "Are you sure? (y/n) ➔ ";
        std::string input;
        if (std::getline(std::cin, input) == 0)
            return (0);
        while (input.length() == 0 || ((input != "y") && (input != "n")))
        {
            if (start != 0)
                std::cout << "\033[1A\033[K";
            start = 1;
            std::cout << "\033[1A\033[K";
            std::cout << "Are you sure? (y/n) ➔ ";
            std::cout << "❌ Wrong input" << std::endl;
            std::cout << "RETRY           ➔ ";
            input = "";
            if (std::getline(std::cin, input) == 0)
                return (0);
        }
        if (input == "n")
        {
            std::cout << "Aborted" << std::endl;
            return (0);
        }
        nb_Contact--;
    }
    std::string input;
    set_homepage();
    std::cout << "\n------ NEW CONTACT ------\n\n\n";
    input = enter_info("FIRST NAME");
    if (input == "")
        return (-1);
    user[PhoneBook::nb_Contact].setFname(input);
    input = enter_info("LAST NAME");
    if (input == "")
        return (-1);
    user[PhoneBook::nb_Contact].setLname(input);
    input = enter_info("NICKNAME");
    user[PhoneBook::nb_Contact].setNname(input);


    std::cout << "NUMBER          ➔ ";
    if (getline(std::cin, input) == 0)
        return (-1);
    digits = 1;
    for (unsigned int i = 0; i < input.length(); i++)
    {
        if (input[i] < '0' || input[i] > '9')
            digits = 0;
    }
    while(input.length() != 10 || digits == 0)
    {
        if (start != 0)
            std::cout << "\033[1A\033[K";
        start = 1;
        std::cout << "\033[1A\033[K";
        std::cout << "Error: Phone number must be 10 digits long" << std::endl;
        std::cout << "NUMBER          ➔ ";
        input = "";
        if (std::getline(std::cin, input) == 0)
            return (-1);
    digits = 1;
    for (unsigned int i = 0; i < input.length(); i++)
    {
        if (input[i] < '0' || input[i] > '9')
            digits = 0;
    }
    }
    if (start != 0)
        std::cout << "\033[1A\033[K";
    std::cout << "\033[1A\033[K";
    std::cout << "NUMBER          ➔ " << input << " ✅" << std::endl;


    user[PhoneBook::nb_Contact].setnumber(input);
    input = enter_info("DARKEST SECRET");
    if (input == "")
        return (-1);
    user[PhoneBook::nb_Contact].setsecrets(input);
    user[PhoneBook::nb_Contact].setid(PhoneBook::nb_Contact);
    PhoneBook::nb_Contact++;
    std::cout << std::endl << "CONTACT ADDED ✅" << std::endl << std::endl;
    return (1);
}

int PhoneBook::searchContact()
{
    if (PhoneBook::nb_Contact == 0)
    {
        std::cout << "Error: No Contact in memory" << std::endl;
        return (-1);
    }
    set_homepage();
    int i = 0;
    std::string input;
    std::cout << "\n ___________________________________________\n";
    std::cout << "|                                           |\n";
    std::cout << "|  Index   |First Name| Last Name| Nickname |\n";
    std::cout << "|                                           |";
    while (i < PhoneBook::nb_Contact)
    {
        std::cout << "\n|";
        std::cout << std::setw(10) << user[i].get_id()+1;
        std::cout << "|";
        print_Contact(user[i].get_fname());
        std::cout << "|";
        print_Contact(user[i].get_lname());
        std::cout << "|";
        print_Contact(user[i].get_nname());
        std::cout << "|";
        i++;
    }
    std::cout << "\n|___________________________________________|\n";
    std::cout << "\nQuick search (type index): ";
    if (std::getline(std::cin, input) == 0)
        return (0);
    std::cout << std::endl;
    while (is_number(input) == 0 || ft_stoi(input) > PhoneBook::nb_Contact || ft_stoi(input) < 1)
    {
        if (is_number(input) == 0)
            std::cout << "\nError not a number\nQuick search (type index):  ";
        else
            std::cout << "\nError index not exist\nQuick search (type index):  ";
        if (std::getline(std::cin, input) == 0)
            return (0);
    }
    set_homepage();
    showContact(ft_stoi(input) - 1);
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
    nb_Contact = 0;
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